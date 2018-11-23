#include "computadora.h"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

computadora::computadora(){
  so="";
}

computadora::~computadora(){

}

computadora::computadora(string so, string tipo, string nombre, double peso, string fragil):electronicos(tipo,nombre,peso,fragil){
  this->so=so;
}

/*computadora::computadora(string so){
  this->so=so;
}*/

string computadora::getSo(){
  return so;
}

void computadora::setSo(string so){
  this->so=so;
}
