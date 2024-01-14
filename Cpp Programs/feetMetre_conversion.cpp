#include <iostream>

using namespace std;

double metreToFeet(double metre){
    return (metre * 3.28084);
}

double feetToMetre(double feet){
    return (feet / 3.28084);
}

int main() {
    char opt;

    cout << "a. Metre To Feet" << endl;
    cout << "b. Feet To Metre" << endl;
    cout << "Option: ";
    cin >> opt;

        switch (opt)
        {
        case 'a':
            double metre;
            cout << "Value Of Metre: ";
            cin >> metre;
            cout << "Metre In Feet: " << metreToFeet(metre) << " feet (Aprox.) " << endl;
            break;
        
        case 'b':
            double feet;
            cout << "Value Of Feet: ";
            cin >> feet;
            cout << "Feet In Metre: " << feetToMetre(feet) << " metre (Aprox.)" << endl;
            break;

        default:
            cout << "Something Invalid!!" << endl;
            break;
        }

    return 0;
}
