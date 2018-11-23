#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include "electronicos.h"

#include <string>
using std::string;

class computadora : public electronicos{
  private:
    string so;
  public:
    computadora();
    ~computadora();
    computadora(string);
    string getSo();
    void setSo(string);
};

#endif
