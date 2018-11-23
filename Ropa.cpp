#include "Ropa.h"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

Ropa::Ropa(){
  tipo="";
}

Ropa::~Ropa(){

}

Ropa::Ropa(string tipo, string nombre, double peso, string fragil):Productos(nombre,peso,fragil){
  this->tipo=tipo;
}

/*Ropa::Ropa(string tipo){
  this->tipo=tipo;
}*/

string Ropa::getTipo(){
  return tipo;
}

void Ropa::setTipo(string tipo){
  this->tipo=tipo;
}
