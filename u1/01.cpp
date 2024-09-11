#include <iostream>
#include <vector>
#include <string>

class Casa {
public:
    std::string direccion;
    void abrir(){
        //código de arbrir
    }
};

class Cliente {
public:
    std::string nombre, apellidos;
    int edad;
    std::vector<Casa> casas;
};

class Vip: public Cliente{
public:
    double limite;
    void obtenerCredito(){
        //código de obtener credito
    }
};

class CajeroAutomatico {
public:
    std::string ubicacion;
    void atender(){
        //código de atender...
    }
};

class Banco {
public:
    std::string direccion;
    std::vector<CajeroAutomatico> cajerosAutomaticos;
    std::vector<Cliente> clientes;

    void abrir(){
        //código de arbrir
    }
};

int main() {
    Cliente cliente1;
    Casa casa1;
    cliente1.casas.push_back(casa1);
    Banco banco1;
    banco1.cajerosAutomaticos.resize(10); // Inicializamos con 10 cajeros  
    return 0;
}