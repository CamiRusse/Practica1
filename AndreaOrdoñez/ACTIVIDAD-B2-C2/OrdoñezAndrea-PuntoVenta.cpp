//================================================

//==> Nombre del programa: Punto de Venta
//==> Archivo : OrdoñezAndrea-PuntoVenta.cpp
//==>Autor: Andrea Ordoñez
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-20
//=================================================

#include <iostream>
using namespace std;
int main ()
{
	int AB_c=0, AB_l;
	float AB_x=0, AB_u, AB_p, AB_m, AB_m1, AB_iv, AB_f;
	cout<<"Escriba la cantidad de los producto a sumar"<<endl;
	cin>>AB_l;
	do{
		cout<<"Escriba el valor de su compra "<<AB_c+1<<endl;
		cin>>AB_u;
		AB_c=AB_c+1;
		AB_x=AB_x+AB_u;
	}while (AB_c<AB_l);
	cout<<"Escriba el valor del descuento que utilizara: "<<endl;
	cin>>AB_p;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo : OrdoñezAndrea-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Andrea Ordoñez"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;


	cout<<"Valor bruto de compra: "<<AB_x<<endl;
	AB_m=(AB_x*AB_p)/100;
	cout<<"Valor del descuento: "<<AB_m<<endl;
	AB_m1=AB_x-AB_m;
	AB_iv=AB_m1*0.12;
	cout<<"Valor del IVA: "<<AB_iv<<endl;
	AB_f=(AB_x-AB_m)+AB_iv;
	cout<<"Valor final: "<<AB_f<<endl;
return 0;
}
