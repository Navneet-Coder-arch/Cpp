#include <iostream>

using namespace std;

int sumOfDigits(int n){

    int ans = 0;

    while(n != 0){
        int digit = n % 10;

        ans += digit;

        n /= 10;

    }

    return ans;

}

int main() {
    int n;
    cout << "Enter A +ve Number: ";
    cin >> n;

    cout << "Sum Of The Digits Of The Number: " << sumOfDigits(n) << endl;  

    return 0;
}
