//================================================

//==> Nombre del programa: Edad de una persona
//==> Archivo : OrdoñezAndrea-LaEdad.cpp
//==>Autor: Andrea Ordoñez
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-20
//=================================================


#include <iostream>
using namespace std;
int main ()
{
	int AB_mm, AB_nn, AB_pp, AB_mm1, AB_nn1, AB_pp1, AB_me, AB_ne, AB_pe;
	cout<<"Digite la fecha actual usando formato dd/mm/yy: "<<endl;
	cin>>AB_mm>>AB_nn>>AB_pp;
	cout<<"Digite su fecha de nacimiento usando formato dd/mm/yy: "<<endl;
	cin>>AB_mm1>>AB_nn1>>AB_pp1;

	if (AB_mm<AB_mm1){
		AB_mm=AB_mm+30;
		AB_nn=AB_nn-1;
		AB_me=AB_mm-AB_mm1;
	}
		else {
			AB_me=AB_mm-AB_mm1;
		}
	if (AB_nn<AB_nn1){
		AB_nn=AB_nn+12;
		AB_pp=AB_pp-1;
		AB_ne=AB_nn-AB_nn1;
	}
		else {
			AB_ne=AB_nn-AB_nn1;
		}
	AB_pe=AB_pp-AB_pp1;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Edad de una persona"<<endl;
cout<<"//==> Archivo : OrdoñezAndrea-LaEdad.cpp"<<endl;
cout<<"//==>Autor: Andrea Ordoñez"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

	cout<<"Usted tiene "<<AB_pe<<" años, "<<AB_ne<<" meses "<<"y "<<AB_me<<" dias."<<endl;
	return 0;
}
