// autores: juan cortez, annika carl y sofia carvajal
// fecha:31-01-2023

//crear un programa que retorne el numero mas repetido de un arreglo y cuantas veces se repitio//

#include <iostream>

using namespace std;
//creacion de la constante del tamaño del arreglo//
const int tam = 7;
//creacion del contrato de la funcion//
void DistanceArray(int arreglo[],int counter, int repetitions,int greaterNumber);
int main()
{
    //creacion de las diferentes variables del algoritmo//
    int tam = 7;
    int counter=0;
    int repetitions =0;
    int greaterNumber =0;
    //creacion del arreglo//
    int arreglo[tam]={4,31,2,9,0,31,11,2,31} ;
    DistanceArray(arreglo,counter,repetitions,greaterNumber);
    
    return 0;
}
// creación de la funcion con el objetivo de recorrer el array//
void DistanceArray(int arreglo[],int counter, int repetitions,int greaterNumber){
    //creacion del for con la intencion de recorrer el array//
    for(int i=0;i<tam;i++){
        counter =2;
    //creacion del for anideado para recorrer el array de primeras//
    for(int j= i +1; j<tam;j++){
        if(arreglo[i] == arreglo[j]){
            counter++;
        }
        //si el contador es mayor que las repeticiones, las repeticiones son iguales al contador y el numero mayor es igual al arreglo//
        if(counter>repetitions){
            repetitions=counter;
            greaterNumber= arreglo[i];
        }
    }
}
cout << "el numero qu emas se repite es" << greaterNumber<<endl;
    cout<< " y tiene una cantidad de repeticiones"<<repetitions<<endl;
}
