#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> decimalToBinary(int num){

    vector<int> binary;

    while(num != 0){
        binary.push_back((num % 2));
        num /= 2;    
    }

    //reversing the vector
    reverse(binary.begin(), binary.end());

    return binary;

}

int main() {
    int num;
    cout << "Enter A Number: ";
    cin >> num; //taking the number from the user

    vector<int> binaryRef = decimalToBinary(num);// stroing binary representation of var 'num'

    //print binary representation of the var 'num'
    cout << "Binary Representation Of " << num << ": ";
    for (int ele: binaryRef){
        cout << ele;
    }
    cout << endl;

    return 0;
}
