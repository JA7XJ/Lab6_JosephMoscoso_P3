#include "Productos.h"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

Productos::Productos(){
  nombre="";
  peso=0;
  fragil="";
}

Productos::~Productos(){

}

Productos::Productos(string nombre, double peso, string fragil){
  this->nombre=nombre;
  this->peso=peso;
  this->fragil=fragil;
}

string Productos::getNombre(){
  return nombre;
}

void Productos::setNombre(string nombre){
  this->nombre=nombre;
}

double Productos::getPeso(){
  return peso;
}

void Productos::setPeso(double peso){
  this->peso=peso;
}

string Productos::getFragil(){
  return fragil;
}

void Productos::setFragil(string fragil){
  this->fragil=fragil;
}
