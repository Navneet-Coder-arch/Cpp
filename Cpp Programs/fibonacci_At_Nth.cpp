#include <iostream>

using namespace std;

int fibonacci_AtN(int n){
    
    int f_ele = 0, s_ele = 1;
    int ans = 0; 

    for (int i = 3; i <= n; i++){
        int c_ele = (f_ele + s_ele);

        if (i == n){
            ans = c_ele;
        }

        f_ele = s_ele;
        s_ele = c_ele; 

    }

    return ans;

}

int main() {
    int n;

    cout << "Enter the value of 'n': ";
    cin >> n;

    cout << "The value at 'n'th: " << fibonacci_AtN(n) << endl; // line: 5

    return 0;
}
