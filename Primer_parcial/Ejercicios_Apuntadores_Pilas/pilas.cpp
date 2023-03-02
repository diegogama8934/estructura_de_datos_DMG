#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int>pila;
    pila.push(1);
    pila.push(10);
    pila.push(4);
    cout<<"El tamaño es de: " << pila.size() << endl;
    cout<<"El elemento de hasta arriba es: " << pila.top()<<endl;
    pila.pop();
    cout<<"El nuevo elemento de hasta arriba es: " << pila.top()<<endl;
}