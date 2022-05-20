// ================================================

// ==> Nombre del programa: Contador de Monedas
// ==> Archivo : OrdoñezAndrea-CuentaMoneda.cpp
// ==>Autor: Andrea Ordoñez
// ==>Fecha de elaboración: 2022-05-02
// ==>Fecha última actualización: 2022-05-20
// ================================================ =
#include<iostream>
using namespace std;
int  main ()
{
	int AB_n, AB_k= 0 , AB_k1= 0 , AB_k2= 0 ;
	float AB_x, AB_i= 0 , AB_i1= 0 , AB_i2= 0 ;
	cout<< "Escriba el valor de monedas a contar :" <<endl;
	cin>>AB_n;
	do{
		cout<< " Valor de monedas (0.10,0.25): " ;
		cin>>AB_x;
		AB_k=AB_k+ 1 ;
		AB_i=AB_i+AB_x;
		if (AB_x== 10 ){
			AB_k1=AB_k1+ 1 ;
			AB_i1=AB_i1+AB_x;
		} else {
		AB_k2=AB_k2+ 1 ;
		AB_i2=AB_i2+AB_x;
		}
		
		cout<<endl<< " //========================================= ======= " <<endl;
cout<< " //==> Nombre del programa: Contador de Monedas " <<endl;
cout<< " //==> Archivo : OrdoñezAndrea-CuentaMoneda.cpp " <<endl;
cout<< " //==>Autor: Andrea Ordoñez " <<endl;
cout<< " //==>Fecha de elaboración: 2022-05-02 " <<endl;
cout<< " //==>Fecha ultima actualización: 2022-05-20 " <<endl;
cout<< " //============================================ ===== " <<endl;

} while (AB_k<AB_n);
	cout<< " Obtenemos de resultado: " <<endl;
	cout<< " El valor de monedas ingresadas: " <<AB_k<<endl;
	cout<< " El valor total del dinero sumado: " <<AB_i<<endl;
	cout<< " El valor de monedas de 0.10 ingresadas: " <<AB_k1<<endl;
	cout<< " El valor total de monedas de 0.10: " <<AB_i1<<endl;
	cout<< " El valor de monedas de 0.25 ingresadas: " <<AB_k2<<endl;
	cout<< " El valor total de monedas de 0.25: " <<AB_i2<<endl;
	return 0 ;
}
