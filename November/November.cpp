#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    std::ofstream miniText;
    std::ifstream text;
    miniText.open("Words.txt");
    text.open("Stih.txt");
    if (!text.is_open() || !miniText.is_open())
    {
        std::cerr << "Error\n";
    }
    else
    {
        std::cout << "Open\n";
        std::string stroka;
        int some = 0;
        int chislo;
        std::cout << "Введите максимальное количество букв, которое может быть в слове\n";
        std::cin >> chislo;
        while (!text.eof())
        {
            stroka = "";
            text >> stroka;
            if (stroka.size() <= chislo)
            {
                miniText << stroka << "\n";
            }
        }
    }
    text.close();
    miniText.close();
}
