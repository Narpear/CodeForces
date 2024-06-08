#include <iostream>
#include <string>
using namespace std;

void shorten(string s){
    int n = s.length();
    string result = s[0]+to_string(n-2)+s[n-1];
    cout<<result<<"\n";
}

int main(){
    int n;
    cin>>n;
    string words[100];
    for(int i = 0; i<n; i++){
        cin>>words[i];
    }
    for(int i = 0; i<n; i++){
        if (words[i].length()<=10){
            cout<<words[i]<<"\n";
        } else{
            shorten(words[i]);
        }
    }
    return 0;
}