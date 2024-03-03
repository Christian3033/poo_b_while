#include <iostream>
using namespace std;

int main(){
  /*
  int i = 5;
  
  while(i<5){
      cout<<"while: "<<i<<endl;
      i++;
  }*/
  
  char respuesta = 's';
  
  while(respuesta=='s' || respuesta == 'S'){
      cout<<"Desea ingresar otro valor (s/n): ";
      cin>>respuesta;
      
  }
  
  system ("pause");
  return 0;  
};
