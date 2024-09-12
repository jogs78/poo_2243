class Casa:
    # aun cuando tiene una direccion no es necesario delcararla solo cuando se usa
    def abrir(self):
        # cerradura.llave = x
        # cerradura.girar()
        pass
    
class Cliente:
    def obtener_dinero(self):
        # Aquí iría la lógica de obtener dinero
        return True

    def dar_dinero(self):
        # Aquí iría la lógica de dar dinero
        return True
    

class Vip(Cliente):
    def obtener_credito(self):
        # Aquí iría la lógica para obtener crédito
        return True
    
class CajeroAutomatico:
    def atender(self):
        # Aquí iría la lógica de atender
        pass  # "pass" es un marcador de lugar que indica que el método no hace nada aún


class Banco:
    def abrir(self):
        # Aquí iría la lógica de abrir el banco
        pass

def main():
    mi_casa = Vip()
    print(type(mi_casa))


if __name__ == "__main__":
    main()