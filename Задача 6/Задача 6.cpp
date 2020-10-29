#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    float m, km, f;
    cout << "Введите растояние в милях: ";
    cin >> m;
    km = m * 1.609344;
    f = m * 5280;
    cout << m << " миль = " << km << " километров" << endl;
    cout << m << " миль = " << f <<" футов" << endl;
    system("pause");
}
