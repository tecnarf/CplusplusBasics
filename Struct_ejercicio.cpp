#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
//Estas l�neas incluyen las bibliotecas necesarias para este programa: iostream para entrada/salida de datos, 
//stdlib.h para funciones como system("pause") y system("cls"), y math.h por si se necesitaran funciones matem�ticas.
//Tambi�n se utiliza using namespace std; para evitar tener que escribir std:: antes de cout, cin, etc.
main()
{
	//La funci�n main() es el punto de entrada del programa. 
	//Se declara una variable entera N que almacenar� la cantidad de empleados.
	int N;
	
	//Se le pide al usuario que ingrese la cantidad de empleados. Luego se imprime un espacio en blanco.
	cout<<"\n\n\nIngrese la cantidad de empleados N= ";cin>>N;cout<<endl<<endl;
	//Se le indica al usuario que ingrese el nombre, sexo y sueldo de los empleados. 
	//Se define una estructura llamada empleados que tiene tres miembros: 
	cout<<"\n\n\nIngrese el nombre, sexo(M) o (F) y sueldo "<<endl<<endl;
	
	//Se define una estructura llamada empleados que tiene tres miembros: 
	//Nombre (un arreglo de 30 caracteres), sexo (un arreglo de 2 caracteres) y sueldo (un entero). 
	struct empleados{
		char Nombre[30];
		char sexo[2];
		int sueldo;
	}Lista[N];	//	Luego se declara un arreglo de esta estructura llamado Lista con N elementos.
	
	//Aqu� se utiliza un ciclo for para recorrer los N empleados.
	//Para cada uno, se solicita al usuario que ingrese el nombre, sexo y sueldo, y se almacenan estos datos en el arreglo Lista.
	for(int i=0; i<N; i++)
	{
		fflush(stdin);//La funci�n fflush(stdin) se utiliza para limpiar el b�fer de entrada del flujo de entrada est�ndar (stdin).
		//En este contexto, se usa antes de llamar a cin.getline() para leer el nombre y el sexo de cada empleado. 
		//Esto se hace para evitar que el b�fer de entrada contenga residuos de la entrada anterior, 
		//lo que podr�a causar problemas al leer la siguiente entrada.
		//Espec�ficamente:

    		//fflush(stdin) vac�a el b�fer de entrada est�ndar, eliminando cualquier car�cter que haya quedado almacenado all�.
    		//Esto ayuda a asegurar que cin.getline() lea �nicamente la nueva entrada del usuario, sin interferencias de entradas previas.

		cout<<"Nombre["<<i+1<<"]: ";cin.getline(Lista[i].Nombre,30,'\n');cout<<endl;
		cout<<"Sexo["<<i+1<<"]: ";cin.getline(Lista[i].sexo,2,'\n');cout<<endl;
		cout<<"Sueldo["<<i+1<<"]: ";cin>>Lista[i].sueldo;cout<<endl;
	}
    cout<<endl;
    
    int may, pos;
	may=Lista[0].sueldo;
	for(int i=0; i<N; i++)
	{
		if(may<Lista[i].sueldo)
		{
			may=Lista[i].sueldo;
			pos=i;
		}
	}
	
	
	cout<<"\n\n\nEl empleado mas remunerado es: "<<endl;
	cout<<"Nombre["<<pos+1<<"]: ";cout<<Lista[pos].Nombre;cout<<endl;
	cout<<"Sexo["<<pos+1<<"]: ";cout<<Lista[pos].sexo;cout<<endl;
	cout<<"Sueldo["<<pos+1<<"]: ";cout<<Lista[pos].sueldo;cout<<endl;
	system("pause");
	system("cls");
	return main();
}
