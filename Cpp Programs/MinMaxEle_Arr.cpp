#include <iostream>
#include <vector>

using namespace std;

void findMinMax (int *arr, int n) { // time complexity(of this algo) = O(n)

    int maxEle = *(arr + 0), minEle = *(arr + 0);

    for (int i = 0; i < n; i++){
        if (*(arr + i) > maxEle){
            maxEle = *(arr + i);
        }else if (*(arr + i) < minEle){
            minEle = *(arr + i);
        }
    }

    cout << "Max Element: " << maxEle << endl;
    cout << "Min Element: " << minEle << endl;

    return; 
 
}

int main() {
    int n; // size initialization
    cout << "Size Of The Array: ";
    cin >> n;

    int *arr = new int[n]; // array elements initialization
    cout << "Elements Of The Array: ";
    for (int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    findMinMax(arr, n); // line: 5

    return 0;
}
