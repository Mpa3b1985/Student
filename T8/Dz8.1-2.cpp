#include<iostream>
#include<string>
using namespace std;
//статические объекты

class stolovaya
{
public:
    int skidka;

public:
    int SetDiscount(int s)
    {
        skidka = s;
    }

    int GetDiscount()
    {
        return skidka;
    }
};

//объекты одущевленные

class Human
{
public:
    string name;
    int age{ 0 };
    int propusk{ 0 };

public:
    void SetHuman(int a,int p,string n)
    {
        age = a;
        name = n;
        propusk = p;
    }

    string GetName()
    {
        return name;
    }

    int GetPropusk()
    {
        return propusk;
    }
};

class Teacher: public Human, public stolovaya
{

};

class Researcher: public Human, public stolovaya
{

};

class Technical: public Human, public stolovaya
{

};

class Student: public Human
{
public:
    string GetSt()
    {
        cout << "Пусти красный крестик" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    Teacher korp1;
    korp1.SetHuman(57,4,"Иванов Иван Иванович");
    korp1.SetDiscount(15);

    Researcher korp2;
    korp2.SetHuman(46, 3, "Сидоров Петр Иванович");
    korp2.SetDiscount(10);

    Technical korp3;
    korp3.SetHuman(51, 2, "Федоров Степан Иванович");
    korp3.SetDiscount(5);

    int stolov1 = korp1.GetDiscount();
    int stolov2 = korp2.GetDiscount();
    int stolov3 = korp3.GetDiscount();

    Student st;
    st.SetHuman(22, 1, "Петров Петр Петрович");



    return 0;
}