import java.util.List;
import java.util.ArrayList;

public class Cliente {
 public String nombre;
 public String apellidos;
 public int edad;
 public List<Casa> casas = new ArrayList<>();

 public Cliente (String nombre, String apellidos, int edad){
  this.nombre = nombre;
  this.apellidos = apellidos;
  this.edad = edad;
 }

 public void obtenerDienero(){
  //código para obtener dinero
 }

 public void darDienero(){
  //código para dar dinero
 } 
}


