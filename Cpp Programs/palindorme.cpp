#include <iostream>
#include <string>
using namespace std;

//example = 5
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact *= i;
    }
    return fact;
}

//example = "dad"
bool palindrome_check(string str, int size){
    int len=(size-1);
    int i=0;
    for(i; i<size; i++){

        if(len==i){
            break;
        }
        else if(str[i]==str[len]){
            len -= 1;
            continue;
        }else{
            break;
        }
    }
    if(len==i){
        return true;
    }else{
        return false;
    }
}

int main(){
    int len;
    string var;

    cout<<"Lenght Of The word: ";
    cin>>len;

    cout<<"Word: ";
    cin>>var;

    if(palindrome_check(var, len)==true){
        cout<<"The Given Word Is Palindrome!!";
        cout<<endl;
    }else{
        cout<<"The Given Word Isn't Palindrome!!";
        cout<<endl;
    }

    return 0;
}
