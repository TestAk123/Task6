#include <iostream>
using namespace std;
double my_pow(double number,  int power)
{
    double numpow = 1;
    int abs_power = abs(power);
    for (int i = 0; i < abs_power; i++)
    {
        numpow *= number;
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
    double answer = my_pow(number, power);
    cout << "Число: " << number << endl;
    cout << "Степень: " << power << endl;
    cout << "Число^(Степень): " << answer << endl;
    return 0;
}