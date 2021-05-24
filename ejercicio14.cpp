/*Hacer un programa para ingresar una lista de 8 números y luego informar si todos están
ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos
como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”*/


#include <iostream>

using namespace std;

int main (){
int n,i,anterior;
bool ordenado=true;

cout<<"ingrese 8 numeros:"<<endl;

for (i=1;i<=8;i++){
    cin>>n;
    if (i>1){
        if (n<anterior){
            ordenado = false;
        }
    }
    anterior=n;
}
cout<<endl;
if (ordenado==true){
    cout<<"conjunto ordenado"<<endl;
}
else{
    cout<<"conjunto no ordenado"<<endl;
}
}
