#include <iostream>

using namespace std;

int main() {
    int cols;
    cout << "Number Of Columns: ";
    cin >> cols;

    for (int i = 1; i <= cols; i++){
        for (int j = 1; j <= (cols - i); j++){
            cout << " ";
        }

        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i || i == cols){
                cout << k << " ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}