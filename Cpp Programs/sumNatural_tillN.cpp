#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter The Value Of n: ";
    cin >> n;

    int sumNatural = 0;
    for (int i = 1; i <= n; i++){
        sumNatural += i;
    }

    cout << "Sum Of First 'n' Natural Number: " << sumNatural << endl;

    return 0;
}
