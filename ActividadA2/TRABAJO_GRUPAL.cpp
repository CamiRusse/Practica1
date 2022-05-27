#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n,z,z1,z2,TP,AC,vb,a,vbi,iv,i,c,D,CM_n,CM_z,CM_z1,CM_z2,CM_D,CM_anioact=0,CM_mesact=0,CM_fechact=0,CM_anionac=0,k=0,k1=0,k2=0,AB_q=0,CM_dj,CM_mj,CM_cj,CM_sj,dj,mj,cj,sj;
	int anioact=0,mesact=0,fechact=0,anionac=0,mesnac=0,fechnac=0,edad=0,mes=0,dia=0,CM_mesnact=0,CM_fechnac=0,CM_edad=0,CM_mes=0,CM_dia=0,w=0,g,j,p,q,j1,p1,q1,r,bc,d,AB_mm,AB_nn,AB_pp,AB_mm1,AB_nn1,AB_pp1,AB_me,AB_ne,AB_pe;
	float x,V1,V2,b,x1=0,x2=0,s=0,m,CM_V1,CM_V2,CM_b,CM_x=0,CM_x1=0,CM_x2=0,F,G,u,m1=0,m2=0,e=0,v,t,t1,f,AB_C,AB_D,AB_n,AB_k=0,AB_k1=0,AB_k2,AB_x,AB_i=0,AB_i1=0,AB_i2=0,AB_c=0,AB_l,AB_u,AB_p,AB_m,AB_m1,AB_iv,AB_f,AB_r,AB_v=0,cont=0;
	do{
		cout<< "TRABAJO GRUPAL\n";
	cout<< "MUSO CAMILY = 1\n";
	cout<< "ORDONEZ ANDREA = 2 \n";
	cout<< "RESTAURAR PANTALLA = 4 \n";
	cout<< "PONGA CERO PARA SALIR \n";
	cout<< "***INGRESE UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
			do{
		cout<< "GRUPO PROGRAMACION B2-C2\n";
	cout<< "ACTIVIDAD B2 = 1\n";
	cout<< "ACTIVIDAD C2 = 2 \n";
	cout<< "RESTAURAR PANTALLA = 3 \n";
	cout<< "PONGA CERO PARA SALIR \n";
	cout<< "***INGRESE UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1:
		do{
				
	cout<< "GRUPO PROGRAMACION B2 CAMILY MUSO\n";
	cout<< "COMPARAR B2 = 1\n";
	cout<< "CUENTAMONEDA B2 = 2 \n";
	cout<< "PUNTOVENTA  B2 = 3\n";
	cout<< "SUMA DE VARIOS NUMEROS B2 = 4\n";
	cout<< "EDAD B2 = 5\n";
	cout<< "RESTAURAR PANTALLA = 6 \n";
	cout<< "PONGA CERO PARA SALIR \n";
	cout<< "***INGRESE UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
		
	cout<<"Ingrese V1: "; cin>>V1;
	cout<<"Ingrese V2: "; cin>>V2;
   
   if(V1==V2){
   cout<<"El valor de V1= "<<V1<<" es igual a V2= "<<V2<<endl;
  
   }else{

   if(V1<V2){
   cout<<"el valor de V1= "<<V1<<" ES MENOR A V2= "<<V2<<endl;

   }else{

   cout<<"el valor de V2= "<<V2<<" ES MENOR A V1= "<<V1<<endl;
 }
}

			break;
			
		case 2:

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
		break;
		
		case 3: 

	cout<<"Por favor, ingrese la cantidad deseada de productos: ";
	cin>>a;

	for(i=1; i<=a; i++)

	{
		cout <<"Por favor, Ingrese el precio de este producto: "<<i<<endl;
		cin>>b;
		vb=vb+b;
	}
	cout<<"El valor en bruto es: "<<vb<<endl;
	iv=vb*0.15;

	         cout<<"El valor del IVA es: "<<iv<<endl;
	         vbi=vb+iv;

	              cout<<"El valor bruto mas el IVA es: "<<vbi<<endl;
	              AC=vbi*0.10;

	         cout<<"A su compra se le aplica un 10% de descuento: "<<AC<<endl;
	         TP=vbi-AC;

	         cout<<"El valor Total a pagar es: "<<TP<<endl;
		
		break;

		case 4:
			
int dj,mj,cj,sj;
	cout<<"Ingrese cuantos numeros quiere sumar: \n";
cin>>mj;
for(cj=1;cj<=mj;cj++)
{
cout<<"Ingrese valor:";
cin>>sj;
dj=dj+sj;
}
cout<<"La suma total es: "<<dj<<endl;
		break;
		
		case 5:  

	cout<<"\n\tPrograma que calcula tu Edad, Mes y Día\n\n";
	cout<<"Ingrese su Ano Actual: ";
	cin>>anioact;

	cout<<"Ingrese el Mes Actual: ";
	cin>>mesact;

	cout<<"Ingrese el Dia Actual: ";
	cin>>fechact;

	cout<<"\n Ingrese el Ano de Nacimiento: ";
	cin>>anionac;

	cout<<"Ingrese el Mes de Nacimiento: ";
	cin>>mesnac;

	cout<<"Ingrese el Dia de Nacimiento:  ";
	cin>>fechnac;

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
		break;
		
		case 6:   	cout<<"Limpiar y volver"; system("cls");return main();
		break;
		default: cout<<"RESPUESTA INCORRECTA POR FAVOR, INTENTALO DE NUEVO\n"; 
		break;
	}
	}
	while(n!=0);
	 cout<<"ADIOS";
	 return 0;
	 
          	break;
          	
		case 2: 
	do{
				
		cout<< "GRUPO PROGRAMACION C2 CAMILY MUSO\n";
	cout<< "COMPARAR C2 = 1\n";
	cout<< "CUENTAMONEDA C2 = 2 \n";
	cout<< "PUNTOVENTA C2= 3\n";
	cout<< "SUMA DE VARIOS NUMEROS C2 = 4\n";
	cout<< "EDAD C2 = 5\n";
	cout<< "RESTAURAR PANTALLA  = 6 \n";
	cout<< "PONGA CERO PARA SALIR \n";
	cout<< "***INGRESE UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 
		
   cout<<"Ingrese CM_V1: "; cin>>CM_V1;
   cout<<"Ingrese CM_V2: "; cin>>CM_V2;

if(CM_V1==CM_V2){
   cout<<"El valor de CM_V1= "<<CM_V1<<" es igual a CM_V2= "<<CM_V2<<endl;
  
   }else{

   if(CM_V1<CM_V2){
   cout<<"el valor de CM_V1= "<<CM_V1<<" ES MENOR A CM_V2= "<<CM_V2<<endl;

   }else{

   cout<<"el valor de CM_V2= "<<CM_V2<<" ES MENOR A CM_V1= "<<CM_V1<<endl;
 }
}

			break;
			
		case 2: 

	cout<<"Cantidad de monedas a ingresar: ";
	cin>>CM_n;
	do{
		cout<<"Ingrese valor de la moneda (0.10,0.25): ";
		cin>>CM_b;
		CM_z=CM_z+1;
		CM_x=CM_x+CM_b;
		if(CM_b==0.10){
			CM_z1=CM_z1+1;
			CM_x1=CM_x1+CM_b;
		}else{
			CM_z2=CM_z2+1;
			CM_x2=CM_x2+CM_b;
		}
	}while(CM_z<CM_n);

	cout<<"El resultado fue:"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<CM_z<<endl;
	cout<<"Cantidad total en dinero contado: "<<CM_x<<endl;
	cout<<"Cantidad de monedas de 0.10c ingresadas: "<<CM_z1<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.10cc: "<<CM_x1<<endl;
	cout<<"Cantidad de monedas de 0.25cc ingresadas: "<<CM_z2<<endl;
	cout<<"Cantidad total en dinero de monedas de 0.25cc: "<<CM_x2<<endl;
		break;

		case 4:
			
int CM_dj,CM_mj, CM_cj, CM_sj;
	cout<<"Ingrese cuantos numeros quiere sumar: \n";
cin>>CM_mj;
for(CM_cj=1;CM_cj<=CM_mj;CM_cj++)
{
cout<<"Ingrese el valor:";
cin>>CM_sj;
CM_dj=CM_dj+CM_sj;
}
cout<<"La suma total es: "<<CM_dj<<endl;

		break; 

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

		break;
		case 6:   	cout<<"Limpiar y volver"; system("cls");return main();
		break;
		default: cout<<"RESPUESTA INCORRECTA POR FAVOR, INTENTALO DE NUEVO\n"; break;
	}
	}
	while(n!=0);
	 cout<<"ADIOS";

		break;
		case 3:   	cout<<"Limpiar y volver"; system("cls");return main();
		break;
		default: cout<<"RESPUESTA INCORRECTA POR FAVOR, INTENTALO DE NUEVO\n"; break;
	}
	}
	while(n!=0);
	 cout<<"ADIOS";
			break;
		    case 2: 
			do{
		cout<< "GRUPO PROGRAMACION B2-C2\n";
	cout<< "ACTIVIDAD B2 = 1\n";
	cout<< "ACTIVIDAD C2 = 2 \n";
	cout<< "RESTAURAR PANTALLA = 3 \n";
	cout<< "PONGA CERO PARA SALIR \n";
	cout<< "***INGRESE UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1:
do{
				
		cout<< "GRUPO PROGRAMACION B2 ORDOÑEZ ANDREA\n";
	cout<< "COMPARAR = 1\n";
	cout<< "CUENTAMONEDA = 2 \n";
	cout<< "PUNTOVENTA = 3\n";
	cout<< "SUMA = 4\n";
	cout<< "EDAD = 5\n";
	cout<< "RESTAURAR PANTALLA = 6 \n";
	cout<< "PONGA CERO PARA SALIR \n";
	cout<< "***INGRESE UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		case 1: 

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
			break;
			
		case 2: 

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
	
		break;
		
		case 3: 
			
	cout<<"Digite los productos que desea comprar "<<endl;
	cin>>g;
	do{
		cout<<"Digite el valor de la compra "<<w+1<<endl;
		cin>>u;
		w=w+1;
		e=e+u;
	}while (w<g);
	cout<<"Digite el valor del descuento que usara: "<<endl;
	cin>>e;
	cout<<"Valor de la compra: "<<e<<endl;
	t=(e*v)/100;
	cout<<"Valor del descuento: "<<t<<endl;
	t1=e-t;
	iv=t1*0.12;
	cout<<"Valor de IVA: "<<iv<<endl;
	f=(e-t)+iv;
	cout<<"Valor final: "<<f<<endl;
	
		break;
		
		case 4:

	cout<<"inserte el valor de la suma : ";
	cin>>w;
	do{
		cout<<"inserte el elemento " <<u+1;
		cin>>t;
		u=u+1;
		v=v+t;
	}while(u<w);
	cout<<"la suma de los elementos fue : "<<v<<endl;

		break;
		
		case 5:  

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
		break;
		
		case 6:   	cout<<"Limpiar y volver "; system("cls");return main();
		break;
		default: cout<<"RESPUESTA INCORRECTA POR FAVOR, INTENTALO DE NUEVO\n"; break;
	}
	}
	while(n!=0);
	 cout<<"ADIOS";
	 return 0;
          	break;
		case 2: 
		do{
				
		cout<< "GRUPO PROGRAMACION C2 ORDOÑEZ ANDREA\n";
	cout<< "COMPARAR C2 = 1\n";
	cout<< "CUENTAMONEDA C2 = 2 \n";
	cout<< "PUNTOVENTA C2 = 3\n";
	cout<< "SUMA C2 = 4\n";
	cout<< "EDAD C2 = 5\n";
	cout<< "RESTAURAR PANTALLA = 6 \n";
	cout<< "PONGA CERO PARA SALIR \n";
	cout<< "***INGRESE UN NUMERO***\n";
	cin>>n;
	switch(n)
	{
		
		case 1: 
		
	cout<<"Escribir un valor: "<<endl;
	cin>>AB_C;
	cout<<"Escribir un valor: "<<endl;
	cin>>AB_D;

	if (AB_C==AB_D){
	cout<<"Los dos valores son iguales"<<endl;
	}
	else if (AB_C>AB_D){
		cout<<"El valor "<<AB_C<<" es mayor que "<<AB_D<<endl;
	}
	else{
		cout<<"El valor "<<AB_D<<" es mayor que  "<<AB_C<<endl;
	} 
	cout<<endl<<"//================================================="<<endl;
cout<<"//==> Nombre del programa: Comparacion dos numeros"<<endl;
cout<<"//==> Archivo : OrdoñezAndrea-Compara.cpp"<<endl;
cout<<"//==>Autor: Andrea Ordoñez"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-27"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//=================================================="<<endl;
			break;
			
		case 2: 
		
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
		break;
		
		case 3: 
			
	cout<<"Escriba la cantidad de los producto a sumar"<<endl;
	cin>>AB_l;
	do{
		cout<<"Escriba el valor de su compra "<<AB_c+1<<endl;
		cin>>AB_u;
		AB_c=AB_c+1;
		AB_x=AB_x+AB_u;
	}while (AB_c<AB_l);
	cout<<"Escriba el valor del descuento que utilizara: "<<endl;
	cin>>AB_p;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo : OrdoñezAndrea-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Andrea Ordoñez"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;


	cout<<"Valor bruto de compra: "<<AB_x<<endl;
	AB_m=(AB_x*AB_p)/100;
	cout<<"Valor del descuento: "<<AB_m<<endl;
	AB_m1=AB_x-AB_m;
	AB_iv=AB_m1*0.12;
	cout<<"Valor del IVA: "<<AB_iv<<endl;
	AB_f=(AB_x-AB_m)+AB_iv;
	cout<<"Valor final: "<<AB_f<<endl;
	
		break;
		
		case 4:

	cout<<"Digite el valor de numeros que desea sumar: "<<endl;
	cin>>AB_p;
	do {
		cout<<"Digite el valor del numero: "<<endl;
		cin>>AB_r;
		AB_q=AB_q+1; 
		AB_v=AB_v+AB_r;
	}while (AB_q<AB_p);

	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de Varios numeros"<<endl;
cout<<"//==> Archivo : OrdoñezAndrea-SumaN.cpp"<<endl;
cout<<"//==>Autor: Andrea Ordoñez"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-27"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

	cout<<"La porcion de numeros digitados es: "<<AB_p<<endl;
	cout<<"La suma total obvenida de los numeros es: "<<AB_v<<endl;  	
		break;
		
		case 5:  
		
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
		break;
		case 6:   	cout<<"Limpiar y volver"; system("cls");return main();
		break;
		default: cout<<"RESPUESTA INCORRECTA POR FAVOR, INTENTALO DE NUEVO\n"; break;
	}
	}
	while(n!=0);
	 cout<<"ADIOS";
	 return 0;
          	break;
		
			
		break;
		case 3:   	cout<<"Limpiar y volver"; system("cls");return main();
		break;
		default: cout<<"RESPUESTA INCORRECTA POR FAVOR, INTENTALO DE NUEVO\n"; break;
	}
	}
	while(n!=0);
	 cout<<"ADIOS";	
	      break;
	}
	}
	while(n!=0);
	 cout<<"ADIOS"; 
	return 0;
}
