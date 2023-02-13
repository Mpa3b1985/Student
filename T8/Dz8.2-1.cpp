#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int devide (int value)
{
    if (value == 0)
    {
        throw value;
    }

    return 1024 / value;
}


int main()
{
    setlocale(LC_ALL, "ru");

    int n;

    cout << "Введите число= " << endl;
    cin >> n;

    try
    {
        cout << devide(n) << endl;
    }
    catch (const int ex)
    {
        cout << "Число равно " << ex << endl;
    }

    return 0;
}