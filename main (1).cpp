/******************************************************************************
Declarar arreglos 
Autor: Elisa Michelle MV.
Fecha: 3003322
*******************************************************************************/
#include <iostream>
using namespace std;
int main ()
{
    //Declaracion de variables y arreglos 
int numeros [5];
//numeros que se va a sumar 
int numerosolicitado;
//arreglo donde guardo los resultados 
int suma [5];

//solicitar los valores del arreglo numeros 
cout<<"escribe el valor de posicion 0";
cin>>numeros [0];
cout <<"escribe el valor de posicion 1";
cin>>numeros [1];
cout<<"escribe el valor de posicion 2";
cin>>numeros [2];
cout<<"escribe el valor de posicion 3";
cin>>numeros [3];
cout<<"escribe el valor de posicion 4";
cin>>numeros [4];
//Realiza la suma y guardar en el arreglo suma;
suma [0]=numeros [0]+numerosolicitado;
suma [1]=numeros [1]+numerosolicitado;
suma [2]=numeros [2]+numerosolicitado;
suma [3]=numeros [3]+numerosolicitado;
suma [4]=numeros [4]+numerosolicitado;
//Enviar resultado a pantalla 
cout<< "Arreglo suma posicion 0:" <<suma [0]<<endl;
cout<< "Arreglo suma posicion 1:" <<suma [1]<<endl;
cout<< "Arreglo suma posicion 2:" <<suma [2]<<endl;
cout<< "Arreglo suma posicion 3:" <<suma [3]<<endl;
cout<< "Arreglo suma posicion 4:" <<suma [4]<<endl;
    return 0;

    return 0;

}

