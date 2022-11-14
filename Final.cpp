#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <cstring>
#include <windows.h> 
#include<locale.h>
#include <cstdlib>
#include <stdlib.h>
#include <fstream>

using namespace std;

int* articulo, * anio, registros, decision, n = 1;
string* nombre, * clasificacion, * caract, * desc, * genero;
float* precio, * iva, * total;

//funciones
void alta();
void baja();
void lista();
void editar();
void archivo();

int main()
{
	int opc;
	printf("\t ***TIENDA MIRMAR***\n");
	printf("%cQue desea hacer?\n1.-Agregar articulo\n2.-Modificar articulo\n3.-Eliminar articulo\n4.-Lista de articulos\n5.-Limpiar pantalla\n6.-Salir\n", 168);
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1:
		alta();
		system("pause");
		return main();
		break;
	case 2:
		editar();
		system("pause");
		return main();
		break;
	case 3:
		baja();
		system("pause");
		return main();
		break;
	case 4:
		lista();
		system("pause");
		return main();
		break;
	case 5:
		system("cls");
		return main();
		break;
	case 6:
		archivo();
		exit(1);
		break;
	}
}

//declaracion de funciones
void alta()
{
	printf("%cCuantos registros desea dar de alta?\n", 168);
	scanf_s("%d", &registros);

	articulo = new int[registros];
	anio = new int[registros];
	nombre = new string[registros];
	clasificacion = new string[registros];
	caract = new string[registros];
	desc = new string[registros];
	genero = new string[registros];
	precio = new float[registros];
	iva = new float[registros];
	total = new float[registros];

	for (int i = 0; i < registros; i++)
	{
		printf("Ingrese el numero de articulo\n");
		scanf_s("%d", &articulo[i]);
		do
		{
			if (articulo[i] == articulo[i - n])
			{					
				printf("el articulo ya existe \n");
				printf("ingrese el numero de articulo \n");
				scanf_s("%d", &articulo[i]);
			}
			else
			{
				n = n + 1;
			}
		} while (n <= i);
		n = 1;
		printf("Ingrese el a%co de lanzamiento\n", 164);
		scanf_s("%d", &anio[i]);
		printf("Ingrese el nombre del articulo \n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf("Ingrese la clasificacion del articulo\n");
		getline(cin, clasificacion[i]);
		printf("Ingrese las caracteristicas del articulo\n");
		getline(cin, caract[i]);
		printf("Ingrese el genero del articulo\n");
		getline(cin, genero[i]);
		printf("Ingrese la descripcion del articulo\n");
		getline(cin, desc[i]);
		printf("Ingrese el precio del articulo\n");
		scanf_s("%f", &precio[i]);
		iva[i] = precio[i] * 16;
		total[i] = precio[i] + iva[i];
		//otra alta?
		if ((registros-1) == i)
		{
			printf("Desea dar de alta otro articulo?\n1.-Si\n2.-No\n");
			scanf_s("%d", &decision);
			switch (decision)
			{
			case 1:
				registros = registros + 1;
				break;
			case 2:
				break;
			default:
				printf("Ingrese una opcion correcta \n");
				break;

			}
				
		}
	}
}
void baja()
{
	int elim;
	printf("Ingrese el numero de articulo a eliminar");
	scanf_s("%d", &elim);
	for (int i = 0; i < registros; i++)
	{
		if (elim == articulo[i])
		{
			articulo[i] = 0;
		}
	}
}
void lista()
{
	int op2;
	string busq;
	printf("!.-Clasificacion \n 2.-Genero \n");
	scanf_s("%d", &op2);
	switch (op2)
	{
	case 1:
		printf("ingrese la clasificacion a buscar \n");
		cin.ignore();
		getline(cin, busq);
		for (int i = 0; i < registros; i++)
		{
			if (clasificacion[i] == busq)
			{
				if (articulo[i] != 0)
				{
					printf("Numero de articulo: %d \n", articulo[i]);
					printf("A%co de lanzamiento: %d \n", 164, anio[i]);
					printf("Nombre del articulo: %s \n", nombre[i].c_str());
					printf("Clasificacion: %s \n", clasificacion[i].c_str());
					printf("Caracteristicas: %s \n", caract[i].c_str());
					printf("Genero: %s \n", genero[i].c_str());
					printf("Descripcion: %s \n", desc[i].c_str());
					printf("Subtotal: %f \n", precio[i]);
					printf("IVA: %f \n", iva[i]);
					printf("Total: %f \n", total[i]);
				}
			}
		}
		break;
	case 2:
		printf("ingrese el genero a buscar \n");
		cin.ignore();
		getline(cin, busq);
		for (int i = 0; i < registros; i++)
		{
			if (genero[i] == busq)
			{
				if (articulo != 0)
				{
					printf("Numero de articulo: %d \n", articulo[i]);
					printf("A%co de lanzamiento: %d \n", 164, anio[i]);
					printf("Nombre del articulo: %s", nombre[i].c_str());
					printf("Clasificacion: %s", clasificacion[i].c_str());
					printf("Caracteristicas: %s", caract[i].c_str());
					printf("Genero: %s", genero[i].c_str());
					printf("Descripcion: %s", desc[i].c_str());
					printf("Subtotal: %f", precio[i]);
					printf("IVA: %f", iva[i]);
					printf("Total: %f", total[i]);
				}
			}
		}
		break;
	}
}
void editar()
{
	int edit;
	do
	{
		printf("Ingrese el numero de articulo a modificar");
		scanf_s("%d", &edit);
	} while (edit != 0);
	for (int i = 0; i < registros; i++)
	{
		if (edit == articulo[i])
		{
			printf("Ingrese el a%co de lanzamiento", 164);
			scanf_s("%d", &anio[i]);
			printf("Ingrese el nombre del articulo \n");
			cin.ignore();
			getline(cin, nombre[i]);
			printf("Ingrese la clasificacion del articulo\n");
			getline(cin, clasificacion[i]);
			printf("Ingrese las caracteristicas del articulo\n");
			getline(cin, caract[i]);
			printf("Ingrese el genero del articulo\n");
			getline(cin, genero[i]);
			printf("Ingrese la descripcion del articulo\n");
			getline(cin, desc[i]);
			printf("Ingrese el precio del articulo");
			scanf_s("%f", &precio[i]);
			iva[i] = precio[i] * 16;
			total[i] = precio[i] + iva[i];
		}
	}
}
void archivo()
{
	ofstream archivos;
	string nombreArchivo;
	nombreArchivo = "MIRMAR REGISTRO";
	archivos.open(nombreArchivo.c_str(), ios::out);

	if (archivos.fail())
	{
		printf("ERROR EL ARCHIVO NO PUDO SER CREADO");
		system("pause");
		exit(1);
	}

	archivos << "NUMERO DE JUEGO" << "\t";
	archivos << "FECHA DE LANZAMIENTO" << "\t";
	archivos << "NOMBRE DE JUEGO" << "\t";
	archivos << "CLASIFICACION" << "\t";
	archivos << "CARACTERISTICAS" << "\t";
	archivos << "GENERO" << "\t";
	archivos << "DESCRIPCION" << "\t";
	archivos << "PRECIO UNITARIO" << "\t";
	archivos << "IMPUESTO" << "\t";
	archivos << "TOTAL" << "\n";

	for (int i = 0; i < registros; i++)
	{
		archivos << articulo[i] << "\t";
		archivos << anio[i] << "\t";
		archivos << nombre[i] << "\t";
		archivos << clasificacion[i] << "\t";
		archivos << caract[i] << "\t";
		archivos << genero[i] << "\t";
		archivos << desc[i] << "\t";
		archivos << precio[i] << "\t";
		archivos << iva[i] << "\t";
		archivos << total[i] << "\t" << "\n";
	}

	archivos.close();
}