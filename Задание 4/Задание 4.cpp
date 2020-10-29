#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    double r, s;
    cout << "Введите радиус окружности: ";
    cin >> r;
    s = 3.1415926535 * r * r; // 3.1415926535 в данном случае это число "пи"
    cout << "Площадь окружности равна = " << s << endl;
    system("pause");
}
