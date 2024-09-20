class Casa:
 def __init__ (self):
    print("CONSTRUCTOR")
    
 def abrir(self):
  print ("abriendo la casa en la direccion :" + self.direccion)
  pass

 def setDireccion(self, direccion):
  self.direccion = direccion

 
class Cliente:
 def obtenerDinero(self):
  #codigo para obtener dinero
  pass
 def darDinero(self, cantidad):
  print( "Dando en efectivo $" , cantidad )
 def darDinero(self, cantidad, clabe):
  print( "Transfiriendo $" , cantidad , "a la cuenta :" , clabe)
  
class Vip(Cliente):
 def obtenerCredito():
  #codigo para obtener dinero
  pass

class CajeroAutomatico:
 def atender():
  # codigo para atender
  pass

class Banco:
 def abrir():
  # codigo para abrir
  pass

def main():
  # casaDeEjemplo = Casa();
  # casaDeEjemplo.setDireccion("5 norte pte 628");
  # casaDeEjemplo.abrir();
  nuevo = Cliente()
  nuevo.darDinero(cantidad=5000)
if __name__ == "__main__":
 main()