//================================================

//==> Nombre del programa: Suma de varios numeros

//==> Archivo : MusoCamily-SumaN.cpp
//==>Autor: Camily Muso Díaz
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>
using namespace std;

int main()
{
	int CM_c=0,CM_D;
	float CM_s=0,CM_m;
	cout<<"Ingrese la cantidad de valor a sumar : ";
	cin>>CM_D;
	do{
		cout<<"Ingrese el elemento "<<CM_c+1;
		cin>>CM_m;
		CM_c=CM_c+1;
		CM_s=CM_s+CM_m;
	}while (CM_c<CM_D);
	cout<<"La suma de los elementos fue : "<<CM_s<<endl;

	return(0);
}
