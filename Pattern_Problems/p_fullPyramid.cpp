#include <iostream>
                        
using namespace std;

//function to print the full pyramid pattern
void patternFullPyramid(int cols){

    int n = 1;

    for (int i = 0; i < cols; i++){

        for (int j = n; j < cols; j++){
            cout << " ";
        }

        for (int k = 0; k < n; k++){
            cout << "*" << " ";
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

    //calling function to print the pattern
    patternFullPyramid(cols);                                
                      
    return 0;
}
 