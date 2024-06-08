#include <iostream>
using namespace std;

void check_divisible(int x){
    if (x%2==1)
        cout<<"NO";
    else{
        int parts = x/2;
        if (parts-1 == 0)
            cout<<"NO";
        else
            cout<<"YES";
    }
}

int main(){
    int x;
    cin>>x;
    check_divisible(x);
    return 0;
}