#include <iostream>
                        
using namespace std;

//function for printing the square pattern
void patternSquare_Rectangle(int rows, int cols){

    for (int i = 0; i < cols; i++){

        for (int j = 0; j < rows; j++){
            cout << "*";
        }

        cout << endl;

    }

}
 
int main(){
    //variables
    int rows, cols;

    //taking the value of rows and cols from the user
    cout << "Rows: ";
    cin >> rows;

    cout << "Columns: ";
    cin >> cols;

    //calling function to print the square pattern
    patternSquare_Rectangle(rows, cols);                                
                      
    return 0;
}
 