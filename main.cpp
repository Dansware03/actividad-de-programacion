#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Constantes
const int MAX_ESTUDIANTES = 100;
const int NUM_NOTAS = 4;

// Variables Globales
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
int seleccionarEstudiante();

// --- Implementación de Funciones Auxiliares ---
void limpiarPantalla() {
    cout << string(50, '\n');
}

void esperarEntrada() {
    cout << "\nPresione Enter para continuar...";
    cin.get();
}

void mostrarMenu() {
    cout << "--- Menu Principal ---\n"
         << "1. Inscribir un Estudiante\n"
         << "2. Cargar Notas de un Estudiante\n"
         << "3. Ver Lista de Estudiantes\n"
         << "4. Ver Notas de un Estudiante\n"
         << "5. Retirar un Estudiante\n"
         << "6. Salir\n"
         << "----------------------" << endl;
}

// --- Implementación de Funciones de Gestión ---
void inscribirEstudiante() {
    limpiarPantalla();
    cout << "--- Inscripcion de Nuevo Estudiante ---" << endl;
    if (contadorEstudiantes >= MAX_ESTUDIANTES) {
        cout << "Capacidad maxima alcanzada." << endl;
        return;
    }
    cout << "Nombre: ";
    getline(cin, nombres[contadorEstudiantes]);
    cout << "Apellido: ";
    getline(cin, apellidos[contadorEstudiantes]);
    for (int i = 0; i < NUM_NOTAS; i++) {
        notas[contadorEstudiantes][i] = 0.0;
    }
    activos[contadorEstudiantes] = true;
    cout << "\n¡Estudiante inscrito con exito! ID: " << contadorEstudiantes << endl;
    contadorEstudiantes++;
}

void verEstudiantes() {
    limpiarPantalla();
    cout << "--- Lista de Estudiantes Inscritos ---" << endl;
    bool hayEstudiantes = false;
    for (int i = 0; i < contadorEstudiantes; i++) {
        if (activos[i]) {
            cout << "ID: " << i << " - Nombre: " << nombres[i] << " " << apellidos[i] << endl;
            hayEstudiantes = true;
        }
    }
    if (!hayEstudiantes) {
        cout << "No hay estudiantes inscritos." << endl;
    }
}

int seleccionarEstudiante() {
    verEstudiantes();
    if (contadorEstudiantes == 0) return -1;
    int id;
    cout << "\nIngrese el ID del estudiante: ";
    cin >> id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (id < 0 || id >= contadorEstudiantes || !activos[id]) {
        cout << "ID no valido o estudiante no encontrado." << endl;
        return -1;
    }
    return id;
}

void cargarNotas() {
    limpiarPantalla();
    cout << "--- Cargar Notas de Estudiante ---" << endl;
    int id = seleccionarEstudiante();
    if (id != -1) {
        cout << "\nCargando notas para " << nombres[id] << " " << apellidos[id] << ":" << endl;
        for (int i = 0; i < NUM_NOTAS; i++) {
            cout << "Ingrese nota " << (i + 1) << ": ";
            cin >> notas[id][i];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n¡Notas cargadas con exito!" << endl;
    }
}

void verNotasEstudiante() {
    limpiarPantalla();
    cout << "--- Consultar Notas de Estudiante ---" << endl;
    int id = seleccionarEstudiante();
    if (id != -1) {
        cout << "\nMostrando notas para " << nombres[id] << " " << apellidos[id] << ":" << endl;
        double suma = 0.0;
        for (int i = 0; i < NUM_NOTAS; i++) {
            cout << "Nota " << (i + 1) << ": " << notas[id][i] << endl;
            suma += notas[id][i];
        }
        cout << "Promedio: " << (suma / NUM_NOTAS) << endl;
    }
}

void retirarEstudiante() {
    limpiarPantalla();
    cout << "--- Retirar Estudiante ---" << endl;
    int id = seleccionarEstudiante();
    if (id != -1) {
        char confirmacion;
        cout << "\n¿Seguro de retirar a " << nombres[id] << "? (S/N): ";
        cin >> confirmacion;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (confirmacion == 'S' || confirmacion == 's') {
            activos[id] = false;
            cout << "Estudiante retirado con exito." << endl;
        } else {
            cout << "Operacion cancelada." << endl;
        }
    }
}

// --- Función Principal ---
int main() {
    int dia, mes;
    cout << "--- Sistema de Administracion Escolar ---\nPor favor, ingrese la fecha de hoy.\nDia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    limpiarPantalla();
    cout << "Fecha de hoy: " << dia << "/" << mes << "\n¡Bienvenido!" << endl;
    esperarEntrada();

    int opcion;
    do {
        limpiarPantalla();
        mostrarMenu();
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcion) {
            case 1: inscribirEstudiante(); break;
            case 2: cargarNotas(); break;
            case 3: verEstudiantes(); break;
            case 4: verNotasEstudiante(); break;
            case 5: retirarEstudiante(); break;
            case 6: cout << "Gracias por usar el sistema. ¡Hasta pronto!" << endl; break;
            default: cout << "Opcion no valida." << endl; break;
        }
        if (opcion != 6) {
            esperarEntrada();
        }
    } while (opcion != 6);

    return 0;
}
