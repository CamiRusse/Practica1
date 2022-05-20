#include <iostream>
using namespace std;
int main ()
{
	int j, p, q, j1, p1, q1, r, t, bc, m, a, d;
	cout<<"Digite la fecha actual utilizando formato d/m/a: "<<endl;
	cin>>j>>p>>q;
	cout<<"Digite su fecha de nacimiento utilizando formato d/m/a: "<<endl;
	cin>>j1>>p1>>q1;
	if (j<j1){
		j=j+30;
		p=p-1;
		r=j-j1;
	}
		else {
			r=j-j1;
		}
	if (p<p1){
		p=p+12;
		t=t-1;
		t=p-p1;
	}
		else {
			t=p-p1;
		}
	bc=q-q1;
	cout<<"Usted tiene "<<bc<<" años, "<<t<<" meses "<<"y "<<r<<" dias."<<endl;
	return 0;
}
