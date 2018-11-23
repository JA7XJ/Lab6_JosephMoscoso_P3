#include "electronicos.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

electronicos::electronicos(){
    //fr="";
    tipo="";
}

electronicos::~electronicos(){

}

electronicos::electronicos(string tipo, string nombre, double peso, string fragil):Productos(nombre,peso,fragil){
  //this->fr=fr;
  this->tipo=tipo;
}

/*electronicos::electronicos(string fragil, string tipo){
  this->fragil=fragil;
  this->tipo=tipo;
}*/

/*string electronicos::getFr(){
  return fr;
}

void electronicos::setFr(string fr){
  this->fr=fr;
}*/

string electronicos::getTipo(){
  return tipo;
}

void electronicos::setTipo(string tipo){
  this->tipo=tipo;
}
