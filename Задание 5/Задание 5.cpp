#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int n;
    cout << "Введите пятизначное число: ";
    cin >> n;
    if ((n <= 9999) || (n >= 100000))
        cout << "Число неверно. Введите пятизначное число: " << endl;
    else
        if ((n / 10000 == n % 10) && (n % 10000 / 1000) == (n % 100) / 10)
        {
            cout << "Число " << n << " палиндром" << endl;
        }
        else cout << "Число " << n << " не является палиндромом" << endl;
    system("pause");
}