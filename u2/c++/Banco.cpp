#include "Cliente.h"
#include "CajeroAutomatico.cpp"

class Banco{
 public: 
  char direccion;
  void abrir();
 private:
  Cliente *clientela;
  CajeroAutomatico cajeros[10];

};

  void Banco::abrir(){
   // no se que cosas se tienen que hacer
  }
