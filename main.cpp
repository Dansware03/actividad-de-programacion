#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Constantes y Variables Globales (igual que antes)
const int MAX_ESTUDIANTES = 100;
const int NUM_NOTAS = 4;
string nombres[MAX_ESTUDIANTES];
string apellidos[MAX_ESTUDIANTES];
double notas[MAX_ESTUDIANTES][NUM_NOTAS];
bool activos[MAX_ESTUDIANTES];
int contadorEstudiantes = 0;

// Prototipos
void mostrarMenu();
void inscribirEstudiante();
void cargarNotas(); // Placeholder
void verEstudiantes(); // Placeholder
void verNotasEstudiante(); // Placeholder
void retirarEstudiante(); // Placeholder
void limpiarPantalla();
void esperarEntrada();

// Funciones Auxiliares (igual que antes)
void limpiarPantalla() { cout << string(50, '\n'); }
void esperarEntrada() { cout << "\nPresione Enter para continuar..."; cin.get(); }
void mostrarMenu() {
    cout << "--- Menu Principal ---\n1. Inscribir\n2. Cargar Notas\n3. Ver Estudiantes\n4. Ver Notas\n5. Retirar\n6. Salir\n----------------------" << endl;
}

// Implementación de funciones principales
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
    cout << "\n¡Estudiante " << nombres[contadorEstudiantes] << " " << apellidos[contadorEstudiantes] << " inscrito! ID: " << contadorEstudiantes << endl;
    contadorEstudiantes++;
}

// Placeholders para funciones futuras
void cargarNotas() { cout << "Funcionalidad 'Cargar Notas' pendiente." << endl; }
void verEstudiantes() { cout << "Funcionalidad 'Ver Estudiantes' pendiente." << endl; }
void verNotasEstudiante() { cout << "Funcionalidad 'Ver Notas de Estudiante' pendiente." << endl; }
void retirarEstudiante() { cout << "Funcionalidad 'Retirar Estudiante' pendiente." << endl; }


int main() {
    // Código de inicio (fecha, bienvenida)
    int dia, mes; cin >> dia >> mes; cin.ignore(); limpiarPantalla(); cout << "Fecha: " << dia << "/" << mes << "\n¡Bienvenido!" << endl; esperarEntrada();

    int opcion;
    do {
        limpiarPantalla();
        mostrarMenu();
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: inscribirEstudiante(); break;
            case 2: cargarNotas(); break;
            case 3: verEstudiantes(); break;
            case 4: verNotasEstudiante(); break;
            case 5: retirarEstudiante(); break;
            case 6: cout << "Saliendo..." << endl; break;
            default: cout << "Opcion no valida." << endl; break;
        }
        if (opcion != 6) esperarEntrada();
    } while (opcion != 6);

    return 0;
}
