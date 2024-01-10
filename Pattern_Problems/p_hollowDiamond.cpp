#include <iostream>

using namespace std;

void patternHollowDiamond(int cols){
    for (int i = 1; i <= cols; i++){
        for (int j = 1; j <= (cols - i); j++)
            cout << " ";

        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i){
                cout << "* ";
            }else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= cols; i++){
        for (int j = (cols - i); j < cols; j++)
            cout << " ";

        for (int k = i; k < cols; k++){
            if (k == i || k + 1 == cols){
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
    cout << "Number Of Columns: ";
    cin >> cols;

    patternHollowDiamond(cols);

    return 0;
}
