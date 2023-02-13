#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void FileWasNotOpenedException(string path)
{
    ifstream fin;
    fin.exceptions(ifstream::badbit | ifstream::failbit);
    fin.open(path);
}

int main()
{
    setlocale(LC_ALL, "ru");

    string path = "file.txt";

    try
    {
        cout << "Попытка открыть файл" << endl;
        FileWasNotOpenedException(path);
        cout << "Файл открыт" << endl;
    }
    catch (const std::exception & e)
    {
        cout << e.what() << endl;
        cout << "Ошибка открытия" << endl;
    }

    return 0;
} 
