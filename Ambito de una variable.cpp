/*AMBITO DE VARIABLES (SCOPE): El scope, o ámbito, de una variable se refiere a la parte del programa en la que 
							  la variable es visible y puede ser utilizada. El ámbito de una variable local 
							  está limitado a la función o bloque de código en el que se declara, 
							  mientras que el ámbito de una variable global abarca todo el programa. 
							  Es importante tener en cuenta que el ámbito también puede estar influenciado por otros factores,
							  como las funciones anidadas o las clases en C++.
 
	VARIABLES GLOBALES Y LOCALES:
		VARIABLES LOCALES: Las variables locales son aquellas que se declaran dentro de una función o bloque de código específico.
					   Estas variables solo son accesibles dentro del ámbito (scope) en el que se declaran. Es decir, solo pueden ser utilizadas 
					   dentro de la función o bloque en el que se declaran. Una vez que el control sale de ese ámbito (scope), 
					   la variable local deja de existir. 
						
						EJEMPLO: 
							void myFunction(){
								int localVariable = 10; 
								//...
							}

						En este caso, localVariable es una variable local que solo puede ser utilizada 
						dentro de la función myFunction(). Si intentas acceder a ella desde fuera de la función, 
						obtendrás un error de compilación. 
						Las variables locales son útiles para almacenar datos temporales o intermedios dentro de una función 
						y no están disponibles para otras partes del programa.

		VARIABLES GLOBALES: Las variables globales se declaran fuera de cualquier función y, por lo tanto, 
						están disponibles en todo el programa, en todos los ámbitos. 
						Estas variables existen desde el inicio hasta el final del programa y pueden ser 
						accedidas y modificadas por cualquier función en el programa. 
						EJEMPLO:
*/

#include <iostream>

int globalVariable = 20;

void myFunction() {
    std::cout << "Valor de la variable global: " << globalVariable << std::endl;
}

int main() {
    std::cout << "Valor de la variable global: " << globalVariable << std::endl;
    myFunction();
    return 0;
}

/*En este ejemplo, globalVariable es una variable global que puede ser accedida tanto desde la función main() 
como desde la función myFunction(). 
La variable global se declara fuera de cualquier función y está disponible en todo el programa.
Es importante tener en cuenta que, aunque las variables globales pueden ser convenientes, 
su uso excesivo puede dificultar el mantenimiento y la comprensión del código.
 Es recomendable utilizar variables locales siempre que sea posible 
 y limitar el uso de variables globales a casos realmente necesarios.*/
