/*Dada una lista de 7 n�meros informar el primer n�mero par ingresado y su ubicaci�n en
la lista y el �ltimo de los n�meros primos y su ubicaci�n en la lista.
Ejemplo 7, 4, 5, 6, 9, 13, 10 se informa Primer n�mero par: 4 ubicaci�n 2. Ultimo primo:
13 ubicaci�n 6.
Ejemplo 9, 5, 21, 9, 13, 15, 6 se informa Primer n�mero par: 6 ubicaci�n 7. Ultimo primo:
13 ubicaci�n 5.*/

#include <iostream>

using namespace std;

int main (){
int ubipri=0,ubipar=0,par2=0,n,i,j,c,par,ultipar,ultipri,ban=0,banpar=0;

cout<<"ingrese 7 numeros:"<<endl;

for (i=1;i<=7;i++){
    cin>>n;
    if (n%2==0){
        par2++;
        if (par2==1){
            banpar++;
            ubipar=i;
            par=n;
        }
    }
    c=0;
    for (j=1;j<=n;j++){
        if (n%j==0){
            c++;
        }
    }
    if (c==2){
            ban++;
        ubipri=i;
        ultipri=n;
    }
}
if (ban>=1){
cout<<"ultimo numero primo: "<<ultipri<<endl;
cout<<"ubicacion del numero primo: "<<ubipri<<endl;
}
else{
cout<<"no se han ingresados numeros primos"<<endl;
}
if (banpar>=1){
cout<<"primer numero par: "<<par<<endl;
cout<<"posicion del numero par: "<<ubipar<<endl;
}
else{
    cout<<"no se han ingresado numeros pares"<<endl;
}

return 0;}
