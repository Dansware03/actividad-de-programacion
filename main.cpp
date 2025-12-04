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

void mostrarMenu() {
    cout << "--- Menu Principal ---" << endl;
    cout << "1. Inscribir un Estudiante" << endl;
    cout << "2. Cargar Notas de un Estudiante" << endl;
    cout << "3. Ver Lista de Estudiantes" << endl;
    cout << "4. Ver Notas de un Estudiante" << endl;
    cout << "5. Retirar un Estudiante" << endl;
    cout << "6. Salir" << endl;
    cout << "----------------------" << endl;
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

    int opcion;
    do {
        limpiarPantalla();
        mostrarMenu();
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // La lógica del switch se agregará después

        if (opcion == 6) {
            cout << "Gracias por usar el sistema. ¡Hasta pronto!" << endl;
        } else {
            cout << "Opcion seleccionada. La funcionalidad se implementara pronto." << endl;
            esperarEntrada();
        }

    } while (opcion != 6);

    return 0;
}
