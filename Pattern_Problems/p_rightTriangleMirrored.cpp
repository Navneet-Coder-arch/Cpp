#include <iostream>
                        
using namespace std;

//function to print mirrored right triangle
void patternMirroredRightTriangle(int cols){
    
    int n = 1;

    for (int i = 0; i < cols; i++){
        
        for (int j = 0; j < cols - n; j++){
            cout << " ";
        }

        for (int k = 0; k < n; k++){
            cout << "*";
        }

        cout << endl;

        n++; 
    }
}
 
int main(){
    //variables
    int cols;

    //taking the value of cols from the user
    cout << "Columns: ";
    cin >> cols;

    //calling function to print
    patternMirroredRightTriangle(cols);                                
                      
    return 0;
}
 