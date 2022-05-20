//================================================

//==> Nombre del programa: Calcula tu edad

//==> Archivo : MusoCamily-laedad.cpp
//==>Autor: Camily Muso Díaz
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>

using namespace std;

int main()

{
	int CM_anioact=0,CM_mesact=0,CM_fechact=0,CM_anionac=0,CM_mesnact=0,CM_fechnac=0,CM_edad=0,CM_mes=0,CM_dia=0;

	cout<<"\n\tPrograma que calcula tu Edad, Mes y Día\n\n";
	cout<<"Ingrese su Año Actual: ";
	cin>>CM_anioact;

	cout<<"Ingrese el Mes Actual: ";
	cin>>CM_mesact;

	cout<<"Ingrese el Dia Actual: ";
	cin>>CM_fechact;

	cout<<"\n Ingrese el Año de Nacimiento: ";
	cin>>CM_anionac;

	cout<<"Ingrese el Mes de Nacimiento: ";
	cin>>CM_mesnact;

	cout<<"Ingrese el Dia de Nacimiento:  ";
	cin>>CM_fechnac;

	cout<<"\n\tIngrese la palabra 'exit' para ejecutar el programa\n\n";

	CM_edad=CM_anioact-CM_anionac;
	scanf("%d",&CM_edad);
	CM_mes=CM_mesnact-CM_mesact;
	scanf("%d",&CM_mes);
	CM_dia=CM_fechact-CM_fechnac;
	scanf("%d",&CM_dia);

	cout<<"Usted tiene de años: "<<CM_edad<<endl;
	cout<<"Usted tiene de mes: "<<CM_mes<<endl;
	cout<<"Usted tiene de dias: "<<CM_dia<<endl;

	return 0;
}
