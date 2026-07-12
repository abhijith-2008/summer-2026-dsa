#include <iostream>
using std::cout;
using namespace std;
int main(){
    string s="0p";
    string s1="";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    for(int j=0;j<s.length();j++){
        if(s[j]>= 97 && s[j] <= 122 ){
            s1+=s[j];

        }
    }
    for (int k=0;k<s1.length();k++){
        cout<<s1[k];
    }

}
