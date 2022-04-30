#include<iostream>

using namespace std;
int main()

{
	int TP,AC,vb,a,vbi,iv,b,i;
	cout<<"Por favor, ingrese la cantidad deseada de productos: ";
	cin>>a;

	for(i=1; i<=a; i++)

	{
		cout <<"Por favor, Ingrese el precio de este producto: "<<i<<endl;
		cin>>b;
		vb=vb+b;
	}
	cout<<"El valor en bruto es: "<<vb<<endl;
	iv=vb*0.15;

	         cout<<"El valor del IVA es: "<<iv<<endl;
	         vbi=vb+iv;

	              cout<<"El valor bruto mas el IVA es: "<<vbi<<endl;
	              AC=vbi*0.10;

	         cout<<"A su compra se le aplica un 10% de descuento: "<<AC<<endl;
	         TP=vbi-AC;

	         cout<<"El valor Total a pagar es: "<<TP<<endl;

	return 0;

}
