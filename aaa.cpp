#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    // Імя гравця
    string studentFullName = "Asta";
    // Номер гравця в командi
    unsigned int studentID = 7;
    // Вік гравця
    unsigned short int studentAge = 18;
    // Зріст гравця
    unsigned short int growth = 181;
    // Вага гравця
    unsigned short int weight = 59;
    // День народження гравця
    string BirthDay = "December; 17, 1999";
    // Швидкий?
    bool invincible = true;
    // Адреса прописки гравця
    string originAddress = "USA";
    unsigned int totalMemoryInBytes = sizeof(studentFullName) +


        sizeof(studentID) +
        sizeof(studentAge) +
        sizeof(growth) +
        sizeof(weight) +
        sizeof(BirthDay) +
        sizeof(invincible) +
        sizeof(originAddress);

    cout << "Iм'я гравця:\t\t" << studentFullName << endl;
    cout << "Номер гравця в командi:\t" << studentID << endl;
    cout << "Вiк гравця:\t\t" << studentAge << endl;
    cout << "Зрiст гравця(см):\t" << growth << endl;
    cout << "Вага гравця(кг):\t" << weight << endl;
    cout << "День народження гравця:\t" << BirthDay << endl;
    cout << "Швидкий?:\t\t" << ((invincible) ? "Так" : "Нi") << endl;
    cout << "Адреса:\t\t\t" << originAddress << endl;

    cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<

        totalMemoryInBytes << endl;
}