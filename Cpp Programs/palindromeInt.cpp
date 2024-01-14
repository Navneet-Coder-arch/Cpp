#include <iostream>

using namespace std;

bool palindromeCheck(int n){
    string nStr = to_string(n);

    int start = 0, end = ((nStr.size()) - 1);

    while(start < end){
        if (nStr[start] != nStr[end]){
            return false;
        }

        start++;
        end--;
    }

    return true;

}

int main() {
    int n;

    cout << "Input a number: ";
    cin >> n;

    cout << "0 for False & 1 for True => " << palindromeCheck(n) << endl;

    return 0;
}
