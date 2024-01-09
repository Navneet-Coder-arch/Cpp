#include <iostream>

using namespace std;

int main() {
    int cols;
    cout << "Number Of Columns: ";
    cin >> cols;

    for (int i = 1; i <= (cols + 1); i++){ // cols + 1 is done for printing correct columns
        for (int j = 1; j < i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}