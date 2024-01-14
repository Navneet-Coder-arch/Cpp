#include <iostream>

using namespace std;

int main() {
    string str;
    int countVowels = 0;

    cout << "Enter A String: ";
    getline(cin, str);

    for (char ch: str){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            countVowels++;
        }
    }

    cout << "Number Of Vowel In The Given String: " << countVowels << endl;

    return 0;
}
