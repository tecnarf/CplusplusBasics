/*PASO DE ARGUMENTOS POR VALOR Y POR REFERENCIA*/

#include <iostream>

void incrementarValor(int variable){//en el paso de argumentos por valor, no es necesario que la variable que hace de argumento de la funcion
								    //sea del mismo nombre de la variable que se pasa por argumento, puedes elegir cualquier nombre 
									//para el parámetro de la función, siempre y cuando el tipo de datos sea el mismo.
									//por ejemplo, podriamos escribir: void incrementarValor(int numero)
									//recordar tambien que la variable declarada como argumento es la que que toma la copia del valor de la variable 
									//que se pasa por argumento en el main
									//ademas, las operaciones correspondientes a la funcion se realizan con la variable declarada como argumento de la funcion 
									//y esta solo es visible o accesible desde su ambito que es la misma funcion, es decir, se trata de una variable local 
									//Recuerda que, en este caso, se está pasando el valor de variable a la función aumentarValor. 
									//La función trabaja con una copia de ese valor y cualquier cambio que hagas dentro de la función 
									//no afectará a la variable original.
		
		variable++;//variable=variable+1 o numero=numero+1 si se utilizace como variable local numero
		
}	

void incrementarValorporReferencia(int &variable){//Cuando deseamos permitir que la función acceda y modifique directamente el valor de la variable original 
                                             //en el ámbito de llamada(la funcion main), utilizamos como parametro una "referencia" 
											 //en la declaración de la función.
											 //La referencia es una forma de alias o "nombre alternativo" para una variable existente.
											 //Cuando se escribe int&, se está declarando una referencia a un entero en C++.
											 //entonces cuando deseamos hacer referencia a una variable entera en especifico escribimos int& variable
											 //o int &variable 
											 //Al utilizar una referencia, puedes acceder y manipular directamente el valor de la variable original 
											 //desde cualquier parte del código. Esto significa que cualquier cambio realizado en la referencia se reflejará 
											 //en la variable original.
											 //Como ocurre en el paso por valor, no es necesario que el nombre de la variable que hace de referencia 
											 //sea el mismo que el de la variable que se pasa  como argumento
	
	variable++;//referencia=referencia+1 o ref=ref+1 si se usase como nombre de la referencia o alias de la variable original
	
}
int main(){
	
	int variable = 5;
	
	std::cout<<"variable = "<<variable<<std::endl;
	
	incrementarValor(variable);
	
	/*Verificamos el estado de la variable luego de emplear el paso por valor*/
	
	if (variable>5){
			std::cout<<"El valor de la variable ha incrementado en una unidad, ahora es  "<<variable<<std::endl;
	}else{
		std::cout<<"El valor de la variable no ha incrementado y sigue siendo igual a "<<variable<<std::endl;
	};
	
	incrementarValorporReferencia(variable);
	
	/*Verificamos el estado de la variable luego de emplear el paso por referencia*/
	
	if(variable>5){
		std::cout<<"El valor de la variable ha incrementado a una unidad, ahora es "<<variable<<std::endl;
	}else{
		std::cout<<"El valor de la variable no ha incrementado y sigue igual a "<<variable<<std::endl;
	};
	
	return 0;
}
