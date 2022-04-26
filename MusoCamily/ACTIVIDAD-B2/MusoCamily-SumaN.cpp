#include<iostream>
using namespace std;

int main()
{
	int c=0,D;
	float s=0,m;
	cout<<"Ingrese la cantidad de valor a sumar : ";
	cin>>D;
	do{
		cout<<"Ingrese el elemento "<<c+1;
		cin>>m;
		c=c+1;
		s=s+m;
	}while (c<D);
	cout<<"La suma de los elementos fue : "<<s<<endl;

	return(0);
}
