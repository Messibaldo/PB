#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numart, opc;
    float precuni;
    string art, desc, cat;

    cout << "\t TIENDA DE VIDEOJUEGOS \n\t\t MIRMAR\n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opc;
    switch (opc)
    {
    case 1:
        cout << "Ingrese el numero de articulo \n";
        cin >> numart;
        cout << "Ingrese el nombre del articulo\n";
        cin.ignore();
        getline(cin, art);
        cout << "Ingrese el descripcion del articulo\n";
        cin.ignore();
        getline(cin, desc);
        cout << "Ingrese la categoria del articulo\n";
        cin.ignore();
        getline(cin, cat);
        cout << "Ingrese el precio unitario del articulo\n";
        cin >> precuni;
        return main();
        break;
    case 2:
        break;//Modificar el artículo (no incluído)
    case 3:
        break;//Eliminar el artículo (no incluído)
    case 4:
        break;//Lista de artículos (no incluido)
    case 5:
        system("cls");
        break;
    case 6:
        cout << "Gracias por usar el programa de MIRMAR\n";
        system("cls");
        break;
    default:
        cout << "Valor invalido, intentelo de nuevo\n";
        return main();
    }
}
