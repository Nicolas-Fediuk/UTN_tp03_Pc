/*Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y
el mínimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
Observe que los tres ejemplos dejan en claro que la idea de que el máximo
“seguramente” es un positivo y el mínimo “seguramente” es un negativo, queda
totalmente descartada*/

#include<iostream>

using namespace std;

int main() {
int maximo,minimo,n,i;

cout<<"ingrese 10 numeros:"<<endl;
cin>>n;

maximo=n;
minimo=n;

for (i=2;i<=10;i++){
    cin>>n;
    if (n>maximo){
        maximo=n;
    }
    else if (n<minimo){
        minimo=n;
    }
}
cout<<endl;
cout<<"el numero minimo es: "<<minimo<<endl;
cout<<"el numero maximo es: "<<maximo<<endl;
}
