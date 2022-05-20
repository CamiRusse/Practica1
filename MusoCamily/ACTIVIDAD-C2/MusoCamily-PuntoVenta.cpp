//================================================

//==> Nombre del programa: Punto de Venta

//==> Archivo : MusoCamily-PuntoVenta.cpp
//==>Autor: Camily Muso Díaz
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>

using namespace std;
int main()

{
	int CM_TP,CM_AC,CM_vb,CM_a,CM_vbi,CM_iv,CM_b,CM_i;
	cout<<"Por favor, ingrese la cantidad deseada de productos: ";
	cin>>CM_a;

	for(CM_i=1; CM_i<=CM_a; CM_i++)

	{
		cout <<"Por favor, Ingrese el precio de este producto: "<<CM_i<<endl;
		cin>>CM_b;
		CM_vb=CM_vb+CM_b;
	}
	cout<<"El valor en bruto es: "<<CM_vb<<endl;
	CM_iv=CM_vb*0.15;

	         cout<<"El valor del IVA es: "<<CM_iv<<endl;
	         CM_vbi=CM_vb+CM_iv;

	              cout<<"El valor bruto mas el IVA es: "<<CM_vbi<<endl;
	              CM_AC=CM_vbi*0.10;

	         cout<<"A su compra se le aplica un 10% de descuento: "<<CM_AC<<endl;
	         CM_TP=CM_vbi-CM_AC;

	         cout<<"El valor Total a pagar es: "<<CM_TP<<endl;

	return 0;

}
