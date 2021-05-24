/*Hacer un programa para ingresar una lista de 10 números, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.*/

#include <iostream>

using namespace std;

int main (){
int i,maximo,n;

maximo=n;

cout<<"ingrese 10 numero:"<<endl;
for(i=1;i<=10;i++){
    cin>>n;
    if(n>maximo){
        maximo=n;
    }
}
cout<<endl;
cout<<"numero maximo es: "<<maximo<<endl;
return 0;
}
