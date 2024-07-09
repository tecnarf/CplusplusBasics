/*AMBITO DE VARIABLES (SCOPE): El scope, o �mbito, de una variable se refiere a la parte del programa en la que 
							  la variable es visible y puede ser utilizada. El �mbito de una variable local 
							  est� limitado a la funci�n o bloque de c�digo en el que se declara, 
							  mientras que el �mbito de una variable global abarca todo el programa. 
							  Es importante tener en cuenta que el �mbito tambi�n puede estar influenciado por otros factores,
							  como las funciones anidadas o las clases en C++.
 
	VARIABLES GLOBALES Y LOCALES:
		VARIABLES LOCALES: Las variables locales son aquellas que se declaran dentro de una funci�n o bloque de c�digo espec�fico.
					   Estas variables solo son accesibles dentro del �mbito (scope) en el que se declaran. Es decir, solo pueden ser utilizadas 
					   dentro de la funci�n o bloque en el que se declaran. Una vez que el control sale de ese �mbito (scope), 
					   la variable local deja de existir. 
						
						EJEMPLO: 
							void myFunction(){
								int localVariable = 10; 
								//...
							}

						En este caso, localVariable es una variable local que solo puede ser utilizada 
						dentro de la funci�n myFunction(). Si intentas acceder a ella desde fuera de la funci�n, 
						obtendr�s un error de compilaci�n. 
						Las variables locales son �tiles para almacenar datos temporales o intermedios dentro de una funci�n 
						y no est�n disponibles para otras partes del programa.

		VARIABLES GLOBALES: Las variables globales se declaran fuera de cualquier funci�n y, por lo tanto, 
						est�n disponibles en todo el programa, en todos los �mbitos. 
						Estas variables existen desde el inicio hasta el final del programa y pueden ser 
						accedidas y modificadas por cualquier funci�n en el programa. 
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

/*En este ejemplo, globalVariable es una variable global que puede ser accedida tanto desde la funci�n main() 
como desde la funci�n myFunction(). 
La variable global se declara fuera de cualquier funci�n y est� disponible en todo el programa.
Es importante tener en cuenta que, aunque las variables globales pueden ser convenientes, 
su uso excesivo puede dificultar el mantenimiento y la comprensi�n del c�digo.
 Es recomendable utilizar variables locales siempre que sea posible 
 y limitar el uso de variables globales a casos realmente necesarios.*/
