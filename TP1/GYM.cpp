/*poder registrar un numero de usuarios x   con y cantidad de datos en un gimnasio
la cantidad de usuarios a registrar debe ser preguntada al principio, al final del
programa debe de imprimirse el nombre de los usuarios registradas exitosamente  
autor: sofi c
fecha: 03/02/2023
*/

#include <iostream>
using namespace std;

/* se crea una struct/TDA para la captura de datos del usuario */

struct DatosPersonas{
    string nombre;
    int edad;
    char genero;
    string fechadeinscripcion;
    int hijos;
    float masamuscular;
    string plan;
    string hora;
    string lesiones;
    float altura;

};


int main() {
    int i ;
  int cantidad_de_personas;
     cout<<"**************************************************"<<endl;
     cout<<"**************************GYM********************"<<endl;
     cout<<"**************************************************"<<endl;
    
    cout<<"cantidad de personas a registar";
    cin>> cantidad_de_personas;
    
    DatosPersonales persona[cantidad_de_personas];
    
    cout<<"ingreso de datos"<<endl;
    
    for(i=0;i<cantidad_de_personas;i++){
  
        cout<<"ingrese nombre: "<<endl;
        cin>> persona[i].nombre;
        
        cout<<"ingrese edad: "<<endl;
        cin>>persona[i].edad;
        
        cout<<"ingrese genero: "<<endl;
        cin>>persona[i].genero;
        
        cout<<"ingrese fecha de inscripcion: "<<endl;
        cin>>persona[i].fechadeinscripcion;
            
        cout<<"ingrese numero de hijos: "<<endl;
        cin>>persona[i].hijos;
            
        cout<<"ingrese masa muscular: "<<endl;
        cin>>persona[i].masamuscular;
            
        cout<<"ingrese plan a adquirir: "<<endl;
        cin>>persona[i].plan;
            
        cout<<"ingrese franja horaria: "<<endl;
        cin>>persona[i].franjahoraria;
        
        cout<<"ingrese lesiones: "<<endl;
        cin>>persona[i].lesiones;
            
        cout<<"ingrese su altura: "<<endl;
        cin>>persona[i].altura;
       
   }
   for(int j=0;j<cantidad_de_personas;j++)
   {
   
   cout<< "usuarios inscritos correctamente"<<endl;
   }
