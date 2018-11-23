#include "caja.h"
#include "Productos.h"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

caja::caja(){
  fragil="";
  peso=0;
}

caja::~caja(){

}

caja::caja(string fragil, double peso){
  this->fragil=fragil;
  this->peso=peso;
}

string caja::getFragil(){
  return fragil;
}

void caja::setFragil(string fragil){
  this->fragil=fragil;
}

double caja::getPeso(){
  return peso;
}

void caja::setPeso(double peso){
  this->peso=peso;
}

void caja::setList(vector<Productos*> lista){
   this->lista=lista;
}

vector<Productos*> caja::getLista(){
    return lista;
}

void caja::add(Productos* c){
    lista.push_back(c);
}

/*void caja::imprimir(){
    if (lisa.empty()) {

    }else{
        for (int i = 0; i < lisa.size(); i++) {
            cout<<lisa[i].getNombre()<<endl;
        }
    }
}*/
