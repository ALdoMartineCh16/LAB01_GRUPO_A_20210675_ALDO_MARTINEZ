#include <iostream>
using namespace std;
#include <ctime>

int main() {                  // =================
   time_t tSac = time(NULL);  // instante actual

   int aummin, min, hora, dia,mes,anio;
   cout<<"Cantidad de minutos: ";cin>>aummin;
   struct tm* pt1 = localtime(&tSac);
   hora = pt1->tm_hour;
   min = pt1->tm_min;
   
   dia = pt1->tm_mday; 
   mes = pt1->tm_mon+1;
   anio = pt1->tm_year+1900;
    
   anio += min/518400;
   min %= 518400;
   mes += min/43200;
   min %= 43200;
   dia += min/1440;
   min %= 1440;
   hora += min/60;
   min %= 60;
   
   cout<<"Nueva Hora: "<<hora<<":"<<min<<endl;
   cout<<"Nueva Fecha: "<<dia<<"-"<<mes<<"-"<<anio;
   
   return 0;
}
