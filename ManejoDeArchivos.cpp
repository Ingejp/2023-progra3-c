//
// Created by JP on 20/02/2023.
//
#include <iostream>
#include <fstream>
#include "ctype.h"
using namespace  std;


void abrirArchivo() {
    ifstream archivo("datos.txt"); // Abrimos el archivo para lectura
    int num, suma = 0;
    while (archivo >> num) { // Leemos números enteros del archivo mientras haya datos
        suma += num; // Sumamos los números leídos
    }
    archivo.close(); // Cerramos el archivo
    cout << "La suma de los numeros es: " << suma << endl;
}

void agregarTexto(){
    ofstream archivo;
    archivo.open("datos.txt", ios::app);
    if (archivo.is_open()) {
        archivo << "Este es un nuevo texto que se agrega al final del archivo." << endl;
        archivo.close();
        cout << "Texto agregado al archivo." << endl;
    }
    else {
        cout << "Error al abrir el archivo." << endl;
    }
}

void leerTexto(){
    ifstream archivo;
    string linea;
    archivo.open("datos.txt");
    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            cout << linea<<endl;
        }
        archivo.close();
    }
    else {
        cout << "Error al abrir el archivo." << endl;
    }
}