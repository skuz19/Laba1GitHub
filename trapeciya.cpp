#include <iostream>
#include <cmath>
using namespace std;

double p(double a, double b, double c, double d) {
    return a + b + c + d;
}
//123
double s(double a, double b, double h) {
    return ((a + b) * h) / 2;
}

double srl(double a, double b) {
    return (a + b) / 2;
}

int main() {
    setlocale(LC_ALL, "RU");

    int x, j = 1;
    double a, b, c, d, h;
    
    while (j != 0) {
        cout << "Введите значения:" << endl;
        cout << "1. Периметр" << endl;
        cout << "2. Площадь" << endl;
        cout << "3. Средняя линия" << endl;
        cout << "4. Выход" << endl;
        cin >> x;

        switch (x) {
            case 1:
                cout << "Основания и боковые стороны: " << endl;
                cin >> a >> b >> c >> d;
                if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
                    cout << "Ошибка: длины сторон должны быть больше 0." << endl << endl;
                    break;
                }
                
                if ((a + b + c <= d) || (a + b + d <= c) || (a + c + d <= b) || (b + c + d <= a)) {
                    cout << "Ошибка: трапеция не существует." << endl << endl;
                    break;
                }

                cout << "Периметр: " << p(a, b, c, d) << endl << endl;
                break;

            case 2:
                cout << "Длины оснований и высота: " << endl;
                cin >> a >> b >> h;
                if (a <= 0 || b <= 0 ||  h <= 0) {
                    cout << "Ошибка: длины оснований и высота должны быть больше 0." << endl << endl;
                    break;
                }

                if ((a + b + c <= d) || (a + b + d <= c) || (a + c + d <= b) || (b + c + d <= a)) {
                    cout << "Ошибка: трапеция не существует." << endl << endl;
                    break;
                }

                cout << "Площадь: " << s(a, b, h) << endl << endl;
                break;

            case 3:
                cout << "Длины оснований: " << endl;
                cin >> a >> b;
                if (a <= 0 || b <= 0) {
                    cout << "Ошибка: длины оснований должны быть больше 0." << endl << endl;
                    break;
                
                }
                cout << "Средняя линия: " << srl(a, b) << endl << endl;
                break;

            case 4:
                j = 0;
                break;

            default:
                cout << "Ошибка: выберите пункт от 1 до 4." << endl;
                break;
        }
    }

    return 0;
}
