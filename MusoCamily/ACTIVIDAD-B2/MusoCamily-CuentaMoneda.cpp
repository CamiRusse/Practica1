#include<iostream>
using namespace std;

int main()

{
	int n,z=0,z1=0,z2=0;
	float b,x=0,x1=0,x2=0;

	cout<<"Cantidad de monedas a ingresar: ";
	cin>>n;
	do{
		cout<<"Ingrese valor de la moneda (0.10,0.25): ";
		cin>>b;
		z=z+1;
		x=x+b;
		if(b==0.10){
			z1=z1+1;
			x1=x1+b;
		}else{
			z2=z2+1;
			x2=x2+b;
		}
	}while(z<n);

	cout<<"El resultado fue:"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<z<<endl;
	cout<<"Cantidad total en dinero contado: "<<x<<endl;
	cout<<"Cantidad de monedas de 0.10c ingresadas: "<<z1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10cc: "<<x1<<endl;
	cout<<"Cantidad de monedas de 0.25cc ingresadas: "<<z2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25cc: "<<x2<<endl;
	return 0;


}
