#include <iostream>

using namespace std;

void hollowInvertedHalfPryamid(int cols){
    for (int i = 0 ; i < cols; i++){
        for (int j = (cols - i); j > 0; j--){
            if (i == 0 || j == 1 || j == (cols - i)){
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

    hollowInvertedHalfPryamid(cols);

    return 0;
}