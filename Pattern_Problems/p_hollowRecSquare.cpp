#include <iostream>

using namespace std;

void hollowRecSquare(int rows, int cols){
    for (int i = 0; i < cols; i++){
        for (int j = 0; j < rows; j++){
            if (i == 0 || i == (cols - 1) || j == (rows - 1) || j == 0){
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Rows: ";
    cin >> rows;

    cout << "Columns: ";
    cin >> cols;

    hollowRecSquare(rows, cols);

    return 0;
}