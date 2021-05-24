/*Hacer un programa para ingresar un número y luego informar todos los divisores pares
de ese número.
Ejemplo 1. Si se ingresa 6 se listarán: 2 y 6
Ejemplo 2. Si se ingresa 8 se listarán: 2 y 4.
Ejemplo 3. Si se ingresa 11 no se listará nada*/

#include <iostream>

using namespace std;

int main (){
int n,i;

cout<<"ingrese un numero: ";
cin>>n;
cout<<endl;
cout<<"los divisores par del numero ingresado son:"<<endl;

for (i=1;i<=n;i++){
    if (n%i==0){
            if(i%2==0){
              cout<<i<<endl;
        }
    }
}
return 0;}
