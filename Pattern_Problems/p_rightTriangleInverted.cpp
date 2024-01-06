#include <iostream>
                        
using namespace std;

//function for printing the the inverted right triangle
void patternRightTriangleInverted(int cols){
    for (int i = 0; i < cols; i++){
        for(int j = 0 + i; j < cols; j++){
            cout << "*";
        }
        cout << endl;
    }
}
 
int main(){
    //variables
    int cols;

    //taking the value of cols from the user
    cout << "Columns: ";
    cin >> cols;

    //calling the ffunction for printing the pattern
    patternRightTriangleInverted(cols);                            
                      
    return 0;
}
 