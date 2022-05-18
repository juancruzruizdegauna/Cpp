// Decryptix.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    //CONSTs
    const int intLETRAS_MINIMO = 2;
    const int intLETRAS_MAXIMO = 26;
    const int intPOSICIONES_MINIMO = 3;
    const int intPOSICIONES_MAXIMO = 10;

    //VARs
    int intCantidadDeLetras = 0, intNumeroDePosiciones = 0;
    bool blnSePermitenDuplicados = false;
    int intRonda = 1;
    char chrOpcion;

    // Mostramos la descripción del juego
    cout << "¡Decryptix! Versión 0.2\n";
    cout << "Copyright (c) 1999. Liberty Associates, Inc." << endl;

    cout << "Hay dos formas de jugar ¡Decryptix!:" << endl;
    cout << "intente adivinar un patrón creado por mí, \n";
    cout << "o bien, yo puedo intentarlo con uno creado por usted. \n" << endl;

    cout << "Si usted es el que va a adivinar, yo pensaré en un patrón";
    cout << " de letras (por ejemplo, abcde). \n" << endl;

    cout << "En cada turno, usted intentará adivinar el patrón y\n";
    cout << " yo le diré cuántas letras son correctas y cuántas \n";
    cout << " están en la posición adecuada. \n" << endl;

    cout << "El objetivo es descubrir el código tan rápido\n";
    cout << " como sea posible. Usted determina cuántas letras \n";
    cout << " y cuántas posiciones se pueden utilizar (por ejemplo 5, letras posibles. \n";
    cout << " en 4 posiciones); así como si se permiten o no \n";
    cout << " duplicados en el patrón (por ejemplo, aabcd). \n" << endl;

    cout << "Si yo tengo que adivinar, usted debe crear el código, \n";
    cout << " y calificar cada uno de mis intentos. \n" << endl;

    // Pedimos los datos iniciales
    cout << "¿Cuántas letras? (" << intLETRAS_MINIMO << "-" << intLETRAS_MAXIMO << "): ";
    cin >> intCantidadDeLetras;

    cout << "¿Cuántas Posiciones? (" << intPOSICIONES_MINIMO << "-" << intPOSICIONES_MAXIMO << "): ";
    cin >> intNumeroDePosiciones;

    cout << "¿Se permiten letras duplicadas? (s/n) ";
    cin >> chrOpcion;

    cout << "\b\b\b";

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
