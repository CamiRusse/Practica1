#include<iostream>
using namespace std;

int main()
{
	int u=0,w;
	float v=0,t;
	cout<<"inserte el valor de la suma : ";
	cin>>w;
	do{
		cout<<"inserte el elemento " <<u+1;
		cin>>t;
		u=u+1;
		v=v+t;
	}while(u<w);
	cout<<"la suma de los elementos fue : "<<v<<endl;
	return(0);
}

