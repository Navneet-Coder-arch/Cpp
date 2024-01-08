#include <iostream>

using namespace std;

int main() {
    int rows, cols; //cols = columns
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> cols;

    for (int i = 0; i < cols; i++){
        for (int j = 1; j <= rows; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}