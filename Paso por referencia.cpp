//Paso de parametros por referencia
//Anteriormente pasabamos los parametros a una funcion de manera que los valores que tenian las variables que 
//pasabamos como parametros se copiaban o se guardaban en nuevas variables que estaban definidas en la funcion y con las cuales iba a trabajar
//Podriamos decir que este manera de pasar un parametro no alteraba el valor de la variable que pasamos como parametro, es decir la funcion 
//no incide directamente  en el valor del parametro, esta forma de pasar parametros se llama "por valor"
//Ahora veremos otra frma de pasar un parametro a ouna funcion, y es de notar que con esta forma podemos alterar incluso el valor de la variable parametro.
//Basicamente se trata de dar a la funcion la direccion de memoria de losparametros y trabajar sobre estas variables teneiendo sus direcciones, udeindo a si alterar
//lo que haya en esa direccion de memoria
#include<iostream>
using namespace std;
void valnuevos(int &xnum,int &ynum);//Al escribir esto, decimos que el tipo de parametros que va recibir la funcion son parametros enteros
//de los cuales va a obtener su direccion
int main(){
	int num1,num2;
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;//Al conectar las salidas en cascadas hacemos que al dar espacio o enter si permita introducir otra variable
	valnuevos(num1,num2);
	cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
	cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;	
	system("pause");
	return 0;
}
void valnuevos(int &xnum, int &ynum){		//Si vamos a pasar valores por referencia siempre debemos colocar como se muestra 
//La sentencia de arriba la podrimaos interpretar como si mandaros a la funcion a esas direcciones de memoria y se guradan en xnum e ynum los valores que hay en esas direcciones
	cout<<"El valor del primer numero es: "<<xnum<<endl;//Se imprime el valor que hay en dicha direccion de memoria, xnum seria como un apodo o alias de num1
	cout<<"El valor del segundo numeros es: "<<ynum<<endl;//Se imprime el valor que hay en dicha direccion de memoria, ynum seria como un apodo o alias de num2
	//Acontinuacion modificamos lo que hay en dichas posiciones de memoria
	xnum=89;
	ynum=45;
	
}
