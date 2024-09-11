public class Main {
 public static void main(String[] args) {
     Cliente cliente1 = new Cliente();//"Juan", "Pérez", 30);
     Casa casa1 = new Casa();//"Calle Falsa 123"//);
     cliente1.casas.add(casa1);

     Banco banco1 = new Banco();
     banco1.direccion = "Banco Central";
     // Inicializamos la lista de cajeros con 10 elementos
     for (int i = 0; i < 10; i++) {
         banco1.cajerosAutomaticos.add(new CajeroAutomatico());
     }
  }
}