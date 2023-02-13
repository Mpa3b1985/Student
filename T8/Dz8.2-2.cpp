#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    string path = "file.txt";

    ifstream fin;
    fin.exceptions(ifstream::badbit | ifstream::failbit);

    try
    {
        cout << "Попытка открыть файл" << endl;
        fin.open(path);
        cout << "Файл открыт" << endl;
    }
    catch (const std::exception & e)
    {
        cout << e.what() << endl;
        cout << "Ошибка открытия" << endl;
    }

    return 0;
} 
