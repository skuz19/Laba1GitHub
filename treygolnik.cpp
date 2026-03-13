#include <iostream>
#include <cmath>

using namespace std;

double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}

double calculateArea(double a, double b, double c) {   //Герон 
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
} 

bool isIsosceles(double a, double b, double c) {
    return (a == b) || (b == c) || (a == c);
}

int main() {  
    double a, b, c;
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = calculatePerimeter(a, b, c);
        double area = calculateArea(a, b, c);
        bool isIsoscelesResult = isIsosceles(a, b, c);

        int choice;
        cout << "Выберите действие:\n";
        cout << "1. Рассчитать периметр\n";
        cout << "2. Рассчитать площадь\n";
        cout << "3. Проверить на равнобедренность\n";
        cout << "4. Все вышеперечисленное\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Периметр треугольника: " << perimeter << endl;
                break;
            case 2:
                cout << "Площадь треугольника: " << area << endl;
                break;
            case 3:
                if (isIsoscelesResult) {
                    cout << "Треугольник равнобедренный." << endl;
                } else {
                    cout << "Треугольник не равнобедренный." << endl;
                }
                break;
            case 4:
                cout << "Периметр треугольника: " << perimeter << endl;
                cout << "Площадь треугольника: " << area << endl;
                if (isIsoscelesResult) {
                    cout << "Треугольник равнобедренный." << endl;
                } else {
                    cout << "Треугольник не равнобедренный." << endl;
                }
                break;
            default:
                cout << "Неправильный выбор." << endl;
        }
    } else {
        cout << "Треугольник с такими длинами сторон не может существовать." << endl;
    }
    return 0;
} // вошмощшмоышмтщшмывм балалалала 
