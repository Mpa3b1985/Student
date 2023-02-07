#include<iostream>
#include<string>
using namespace std;

class Universety
{
private:
    int discount;
    int level;

public:
    void SetUni(int d, int l)
    {
        discount = d;
        level = l;
    }

    void GetDiscount()
    {
        cout << "Скидка в столовой=" << discount << endl;
    }

    void GetLevel()
    {
        cout << "Допуск в корпус № " << level << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    Universety prepod;
    prepod.SetUni(30,4);

    Universety botan;
    botan.SetUni(25,3);

    Universety tech;
    tech.SetUni(20,2);

    Universety student;
    student.SetUni(5,1);

    cout << "\nДля преподователей предусмотрено:" << endl;

    prepod.GetDiscount();
    prepod.GetLevel();

    cout << "\nДля научного персонала предусмотрено:" << endl;

    botan.GetDiscount();
    botan.GetLevel();

    cout << "\nДля технического персонала предусмотрено:" << endl;

    tech.GetDiscount();
    tech.GetLevel();

    cout << "\nДля студентов предусмотрено:" << endl;

    student.GetDiscount();
    student.GetLevel();

    return 0;
}
