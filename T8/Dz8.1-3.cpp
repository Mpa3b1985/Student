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
    void SetPerson(int w, int a, string n, string  g)
    {
        weight = w;
        age = a;
        name = n;
        gender = g;
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

class Student : public Person
{
private:
    int year;

public:
    void SetYear(int y)
    {
        year = y;
    }

    int GetYear()
    {
        return year;
    }
};


int main()
{
    Person human;
    human.SetPerson(72, 37, "Vladimir", "M");

    Student st;
    st.SetPerson(31, 20, "Ivanov", "M");
    st.SetYear(2022);


    int weight = human.GetWeight();
    int age = human.GetAge();
    string name = human.GetName();
    string gender = human.GetGender();

    int year = st.GetYear();

    cout << "Weight=" << weight << "\nAge=" << age << "\nName=" << name << "\nGender=" << gender << endl;
    if (year == 2023)
    {
        cout << "Ne studen" << endl;
    }
    else
    {
        cout << "Student" << endl;
    }

    return 0;
}
