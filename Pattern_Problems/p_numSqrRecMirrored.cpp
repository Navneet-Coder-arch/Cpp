#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cout << "Rows: ";
    cin >> rows;

    cout << "Columns: ";
    cin >> cols;

    for (int i = 0; i < cols; i++){
        for (int j = rows; j > 0; j--){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}