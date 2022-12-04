#include <iostream>
using namespace std;
double my_pow(double number, unsigned int power)
{
    double numpow = 1;
    for (int i = 0; i < power; i++)
    {
        numpow *= number;
    }
    return numpow;
}
int main()
{
    setlocale(LC_ALL, "russian");
    double number;
    unsigned int power;
    cout << "Введите дробное число" << endl;
    cin >> number;
    cout << "Введите положительную целую степень" << endl;
    cin >> power;
    double answer = my_pow(number, power);
    cout << "Число: " << number << endl;
    cout << "Степень: " << power << endl;
    cout << "Число^(Степень): " << answer << endl;
    return 0;
}