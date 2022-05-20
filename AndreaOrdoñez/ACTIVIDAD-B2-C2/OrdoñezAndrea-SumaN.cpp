//================================================

//==> Nombre del programa: Suma de varios numeros

//==> Archivo : OrdoñezAndrea-SumaN.cpp
//==>Autor: Andrea Ordoñez
//==>Fecha de elaboración: 2022-04-27
//==>Fecha ultima actualización: 2022-05-20
//=================================================


#include <iostream>
using namespace std;

int main ()
{
	int AB_q=0, AB_p;
	float AB_r, AB_v=0;
	cout<<"Digite el valor de numeros que desea sumar: "<<endl;
	cin>>AB_p;
	do {
		cout<<"Digite el valor del numero: "<<endl;
		cin>>AB_r;
		AB_q=AB_q+1; 
		AB_v=AB_v+AB_r;
	}while (AB_q<AB_p);

	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de Varios numeros"<<endl;
cout<<"//==> Archivo : OrdoñezAndrea-SumaN.cpp"<<endl;
cout<<"//==>Autor: Andrea Ordoñez"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-27"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

	cout<<"La porcion de numeros digitados es: "<<AB_p<<endl;
	cout<<"La suma total obvenida de los numeros es: "<<AB_v<<endl;
	return 0;
	}
