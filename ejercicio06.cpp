/*Hacer un programa para ingresar un N valor que indica la cantidad de números que
componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos
son positivos.
Ejemplo: Se ingresa como valor N un 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará
Cantidad de Positivos: 4
Ejemplo: Se ingresa como valor N un 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará
Cantidad de Positivos: 0*/

#include <iostream>

using namespace std;

int main (){
int n,positivos,i,cn;

cout<<"ingrese la cantidad de numero: ";
cin>>cn;

positivos=0;

cout<<endl;
cout<<"ingrese el/los numeros:"<<endl;

for (i=1;i<=cn;i++){
    cin>>n;
    if (n>0){
        positivos++;
}
}
cout<<endl;
cout<<"cantidad de numeros positivos: "<<positivos<<endl;
return 0;
}
