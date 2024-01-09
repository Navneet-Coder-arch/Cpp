#include <iostream>

using namespace std;

int main() {
    int cols;
    cout << "Number Of Columns: ";
    cin >> cols;

    for (int i = 1; i <= cols; i++){
        for (int j = 1; j <= i; j++){
            if (i == 1 || j == 1 || j == i || i == cols){
                cout << j << " ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}