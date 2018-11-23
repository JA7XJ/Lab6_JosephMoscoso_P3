#include "Productos.h"
#include "Libro.h"
#include "Ropa.h"
#include "electronicos.h"
#include "videojuego.h"
#include "computadora.h"
#include "caja.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;

caja*** init(int);
void eliminar(caja***&);

int main(){
  cout<<"Bienvenido"<<endl;
  int c=0;
  int x=0;
  int y=0;
  caja*** almacen=NULL;
  almacen=init(10);
  for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
          almacen[i][j]=new caja("No fragil", 0);
      }
  }
  while (c==0) {
    cout<<"---------------------------------------------"<<endl;
    cout<<"1)Crear un producto\n2)Mover a una parte del almacen\n3)Mostrar caja en especifico\n4)Mostrar todas las cajas(por peso o todas)\n5)Salir"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Ingrese el número: ";
    int op=0;
    cin>>op;
    cout<<"---------------------------------------------"<<endl;
    while (op<0||op>5) {
        cout<<"Error, ingrese de nuevo: ";
        cin>>op;
        cout<<"---------------------------------------------"<<endl;
    }
    if (op==1) {
      cout<<"1)Libro\n2)Ropa\n3)electronicos"<<endl;
      cout<<"---------------------------------------------"<<endl;
      cout<<"Ingrese el numero correspondiente: ";
      int op2=0;
      cin>>op2;
      cout<<"---------------------------------------------"<<endl;
      while (op2<0||op2>3) {
          cout<<"Error, ingrese de nuevo: ";
          cin>>op2;
          cout<<"---------------------------------------------"<<endl;
      }
      if (op2==1) {
          if (almacen==NULL) {
            cout<<"Error en el almacen"<<endl;
            cout<<"---------------------------------------------"<<endl;
          }else{
            cout<<"Ingrese el nombre: ";
            string nombre="";
            cin>>nombre;
            cout<<"Ingrese el peso: ";
            double peso=0;
            cin>>peso;
            cout<<"Ingrese el codigo: ";
            string codigo="";
            cin>>codigo;
            double total=0;
            string frag="No fragil";
            total=peso+almacen[x][y]->getPeso();
            if (total<999) {
                almacen[x][y]->add(new Libro(codigo,nombre,peso,frag));
                almacen[x][y]->setPeso(total);
            }else{
                y=y+1;
                if (y>=10) {
                    x=x+1;
                    y=0;
                    if (x>=10) {
                        cout<<"Almacen lleno, lo siento"<<endl;
                    }else{
                        double t=peso+almacen[x][y]->getPeso();
                        almacen[x][y]->add(new Libro(codigo,nombre,peso,frag));
                        almacen[x][y]->setPeso(t);
                    }
                }else{
                  double t=peso+almacen[x][y]->getPeso();
                  almacen[x][y]->add(new Libro(codigo,nombre,peso,frag));
                  almacen[x][y]->setPeso(t);
                }
              }
          }
          cout<<"\n---------------------------------------------"<<endl;
          cout<<"Creado con exito y añadido al alamacen"<<endl;
      }
      if (op2==2) {
        if (almacen==NULL) {
          cout<<"Error en el almacen"<<endl;
          cout<<"---------------------------------------------"<<endl;
        }else{
          cout<<"Ingrese el nombre: ";
          string nombre="";
          cin>>nombre;
          cout<<"Ingrese el peso: ";
          double peso=0;
          cin>>peso;
          cout<<"Ingrese el tipo: ";
          string tipo="";
          cin>>tipo;
          double total=0;
          string frag="No fragil";
          total=peso+almacen[x][y]->getPeso();
          if (total<999) {
              almacen[x][y]->add(new Ropa(tipo,nombre,peso,frag));
              almacen[x][y]->setPeso(total);
          }else{
              y=y+1;
              if (y>=10) {
                  x=x+1;
                  y=0;
                  if (x>=10) {
                      cout<<"Almacen lleno, lo siento"<<endl;
                  }else{
                      double t=peso+almacen[x][y]->getPeso();
                      almacen[x][y]->add(new Ropa(tipo,nombre,peso,frag));
                      almacen[x][y]->setPeso(t);
                  }
              }else{
                double t=peso+almacen[x][y]->getPeso();
                almacen[x][y]->add(new Ropa(tipo,nombre,peso,frag));
                almacen[x][y]->setPeso(t);
              }
          }
        }
        cout<<"\n---------------------------------------------"<<endl;
        cout<<"Creado con exito y añadido al alamacen"<<endl;
      }
      if (op2==3) {
          cout<<"1)Videojuego\n2)Computadora"<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"Ingrese el numero: ";
          int op3=0;
          cin>>op3;
          while (op3<0||op3>2) {
              cout<<"Error, ingrese de nuevo: ";
              cin>>op3;
              cout<<"---------------------------------------------"<<endl;
          }
          if (op3==1) {
            if (almacen==NULL) {
              cout<<"Error en el almacen"<<endl;
              cout<<"---------------------------------------------"<<endl;
            }else{
              cout<<"Ingrese el nombre: ";
              string nombre="";
              cin>>nombre;
              cout<<"Ingrese el peso: ";
              double peso=0;
              cin>>peso;
              cout<<"Ingrese el desarrollador: ";
              string desarrollador="";
              cin>>desarrollador;
              double total=0;
              string frag="Fragil";
              string tipo="Videojuego";
              total=peso+almacen[x][y]->getPeso();
              if (total<999) {
                  almacen[x][y]->add(new videojuego(desarrollador,tipo,nombre,peso,frag));
                  almacen[x][y]->setPeso(total);
                  almacen[x][y]->setFragil(frag);
              }else{
                  y=y+1;
                  if (y>=10) {
                      x=x+1;
                      y=0;
                      if (x>=10) {
                          cout<<"Almacen lleno, lo siento"<<endl;
                      }else{
                          double t=peso+almacen[x][y]->getPeso();
                          almacen[x][y]->add(new videojuego(desarrollador,tipo,nombre,peso,frag));
                          almacen[x][y]->setPeso(t);
                          almacen[x][y]->setFragil(frag);
                      }
                  }else{
                    double t=peso+almacen[x][y]->getPeso();
                    almacen[x][y]->add(new videojuego(desarrollador,tipo,nombre,peso,frag));
                    almacen[x][y]->setPeso(t);
                    almacen[x][y]->setFragil(frag);
                  }
                }
            }
          }
          if (op3==2) {
            if (almacen==NULL) {
              cout<<"Error en el almacen"<<endl;
              cout<<"---------------------------------------------"<<endl;
            }else{
              cout<<"Ingrese el nombre: ";
              string nombre="";
              cin>>nombre;
              cout<<"Ingrese el peso: ";
              double peso=0;
              cin>>peso;
              cout<<"Ingrese el sistema operativo: ";
              string desarrollador="";
              cin>>desarrollador;
              double total=0;
              string frag="Fragil";
              string tipo="Computadora";
              total=peso+almacen[x][y]->getPeso();
              if (total<999) {
                  almacen[x][y]->add(new computadora(desarrollador,tipo,nombre,peso,frag));
                  almacen[x][y]->setPeso(total);
                  almacen[x][y]->setFragil(frag);
              }else{
                  y=y+1;
                  if (y>=10) {
                      x=x+1;
                      y=0;
                      if (x>=10) {
                          cout<<"Almacen lleno, lo siento"<<endl;
                      }else{
                          double t=peso+almacen[x][y]->getPeso();
                          almacen[x][y]->add(new computadora(desarrollador,tipo,nombre,peso,frag));
                          almacen[x][y]->setPeso(t);
                          almacen[x][y]->setFragil(frag);
                      }
                  }else{
                    double t=peso+almacen[x][y]->getPeso();
                    almacen[x][y]->add(new computadora(desarrollador,tipo,nombre,peso,frag));
                    almacen[x][y]->setPeso(t);
                    almacen[x][y]->setFragil(frag);
                  }
              }
            }
            cout<<"\n---------------------------------------------"<<endl;
            cout<<"Creado con exito y añadido al alamacen"<<endl;
          }
      }
    }
    if (op==2) {

    }
    if (op==3) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout<<"["<<almacen[i][j]->getPeso()<<"]";
            }
            cout<<endl;
        }
        cout<<endl<<"---------------------------------------------"<<endl;
        cout<<"Ingrese i: ";
        int op4=0;
        cin>>op4;
        cout<<"Ingrese j: ";
        int op5=0;
        cin>>op5;
        cout<<"Peso caja: "<<almacen[op4][op5]->getPeso()<<endl;
        cout<<"Estado: "<<almacen[op4][op5]->getFragil()<<endl;
        cout<<"Productos: "<<endl;
        for (int i = 0; i < almacen[op4][op5]->getLista().size(); i++) {
            cout<<"["<<almacen[op4][op5]->getLista()[i]->getNombre()<<"]";
        }
        cout<<endl;
        cout<<"---------------------------------------------"<<endl;

    }
    if (op==4) {
        cout<<"1)Mostrar fragiles\n2)Mostrar todas"<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<"Ingrese el numero: ";
        int op4=0;
        cin>>op4;
        cout<<"---------------------------------------------"<<endl;
        while (op4<0||op4>2) {
            cout<<"Error, ingrese de nuevo: ";
            cin>>op4;
            cout<<"---------------------------------------------"<<endl;
        }
        if (op4==1) {
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    if (almacen[i][j]->getFragil()=="Fragil") {
                        cout<<"["<<0<<"]";
                    }else{
                        cout<<"["<<" "<<"]";
                    }
                }
                cout<<endl;
            }
            cout<<endl<<"---------------------------------------------"<<endl;
        }
        if (op4==2) {
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    cout<<"["<<almacen[i][j]->getPeso()<<"]";
                }
                cout<<endl;
            }
            cout<<endl<<"---------------------------------------------"<<endl;
        }
    }
    if (op==5) {
        c=1;
        cout<<"usted a salido con exito"<<endl;
    }
  }
  eliminar(almacen);
  return 0;
}

caja*** init(int size){
  caja*** t=new caja**[10];
  for(int i=0; i<10;i++){
      t[i]=new caja*[10];
  }
  for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
          t[i][j]=new caja[10];
      }
  }
  return t;
}

void eliminar(caja***& c){
  if(c!=NULL){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            delete[] c;
            c[i][j]=NULL;
        }
    }
    for(int i=0;i<10;i++){
        delete[] c[i];
        c[i]=NULL;
    }
    delete[] c;
    c=NULL;
  }
}
