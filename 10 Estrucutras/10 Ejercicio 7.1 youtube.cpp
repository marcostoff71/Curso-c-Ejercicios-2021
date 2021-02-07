
#include<iostream>
using namespace std;
struct tiempo{
 int horas;
 int minutos;
 int segundos; 
};
int main(){
 int etapas,i,cont_horas=0,cont_minutos=0,cont_segundos=0,total_segundos=0;
 cout<<"Ingrese numero de etapas: ";cin>>etapas;
 struct tiempo ciclista[etapas];
 for(i=0;i<etapas;i++){
  cout<<"ETAPA -->"<<i+1<<endl;
  cout<<"Horas: ";cin>>ciclista[i].horas;
  cout<<"Minutos:";cin>>ciclista[i].minutos;
  cout<<"Segundos";cin>>ciclista[i].segundos;
  cout<<"\n";
  cont_horas+=ciclista[i].horas;
  cont_minutos+=ciclista[i].minutos;
  cont_segundos+=ciclista[i].segundos;
 }
 total_segundos=cont_horas*3600+cont_minutos*60+cont_segundos;
 int h,m,s;
 h=total_segundos/3600; total_segundos=total_segundos%3600;
 m=total_segundos/60; total_segundos=total_segundos%60;
 s=total_segundos;
 cout<<"HORAS:MINUTOS:SEGUNDOS\n";
 cout<<"Horas:"<<h<<endl;
 cout<<"Minutos:"<<m<<endl;
 cout<<"Segundos:"<<s<<endl;
 
 return 0;
}
