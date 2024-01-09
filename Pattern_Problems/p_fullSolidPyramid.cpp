#include <iostream>

using namespace std;

void hollowFullPyramid(int cols){
    for (int i = 1; i <= cols; i){
        for (int j = 0; j < (cols - i); j++){
            cout << " ";
        }

        for (int k = 0; k < i; k){
            cout << "* ";
            k++; 
        }

        cout << endl;
        i++;
    }
}

int main() {
    int cols;
    cout << "Number Of Columns: ";
    cin >> cols;

    hollowFullPyramid(cols);

    return 0;
}
