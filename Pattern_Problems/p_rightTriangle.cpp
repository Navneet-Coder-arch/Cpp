#include <iostream>
                        
using namespace std;

//function for printing the rightTriangle star pattern
void patternRightTrinagle(int cols){
    for (int i = 1; i <= cols; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
 
int main(){
    //varaibles
    int cols;

    //taking the value of cols from the user
    cout << "Columns: ";
    cin >> cols;

    //calling function for printing
    patternRightTrinagle(cols);
                      
    return 0;
}
    