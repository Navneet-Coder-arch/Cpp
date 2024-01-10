#include <iostream>

using namespace std;

void patternSolidDiamond(int cols){
    for (int i = 1; i <= cols; i++){
        for (int j = 1; j <= (cols - i); j++){
            cout << " ";
        }

        for (int k = 1; k <= i; k++){
            cout << "* ";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= cols; i++){
        for (int j = (cols - i); j < cols; j++){
            cout << " ";
        }

        for (int k = i; k < cols; k++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int cols;
    cout << "Number Of Columns: ";
    cin >> cols;

    patternSolidDiamond(cols);

    return 0;
}
