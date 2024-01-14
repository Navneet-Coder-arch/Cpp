#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius){
    return (((9 * celsius) / 5) + 32);
}

double fahrenheitToCelsius(double fahrenheit){
    return (((fahrenheit - 32) * 5) / 9);
}

int main() {
    char opt;

    cout << "a. Celsius To Fahrenheit" << endl;
    cout << "b. Fahrenheit To Celsius" << endl;
    cout << "Option: ";
    cin >> opt;

    switch (opt){
        case 'a':
            double celsius;
            cout << "Value Of Celsius: ";
            cin >> celsius;
            cout << "Celsius In Fahrenheit: " << celsiusToFahrenheit(celsius) << " f (Aprox.)" << endl;
            break;

        case 'b':
            double fahrenheit;
            cout << "Value Of Fahrenheit: ";
            cin >> fahrenheit;
            cout << "Fahrenheit In Celsius: " << fahrenheitToCelsius(fahrenheit) << " c (Aprox.)" << endl;
            break;

        default:
            cout << "Something Invalid!!" << endl;
            break;
    }

    return 0;
}
