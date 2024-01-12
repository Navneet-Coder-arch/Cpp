#include <iostream>

using namespace std;

void swapAlternateEleArr(int *arr, int n);

int main() {
    int n;
    cout << "Size Of The Array: ";
    cin >> n;// taking size of the array

    int *arr = new int[n]; // creation of array dynmicall

    cout << "Elements Of The Array: ";
    for (int i = 0; i < n; i++){// taking all elements of the array
        cin >> arr[i];
    }

    swapAlternateEleArr(arr, n); // line no: 5p, 24m

    return 0;
}

void swapAlternateEleArr(int *arr, int n){ // n = size of the array
    int size = n;

    if ((n & 1) == 1){
        size -= 1; // adjusting the size
    }

    for (int i = 0; i < size; i += 2){ // swapping the alternate elements of the array
        swap(*(arr + i), *(arr + (i + 1)));
    }

    cout << "Array After Reversing Alternate Elements: ";
    for (int i = 0; i < n; i++){ // printing the array
        cout << *(arr + i) << " ";
    }

}
