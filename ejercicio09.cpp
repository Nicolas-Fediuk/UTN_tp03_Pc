/*Hacer un programa para ingresar una lista de 10 n?meros, luego informar el m?ximo y
la posici?n del m?ximo en la lista. En caso de ?empates? considerar la primera aparici?n.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Se listar? M?ximo 35 Posici?n 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20. Se listar? M?ximo 55 Posici?n 7.*/

#include<iostream>

using namespace std;

int main() {
int p,n,maximo,i;

cout<<"ingrese los numeros"<<endl;
cin >> n;

maximo = n;
p = 0;

	for (i=2;i<=10;i++) {
		cin >> n;
		if (n>maximo) {
			maximo = n;
			p = i;
		}
	}
cout<<endl;
cout<<"el numero maximo es: "<<maximo<<", en la posicion: "<<p<<endl;
return 0;
}

