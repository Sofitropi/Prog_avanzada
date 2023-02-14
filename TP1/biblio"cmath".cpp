
//autor:sofia carvajal 
//fecha: 08-02-23
    
//USANDO FUNCIONES (raiz) DE LA BIBLIOTECA CMATH

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double numerito1, numerito2, numerito3;
    
    cout<<"ingrese 3 numeros al que desea sacarle la raiz"<<endl;
    
    cout<< "primer numero: "<<endl;  /*SE RECOPILAN LOS DATOS DE LOS NUMEROS*/
    cin>> numerito1;
    
    cout<< "segundo numero: "<<endl;
    cin>> numerito2;
    
    cout<< "tercer numero: "<<endl;
    cin>> numerito3;
    
    cout<< "Resultados: "<<endl;
    cout<<sqrt(numerito1)<<endl;
    cout<<sqrt(numerito2)<<endl;
    cout<<sqrt(numerito3)<<endl;
    

    
    return 0;
}
