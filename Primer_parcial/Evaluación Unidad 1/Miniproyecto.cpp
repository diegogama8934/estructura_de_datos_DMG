#include <stdlib.h>//Numeros aleatorios
#include <iostream> //Entrada y salida de texto.
#include <time.h>

using namespace std;

int main()
{
    int Numero;
    int Aleatorio;
    int c = 1;
    int M;
    int m;
    cout<<"Para jugar tienes que fijar un numero minimo y un numero maximo. El programa eligira un numero al azar entre ese rango y tu debes adivinar ese numero en 5 intentos o menos.\n";
    srand(time(NULL));

    cout<<"Elige el limite menor: \n";
    cin>>m;
    
    cout<<"Elige el numero del limite mayor: \n";
    cin>>M;

	Aleatorio = rand()% M + m;

    do
    {
		cout<<"Elija un numero: "; cin>>Numero;
        if (Numero == Aleatorio)
        {
            cout<<"\nAdivinaste el numero\n";
	        cout<<"Numero de intentos: "<<c<<endl;
            abort();
        }
        if (c == 5)
        {
            cout<<"\nEl numero que buscabas era " << Aleatorio << "\n";
            abort();
        }
        
		if (Numero > Aleatorio){
			cout<<"\nel numero es menor, elija otro \n";
		}
		else if (Numero < Aleatorio){
			cout<<"\nel numero es mayor, elija otro \n";
		} 
        c++;
	}while (Numero != Aleatorio);

    return 0;
}