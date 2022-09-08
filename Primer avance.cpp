#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numart, anio, opc;
    float precuni=0, iva=0, total=0;
    string art, desc, clas, car, gen;

    cout << "\t TIENDA DE VIDEOJUEGOS \n\t\t MIRMAR\n";
    cout << " 1.-Agregar Juego \n 2.-Modificar Juego\n 3.-Eliminar Juego\n 4.-Lista de Juegos\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opc;
    switch (opc)
    {
    case 1:
        cout << "Ingrese el numero de juego \n";
        cin >> numart;
        cout << "Ingrese el nombre del juego\n";
        cin.ignore();
        getline(cin, art);
        cout << "Ingrese el anio de lanzamiento\n";
        cin >> anio;
        cout << "Ingrese la clasificacion del juego\n";
        cin.ignore();
        getline(cin, clas);
        cout << "Ingrese las caracteristicas del juego\n";
        cin.ignore();
        getline(cin, car);
        cout << "Ingrese la descripcion del juego\n";
        cin.ignore();
        getline(cin, desc);
        cout << "Ingrese el genero del juego\n";
        cin.ignore();
        getline(cin, gen);
        cout << "Ingrese el precio unitario del juego\n";
        cin >> precuni;
        iva = precuni * 0.16;
        total = precuni + iva;
        cout << "Juego agregado, que desea hacer ahora?\n";
        return main();
        break;
    case 2:
        break;//Modificar el juego (no incluído)
    case 3:
        break;//Eliminar el juego (no incluído)
    case 4:
        break;//Lista de juego (no incluido)
    case 5:
        system("cls");
        return main();
        break;
    case 6:
        cout << "Gracias por usar el programa de MIRMAR\n";
        break;
    default:
        cout << "Valor invalido, intentelo de nuevo\n";
        return main();
    }
}
