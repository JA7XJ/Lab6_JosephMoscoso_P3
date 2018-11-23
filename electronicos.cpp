#include "electronicos.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

electronicos::electronicos(){
    fragil="";
    tipo="";
}

electronicos::~electronicos(){

}

electronicos::electronicos(string fragil, string tipo):Productos(nombre,peso,fragil){
  this->fragil=fragil;
  this->tipo=tipo;
}

/*electronicos::electronicos(string fragil, string tipo){
  this->fragil=fragil;
  this->tipo=tipo;
}*/

string electronicos::getFragil(){
  return fragil;
}

void electronicos::setFragil(string fragil){
  this->fragil=fragil;
}

string electronicos::getTipo(){
  return tipo;
}

void electronicos::setTipo(string tipo){
  this->tipo=tipo;
}
