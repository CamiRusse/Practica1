#include<iostream>

using namespace std;

int main()

{
	int anioact=0,mesact=0,fechact=0,anionac=0,mesnac=0,fechnac=0,edad=0,mes=0,dia=0;

	cout<<"\n\tPrograma que calcula tu Edad, Mes y Día\n\n";
	cout<<"Ingrese su Año Actual: ";
	cin>>anioact;

	cout<<"Ingrese el Mes Actual: ";
	cin>>mesact;

	cout<<"Ingrese el Dia Actual: ";
	cin>>fechact;

	cout<<"\n Ingrese el Año de Nacimiento: ";
	cin>>anionac;

	cout<<"Ingrese el Mes de Nacimiento: ";
	cin>>mesnac;

	cout<<"Ingrese el Dia de Nacimiento:  ";
	cin>>fechnac;

	cout<<"\n\tIngrese la palabra 'exit' para ejecutar el programa\n\n";

	edad=anioact-anionac;
	scanf("%d",&edad);
	mes=mesnac-mesact;
	scanf("%d",&mes);
	dia=fechact-fechnac;
	scanf("%d",&dia);

	cout<<"Usted tiene de años: "<<edad<<endl;
	cout<<"Usted tiene de mes: "<<mes<<endl;
	cout<<"Usted tiene de dias: "<<dia<<endl;

	return 0;
}
