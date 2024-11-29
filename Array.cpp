//Este programa solo puede ejecutarse en el IDE Codeblocks
//Si intenta ejecutarse en DevC++, este arroja un mensaje de problema con la version
//del compilador que se utiliza:
/*#if __cplusplus < 201103L
#error This file requires compiler and library support for the \
ISO C++ 2011 standard. This support is currently experimental, and must be \
enabled with the -std=c++11 or -std=gnu++11 compiler options.
#endif*/

#include <iostream>
#include <array>

using namespace std;

int main(){
        array<int, 5> numeros; //array de enteros con 5 elementos
						       //vector de tipo entero (todos sus elementos son enteros)
                               //con 5 elementos
        for(int i=0;i<5; i++){//carga del array
            cout<<"\n\t\tv["<<i+1<<"] = ";
            cin>>numeros[i];
        }
        cout<<endl;
        /*cout<<"\n\t\tv = [ ";//impresion del array (convencional)
        for(int i=0;i<5;i++){  //i es la variable de control del bucle (contorla la cantidad de repeticiones) y representa el indice del array, esto nos ayudara a acceder/recorrer a sus elementos
                               //para poder avanzar a traves del array haremos que aumente de 1 en 1 (el paso) hasta antes de llegar a 5 (osea hasta 4)
            cout<<numeros[i]<<" ";//de esta forma, se accede(e imprime) sucesivamente y orden creciente de i los elementos del array
        }                       //pues la instruccion al estar dada dentro del bloque for se ejecutara tantas veces le hayamos indicado(desde i=0 con paso de 1 hasta i<5)
        cout<<"]"<<endl;*/
        cout<<"\n\t\tv = [";
        for(int numero : numeros){//En "numero" se guarda cualquier elemento que pertenezca al array
                                 //Seguidamente escribimos el nombre de nuestro array
                                 //estamos diciendo entonces que: "numero" almacenara los elementos del array "numeros"
                                 //queda entonces, definida de manera implicita, "numero" como la variable de control
                                 //pues la cantidad de valores que le proporciona el array "numeros" a numero
            cout<<numero<<" ";   //será la cantidad de repeticiones de esta instruccion
        }
        cout<<"]"<<endl;

    return 0;
}
