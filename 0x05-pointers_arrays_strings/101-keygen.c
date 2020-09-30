#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
* main - generates a password for 101-crackme
*
* description: 101-crackme, esto lo voy a explicar
* en español: para solucionar este ejercicio es necesario
* leer un poco sobre assembly, una vez entendido mas o menos
* podemos darnos cuenta de algunas cosas dentro del codigo
* assembly que obtenemos de nuestro ejecutable (que holberton nos da)
* y que conseguimos del comando: objdump -d 101-crackme
*
* el archivo 101-crackme suma todos los valores de cada ASCII caracter y
* el valor tiene que ser igual a 2772, ya que incluso
* dentro del mismo codigo assembly, en la direccion 4005e9
* hay una cmpq (comparacion en assembly) que toma 2 argumentos
* 1- El que toma como parametro la funcion
* 2- el valor fijo con el cual comparar (en este caso el codigo es $0xad4)
* es codigo hexadecimal, utilice un conversor de hexadecimal a decimal online
* y escribi el numero ad4 y me dio como resultado el 2772
*
* despues de declarar las variables, llamo a la funcion srand(time(NULL))
* la idea de utilizar srand(time(NULL)) es para que se sincronice con
* el reloj interno para generar los numeros de forma aleatoria e indefinida
*
* Mientras la variable num sea menor a 2645 (valor obtenido despues de hacer
* 2772-127, siendo 127 el mayor numero de caracteres en la tabla ASCII
* para generar una contraseña, que le asigne a randNum el valor
* obtenido de la funcion random modulo de 127
*
* y si randNum es mayor a 32 (el primer elemento en la tabla ASCII para
* generar una contraseña, el 32 equivale al espacio en blanco) entonces que
* autoincremente el indice en 1 y que almacene ese valor de randNum
*
* el sumarle a num el valor de randNum es para que se autoincremente
* hasta llegar al numero 2772 y asi, salga del loop while
*
* al pasarle el password[i++] lo que hace es incrementar i, no el elemento
* en el indice i
*
* La idea general es generar numeros aleatorios entre 32 y 127, hasta que
* la suma sea 2772, ahi se genero una clave valida.
*
*
*
* Return: 0 on success
*/
int main(void)
{
	char password[100];
	int randNum, num, i;

	num = 0;
	i = 0;
	srand(time(NULL));
	while (num < 2645)
	{
		randNum = random() % 127;
		if (randNum > 32)
		{
			password[i++] = randNum;
			num += randNum;
		}
	}
	password[i++] = (2772 - num);
	password[i] = '\0';
	printf("%s\n", password);

	return (0);
}
