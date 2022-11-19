#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a,b;
    int opzione=0;
    cin>>a>>b>>opzione;
    switch(opzione){
        case 0:
            cout<<(a*b)/2<<endl;
            break;
        case 1:
            cout<<pow(a,2)<<endl;
            break;
        case 2:
            cout<<a*b<<endl;
            break;
        default:
            cout<<"opzione non valida"<<endl;
    }
    return 0;
    }
