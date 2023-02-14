//autor:sofia carvajal 
//fecha:8/02/2023
//USANDO VECTORES Y SUS FUNCIONES

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
  vector<int> nums;  /*int por el tipo de dato, nums el nombre del vector*/
  
  nums.assign(5,1);  /*llenar 5 espacion con unos (1), con la "funcion" assing*/
  
  nums.insert(nums.begin(),4); /*insertar un numero en el comienzo*/
 
  cout<<"contenido del vector"<<endl; /*saber con que esta lleno ese arreglo*/
  for(int i; i<nums.size();i++){
      cout<<nums[i]<<endl;
      
  }
  
    
    return 0;
}
