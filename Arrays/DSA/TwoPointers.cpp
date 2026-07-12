#include <iostream>
#include <string>
using std::cout;
int main(){
    std::string name="madam";
    int l=0;
    int r=name.length()-1;
    while (l<r){
        if (name[l]!=name[r]){
            cout << "Not a palindrome";
            break;
        }
        l++;
        r--;


    }
    cout << "Palindrome";

}