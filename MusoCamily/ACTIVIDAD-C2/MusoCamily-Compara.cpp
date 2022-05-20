//================================================

//==> Nombre del programa: Compara

//==> Archivo : MusoCamily-Compara.cpp
//==>Autor: Camily Muso Díaz
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>
using namespace std;
int main()
{
   float CM_V1,CM_V2;
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

return 0;

}
