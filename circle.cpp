#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    const float e=10e-8;
    double x1, y1, x2, y2;
    string s;
    string num="";
    ifstream fi("INPUT.TXT");
    fi >> x1 >> y1 >> x2 >> y2;
    fi.close();
    double d, a, b;
    d=abs((y2*x1-x2*y1)/sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
    a=sqrt(x1*x1+y1*y1);
    b=sqrt(x2*x2+y2*y2);
    int rez=0;
    if ((2*x1*x1-2*x1*x2+2*y1*y1-2*y1*y2<0)||(2*x2*x2-2*x1*x2+2*y2*y2-2*y1*y2<0)){
        rez=(int)(max(a, b)+e)-(int)(min(a, b)-e);
    } else {
        rez=(int)(a+e)-(int)(d-e);
        rez=rez+(int)(b+e)-(int)(d-e);
        if ((abs(round(d)-d)<e)&&(abs(d)>e)) {
            rez--;
        }
    }
    ofstream fo("OUTPUT.TXT");
    fo << rez;
    fo.close();
    return 0;
}
