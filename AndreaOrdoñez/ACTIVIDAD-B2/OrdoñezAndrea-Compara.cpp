#include <iostream>
using namespace std;
int main()
{
	float F,G;
	cout<<"Digite un numero: "<<endl;
	cin>>F;
	cout<<"Digite un numero: "<<endl;
	cin>>G;
	if (F==G){
	cout<<"Los dos numeros son iguales"<<endl;
	}
	else if (F>G){
		cout<<"La cantidad "<<F<<" es mayor que "<<G<<endl;
	}
	else{
		cout<<"La cantidad  "<<G<<" es mayor "<<F<<endl;
	} 
	return 0;
}
