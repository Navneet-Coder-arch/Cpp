#include <iostream>

using namespace std;

double arrayElement_Average(int *arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += *(arr + i);
    }

    return (sum / n);
}

int main() {
    int n;
    cout << "Size Of The Array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Elements Of The Array: ";
    for (int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    cout << "Average Of All Elements Of The Array: " << arrayElement_Average(arr, n);

    return 0;
}
