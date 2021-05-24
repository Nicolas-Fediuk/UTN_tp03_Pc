/*Dada una lista de 7 números informar cual es el primer y último número impar
ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18 se informa -5 y 5.*/

#include <iostream>

using namespace std;

int main(){
int p,n,l,m,i,t;

p=0;

cout<<"ingrese 7 numeros:"<<endl;

for (i=1;i<=7;i++){
    cin>>n;
    t=n%2;
    if(t!=0)
        {
           p++;
        if (p==1)
        {
            m=n;
        }
        else if (p<=7)
        {
            l=n;
        }
}
}
cout<<endl;
cout<<"el primer numero impar es: "<<m<<endl;
cout<<"el ultimo numero impar es: "<<l<<endl;
return 0;
}
