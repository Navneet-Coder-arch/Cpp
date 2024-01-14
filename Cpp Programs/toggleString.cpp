#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    cout << "Enter A String: ";
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++){
        if (islower(str[i])){
            str[i] = toupper(str[i]);
        }else {
            str[i] = tolower(str[i]);
        }
    }

    cout << "Toggled String: " << str << endl;

    return 0;
}
