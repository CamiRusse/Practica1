#include <iostream>
using namespace std;
int main ()
{
	int w=0, g;
	float e=0, u, v, t, t1, iv, f;
	cout<<"Digite los productos que desea comprar "<<endl;
	cin>>g;
	do{
		cout<<"Digite el valor de la compra "<<w+1<<endl;
		cin>>u;
		w=w+1;
		e=e+u;
	}while (w<g);
	cout<<"Digite el valor del descuento que usara: "<<endl;
	cin>>e;
	cout<<"Valor de la compra: "<<e<<endl;
	t=(e*v)/100;
	cout<<"Valor del descuento: "<<t<<endl;
	t1=e-t;
	iv=t1*0.12;
	cout<<"Valor de IVA: "<<iv<<endl;
	f=(e-t)+iv;
	cout<<"Valor final: "<<f<<endl;
return 0;
}
