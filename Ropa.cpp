#include "Roba.h"

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

Ropa::Ropa(string tipo){
  this->tipo=tipo;
}

string Ropa::getTipo(){
  return tipo;
}

void Ropa::setTipo(string tipo){
  this->tipo=tipo;
}
