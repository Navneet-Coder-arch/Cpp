#include <iostream>

using namespace std;

int main() {
    int cols;
    cout << "Number Of Columns: ";
    cin >> cols;

    for (int i = 1; i <= (cols + 1); i++){
        for (int j = 1; j <= ((cols + 1) - i); j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}