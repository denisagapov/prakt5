#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int a, b, c;
    float d;
    cout << "Введите 1-е число: ";
    cin >> a;
    cout << "Введите 2-е число: ";
    cin >> b;
    cout << "Введите 3-е число: ";
    cin >> c;

    d = (a + b + c) / 3.0;
    cout << "Среднее арифметическое = " << d << endl;
    system("pause");
}

