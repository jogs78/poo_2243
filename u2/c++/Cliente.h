#ifndef CLIENTE
  #define CLIENTE
  class Cliente
  {
    private:
      int edad;
    public:
      char nombre;
      bool darDinero();
      bool obtenerDinero();
    protected:
      char apellidos;
  };
  bool Cliente::darDinero(){
   //abrir la cartera
   //sacar billetes
   //...
   return true;
  }
  bool Cliente::obtenerDinero(){
   //extender la mano
   //...
   return true;
  }
#endif