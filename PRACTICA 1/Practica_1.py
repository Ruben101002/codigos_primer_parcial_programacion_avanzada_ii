TAMANO = 2

def main():
    c = ' '
    x = 0
    Arreglo = [0] * TAMANO
    y = 0.0
    
    print("\nPractica 1 Ruben\n")
    
    print("\nTamano en char:\n")
    print("\n El tamano en bytes de una variable char es:", c.__sizeof__())
    print("\n El tamano en bits de una variable char es:", c.__sizeof__() * 8)
    print("\n El tamano en nibbles de una variable char es:", c.__sizeof__() * 2)

    print("\nTamano en entero:\n")
    print("\n El tamano en bytes de una variable int es:", x.__sizeof__())
    print("\n El tamano en bits de una variable int es:", x.__sizeof__() * 8)
    print("\n El tamano en nibbles de una variable int es:", x.__sizeof__() * 2)

    print("\nTamano en doble:\n")
    print("\n El tamano en bytes de una variable double es:", y.__sizeof__())
    print("\n El tamano en bits de una variable double es:", y.__sizeof__() * 8)
    print("\n El tamano en nibbles de una variable double es:", y.__sizeof__() * 2)

    print("\nTamano en Arreglo:\n")
    print("\n El tamano en bytes de una variable arreglo es:", Arreglo.__sizeof__())
    print("\n El tamano en bits de una variable arreglo es:", Arreglo.__sizeof__() * 8)
    print("\n El tamano en nibbles de una variable arreglo es:", Arreglo.__sizeof__() * 2)

    return 0

if __name__ == "__main__":
    main()