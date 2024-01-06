#include <iostream>
                        
using namespace std;

//function for printing the mirrored right triangle inverted
void patternMirroredInvertedRightTriangle(int cols){
    
    int n = cols;

    for (int i = 0; i < cols; i++){

        for (int j = n; j < cols; j++){
            cout << " ";
        }

        for (int k = 0; k < n; k++){
            cout << "*";
        }

        cout << endl;
        n--;

    }

}
 
int main(){
    //variables
    int cols;

    //taking the value of cols from the user
    cout << "Columns: ";
    cin >> cols;

    //calling function to print the pattern
    patternMirroredInvertedRightTriangle(cols);                                
                      
    return 0;
}
