#include <iostream>

using namespace std;

void hollowFullPyramid(int cols){
    for (int i = 1; i <= cols; i++){
        for (int j = 1; j <= (cols - i); j++){
            cout << " ";
        }

        for (int k = 0; k < i; k++){
            if (k == 0 || k == (i - 1) || i == cols){
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int cols;
    cout << "Columns: ";
    cin >> cols;

    hollowFullPyramid(cols);

    return 0;
}
