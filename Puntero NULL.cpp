#include <iostream>

int main() {
    int* puntero = NULL; // Declaraci�n de un puntero a un entero inicializado a nullptr

    int numero = 10;
    puntero = &numero; // Asignaci�n de la direcci�n de memoria de la variable 'numero' al puntero

    std::cout << "Valor de numero: " << numero << std::endl;
    std::cout << "Direccion de memoria del puntero: " << puntero << std::endl;
    std::cout << "Valor apuntado por el puntero: " << *puntero << std::endl;

    return 0;
}
