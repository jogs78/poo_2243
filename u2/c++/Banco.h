#include "Cliente.h"
#include "CajeroAutomatico.h"

class Banco{
 public: 
  char direccion;
  void abrir();
 private:
  CajeroAutomatico cajeros[10];
  Cliente *clientela;

};

  void Banco::abrir(){
   // no se que cosas se tienen que hacer
  }



