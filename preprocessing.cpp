#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#define MODE 1

#if MODE == 1
    void add(double a, double b);
#endif

int main()
{
    setlocale(LC_ALL, "RU");

#ifndef MODE
    #error Не определена константа MODE
#elif MODE == 0
    cout << "Работаю в режиме тренировки" << endl;
#elif MODE == 1
    cout << "Работаю в боевом режиме" << endl;
    double a{}, b{};
    cout << "Введите число 1: ";
    cin >> a;
    cout << "Введите число 2: ";
    cin >> b;
    add(a, b);
#else
    cout << "Неизвестный режим. Завершение работы" << endl;
#endif

    return EXIT_SUCCESS;
}

void add(double a, double b)
{
    cout << "Результат сложения: " << (a + b) << endl;
}