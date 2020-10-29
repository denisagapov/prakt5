#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
	float radian,gradus; 
	cout << "Введите радиан для перевода: ";
	cin >> radian;
	gradus = radian * (180 / 3.1415926535);
	cout << radian << " радиан = " << gradus << " градусов" <<  endl;
	system("pause");
}

