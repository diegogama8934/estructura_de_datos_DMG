#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int vec1[] = {1,2,3,4,5};
    int *ap;
    ap=vec1;

    for(int i=0; i<5; i++){
        cout<<"valor: "<<ap[i]<<endl;
        cout<<"Apuntador: "<<&ap[i]<<endl;
    }
}