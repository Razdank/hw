#include <iostream>
using namespace std;

bool powfour(long long int n){
    bool rez = 0;
    long long int x=1;
    while (x<=n){
        if (x==n){
            rez = 1;
            return rez;
        }
        x*=4;
    }
    return rez;
}

int main(){
    long long int n;
    cin >> n;
    if (powfour(n)==1)
        cout << "true";
    else
        cout << "false";
    return 0;
}
