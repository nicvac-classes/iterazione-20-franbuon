#include <iostream>
using namespace std;

int main() {
    int bdisp, bpiano, h;
    cout<<"Quanti blocchi ci sono?"<<endl;
    cin>>bdisp;
    bpiano=1;
    h=0;
    while(bdisp>=bpiano)
    {
        bdisp=bdisp-bpiano;
        bpiano=bpiano+1;
        h=h+1;
    }
    cout<<"L'altezza è "<<h;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
