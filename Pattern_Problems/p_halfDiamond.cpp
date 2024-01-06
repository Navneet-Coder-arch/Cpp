#include <iostream>
                        
using namespace std;

//function for printing the half diamond pattern
void patternHalfDiamond(int cols){

    int n = (cols - 1);

    for (int i = 0; i < cols; i++){
        
        for (int j = n; j < cols; j++){
            cout << "*";
        }

        cout << endl;
        n--;

    }

    int l = 1;

    for (int i = 0; i < (cols - 1); i++){

        for (int j = 0; j < (cols - l); j++){
            cout << "*";
        }

        cout << endl;
        l++;

    }

}

int main(){
    //variables
    int cols;

    //taking the value of cols from the user
    cout << "Columns: ";
    cin >> cols;

    //calling function to print the half diamond pattern
    patternHalfDiamond(cols);                              
                      
    return 0;
}
 