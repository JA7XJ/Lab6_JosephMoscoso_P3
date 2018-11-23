#include "Libro.h"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

Libro::Libro(){
  codigo="";
}

Libro::~Libro(){

}

Libro::Libro(string codigo,string nombre, double peso, string fragil):Productos(nombre,peso,fragil){
  this->codigo=codigo;
}

/*Libro::Libro(string codigo){
  this->codigo=codigo;
}*/

string Libro::getCodigo(){
  return codigo;
}

void Libro::setCodigo(string codigo){
  this->codigo=codigo;
}
