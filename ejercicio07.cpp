/*Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son
positivos, cuántos son negativos, y cuántos iguales a cero.*/

#include <iostream>

using namespace std;

int main (){
int cp,cn,cc,i,n;

cp=0;
cn=0;
cc=0;

cout<<"ingrese los numeros: "<<endl;

for (i=1;i<=10;i++){
    cin>>n;
    if (n>0)
    cp++;
        else{
            if (n<0){
                cn++;
            }
            else{
                cc++;
            }
    }
}
cout<<"total de numeros positivos: "<<cp<<endl;
cout<<"total de numeros negativos: "<<cn<<endl;
cout<<"total de numeros cero: "<<cc<<endl;
return 0;
}
