#include <iostream>
using namespace std;

bool strob(string s){
    bool rez = 1;
    for (int i=0; i<s.length()/2; ++i){
        if (s[i]=='6'){
            if (s[s.length()-1-i]!='9'){
                rez = 0;
                break;
            }
        } else if (s[i]=='9'){
            if (s[s.length()-1-i]!='6'){
                rez = 0;
                break;
            }
        } else if (s[i]=='8'){
            if (s[s.length()-1-i]!='8'){
                rez = 0;
                break;
            }
        } else if (s[i]=='0'){
            if (s[s.length()-1-i]!='0'){
                rez = 0;
                break;
            }
        } else if (s[i]=='1'){
            if (s[s.length()-1-i]!='1'){
                rez = 0;
                break;
            }
        } else {
            rez = 0;
            break;
        };
    };
    return rez;
}

int main(){
    string s;
    cin >> s;
    if (strob(s)==1)
        cout << "true";
    else
        cout << "false";
    return 0;
}
