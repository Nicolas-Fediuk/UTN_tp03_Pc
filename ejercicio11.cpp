/*Hacer un programa para ingresar una lista 10 n?meros e informar el m?ximo de los
negativos y el m?nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M?ximo Negativo -3. M?nimo Positivo 2.*/

#include <iostream>

using namespace std;

int main(){
int i,n,maximoN,minimoP,cn,cp;

cn=0;
cp=0;

cout<<"ingrese 10 numeros:"<<endl;

for (i=1;i<=10;i++){
        cin>>n;
    if (n<0){
        cn++;
        if (cn==1){
            maximoN=n;
        }
        else if (n>maximoN){
            maximoN=n;
        }
    }
    if (n>0){
        cp++;{
            if (cp==1){
                minimoP=n;
            }
            else if (n<minimoP){
                minimoP=n;
            }
    }
}
}
cout<<endl;
cout<<"el numero minimo positivo es: "<<minimoP<<endl;
cout<<"el numero maximo negativo es: "<<maximoN<<endl;
return 0;
}
