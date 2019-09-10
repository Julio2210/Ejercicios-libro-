#include <iostream>

using namespace std;

void Directions ()
{
	int num;
	cout << " " << "\n" << endl;
	cout << "Este es el primer ejercicio del libro el cual consite en obtener direcciones a un lugar seleccionado" << endl;
	cout << " 1. Al banio \n 2. a la escuela, desde el lugar donde vivo \n" << endl;
	cout << "Inserta el numero del lugar al que quieras obtener direcciones: " << "\n" << endl;
	cin >> num;
	if (num == 1)
	{
		cout << "Para llegar al banio desde la sala. \n paso 1 \n salir de la sala \n paso 2 \n subir las escaleras \n paso 3 \n caminar hacaia la izquierda \n paso 4 \n abrir la puerta del sanitario \n paso 5 \n hacer las necesidades. \n paso 6\n  lavarse las manos    ";
	}
	if (num == 2)
	{
		cout << "Para llegar a la UAD \n Paso 1 \n Caminar cuatro cuadras por la misma calle Elba hasta llegar la avenida de los maestros \n Paso 2 \n girar a la derecha y caminar una cuadra mas \n paso 3 \n al llegar a la glorieta de los ing, girar a la derecha \n Paso 6 \n tocar el timbre de la escuela para que abran";
	}
	return ;
}




int main()
{
	cout << "Hello programing!" << "\n" << "Here we go!" << endl;
	
	Directions();
	
	
	
	return 0;
}