#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "ukr"); // дозволити використання української мови

    char a, b;
    std::cout << "введіть значення для змінної a: ";
    std::cin >> a;
    std::cout << "введіть значення для змінної b: ";
    std::cin >> b;

    char* ptrA = &a;
    char* ptrB = &b;

    // виведення значення a та b перед обміном
    std::cout << "значення змінної a перед обміном: " << *ptrA << std::endl;
    std::cout << "значення змінної b перед обміном: " << *ptrB << std::endl;

    // обмін значення змінних через покажчики
    char temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    // виведення значення a та b після обміну
    std::cout << "значення змінної a після обміном: " << *ptrA << std::endl;
    std::cout << "значення змінної b після обміном: " << *ptrB << std::endl;

    return 0;
}
