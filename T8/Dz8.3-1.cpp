#include<iostream>
#include<string>
using namespace std;

class Person 
{
private:
    int weight;
    int age;
    string name;
    string gender;

public:
    void SetPerson(int w,int a,string n,string  g)
    {
        weight=w;
        age=a;
        name=n;
        gender=g;
    }

    int GetWeight()
    {
        return weight;
    }

    int GetAge()
    {
        return age;
    }
    
    string GetName()
    {
        return name;
    }

       string GetGender()
    {
        return gender;
    }
};

int main()
{
    Person student;
    student.SetPerson(72,37,"Vladimir","M");
    
    int weight=student.GetWeight();
    int age=student.GetAge();
    string name=student.GetName();
    string gender=student.GetGender();

    cout << "Weight=" << weight << endl;
    cout << "Age=" << age << endl;
    cout << "Name=" << name << endl;
    cout << "Gender=" << gender << endl;
    
    return 0;
}
