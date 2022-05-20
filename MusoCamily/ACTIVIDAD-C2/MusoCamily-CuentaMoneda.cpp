//================================================

//==> Nombre del programa: Cuenta Moneda

//==> Archivo : MusoCamily-CuentaMoneda.cpp
//==>Autor: Camily Muso Díaz
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>
using namespace std;

int main()

{
	int CM_n,CM_z=0,CM_z1=0,CM_z2=0;
	float CM_b,CM_x=0,CM_x1=0,CM_x2=0;

	cout<<"Cantidad de monedas a ingresar: ";
	cin>>CM_n;
	do{
		cout<<"Ingrese valor de la moneda (0.10,0.25): ";
		cin>>CM_b;
		CM_z=CM_z+1;
		CM_x=CM_x+CM_b;
		if(CM_b==0.10){
			CM_z1=CM_z1+1;
			CM_x1=CM_x1+CM_b;
		}else{
			CM_z2=CM_z2+1;
			CM_x2=CM_x2+CM_b;
		}
	}while(CM_z<CM_n);

	cout<<"El resultado fue:"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<CM_z<<endl;
	cout<<"Cantidad total en dinero contado: "<<CM_x<<endl;
	cout<<"Cantidad de monedas de 0.10c ingresadas: "<<CM_z1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10cc: "<<CM_x1<<endl;
	cout<<"Cantidad de monedas de 0.25cc ingresadas: "<<CM_z2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25cc: "<<CM_x2<<endl;
	
	return 0;


}
