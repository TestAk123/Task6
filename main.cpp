#include <iostream>
using namespace std;

double my_pow_fast_test(double number, const unsigned int& power, unsigned int power_this, unsigned int& power_present)
{
    number *= number;
    power_this *= 2;
    power_present = power_this;
    if (power_this * 2 <= power)
    {
        double number_returned = my_pow_fast_test(number, power, power_this, power_present);
        if (power_present + power_this < power)
        {
            number *= number_returned;
            power_present += power_this;
        }
        else
        {
            return number_returned;
        }
    }
    return number;
}
double my_pow_fast_start(double number, int power)
{
    double numpow = 1;
    unsigned int abs_power = abs(power);
    if (abs_power < 4)
    {
        for (int i = 0; i < abs_power; i++)
        {
            numpow *= number;
        }
    }
    else
    {
        numpow *= number;
        unsigned int power_present = 1;
        numpow = my_pow_fast_test(numpow, abs_power, power_present, power_present);
        if (abs_power % 2 != 0)
        {
            numpow *= number;
        }
    }    
    if (power < 0)
    {
        numpow = 1 / numpow;
    }
    return numpow;
}
int main()
{
    setlocale(LC_ALL, "russian");
    double number;
    int power;
    cout << "Введите дробное число" << endl;
    cin >> number;
    cout << "Введите целую степень" << endl;
    cin >> power;
    double answer = my_pow_fast_start(number, power);
    cout << "Число: " << number << endl;
    cout << "Степень: " << power << endl;
    cout << "Число^(Степень): " << answer << endl;
    return 0;
}