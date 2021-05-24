/*Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores
ingresados, aclarando cual es el máximo y cual el que le sigue.
Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4*/

#include <iostream>

using namespace std;

int main (){
int max1,max2,i,n;

cout<<"ingrese 5 numeros:"<<endl;

for (i=1;i<6;i++){
     cin>>n;
    if (i==1){
        max1=n;
        max2=n;
    }
    else if (i>1){
       if (n>max1){
        max1=max2;
        max2=n;
        }
        else if(n>max2){
            max2=n;
        }
        }
    }
    cout<<endl;
    cout<<"el numero mas grande es: "<<max2<<endl;
    cout<<"el segundo mas grande es: "<<max1<<endl;
    return 0;
}
