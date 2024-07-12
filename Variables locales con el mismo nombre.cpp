//VARIABLES LOCALES CON EL MISMPO NOPMBRE
/*puedes declarar una variable con el mismo nombre que se ha usado en una funci�n anterior, 
siempre y cuando sea una variable local. Una variable local tiene un �mbito limitado, lo que significa que solo est� disponible dentro de la funci�n
 en la que se declara.
Aqu� hay un ejemplo para ilustrar esto:*/

#include <iostream>

void miFuncion()
{
    int temp = 5;
    std::cout << "El valor de temp dentro de miFuncion es: " << temp << std::endl;
}

void otraFuncion()
{
    int temp = 10;
    std::cout << "El valor de temp dentro de otraFuncion es: " << temp << std::endl;
}

int main()
{
    miFuncion();
    otraFuncion();
    
    return 0;
}

/*En este ejemplo, hemos declarado una variable temp en las funciones miFuncion() y otraFuncion(). 
Aunque tienen el mismo nombre, son variables diferentes y tienen su propio �mbito. La variable temp dentro de miFuncion() solo es visible y utilizada 
dentro de esa funci�n, y lo mismo ocurre con la variable temp dentro de otraFuncion(). 
No hay conflicto entre ellas porque son variables locales de diferentes funciones.
Al ejecutar este c�digo, ver�s que se imprime el valor de temp espec�fico de cada funci�n.*/

