#include <iostream>
using namespace std ;
int  main()
{
	int n, k= 0 , k1= 0 , k2= 0 ;
	float u, m= 0 , m1= 0 , m2= 0 ;
	cout<< "Escriba la cantidad de monedas: " ;
	cin>>n;
	do {
		cout<< " Ingrese el valor de las monedas (0.10,0.25): " ;
		cin>>u;
		k=k+1;
		m=m+u;
		if (u==0.10){
			k1=k1+1;
			m1=m1+n;
		} else {
		k2=k2+1;
		m2=m2+n;
		}
	} while (k<n);
	cout<< " Mostre resultado: " <<endl;
	cout<< "La cantidad de monedas añadidas es: " <<k<<endl;
	cout<< "El resultado total del dinero contado es: " <<m<<endl;
	cout<< " La cantidad de monedas de 0.10c añadidas es: " <<k1<<endl;
	cout<< " Resultado total de dinero en monedas de 0.10cc: " <<m1<<endl;
	cout<< "Cantidad de monedas de 0,25cc añadidas: " <<k2<<endl;
	cout<< "La cantidad del dinero en monedas de 0.25cc es: " <<m2<<endl;
	return 0;
}
