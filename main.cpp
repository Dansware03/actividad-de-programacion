#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Constantes
const int MAX_ESTUDIANTES = 100;
const int NUM_NOTAS = 4;

// Variables Globales (Arrays Paralelos)
string nombres[MAX_ESTUDIANTES];
string apellidos[MAX_ESTUDIANTES];
double notas[MAX_ESTUDIANTES][NUM_NOTAS];
bool activos[MAX_ESTUDIANTES];
int contadorEstudiantes = 0;

// Prototipos de Funciones
void mostrarMenu();
void inscribirEstudiante();
void cargarNotas();
void verEstudiantes();
void verNotasEstudiante();
void retirarEstudiante();
void limpiarPantalla();
void esperarEntrada();

// Funciones auxiliares
void limpiarPantalla() {
    cout << string(50, '\n');
}

void esperarEntrada() {
    cout << "\nPresione Enter para continuar...";
    cin.get();
}

int main() {
    int dia, mes;

    cout << "--- Sistema de Administracion Escolar ---" << endl;
    cout << "Por favor, ingrese la fecha de hoy." << endl;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    limpiarPantalla();

    cout << "Fecha de hoy: " << dia << "/" << mes << endl;
    cout << "¡Bienvenido!" << endl;
    esperarEntrada();

    cout << "Fin del programa inicial." << endl;

    return 0;
}
