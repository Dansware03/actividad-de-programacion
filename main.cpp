#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Constantes y Variables Globales
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
void cargarNotas();
void verEstudiantes();
void verNotasEstudiante();
void retirarEstudiante();
void limpiarPantalla();
void esperarEntrada();
int seleccionarEstudiante(); // Nuevo prototipo

// Funciones Auxiliares
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

// Nueva Implementación
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
        cout << "No hay estudiantes inscritos actualmente." << endl;
    }
}

// Nueva Implementación
int seleccionarEstudiante() {
    cout << "\n--- Seleccionar Estudiante ---" << endl;
    // Se reutiliza la función verEstudiantes() para mostrar la lista antes de seleccionar
    bool hayEstudiantesActivos = false;
    for (int i = 0; i < contadorEstudiantes; i++) {
        if(activos[i]) {
            hayEstudiantesActivos = true;
            break;
        }
    }
    if (!hayEstudiantesActivos) {
        // No mostramos la lista si no hay nadie que mostrar
        return -1;
    }
    verEstudiantes();

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

// Placeholders para funciones futuras
void cargarNotas() { cout << "Funcionalidad 'Cargar Notas' pendiente." << endl; }
void verNotasEstudiante() { cout << "Funcionalidad 'Ver Notas de Estudiante' pendiente." << endl; }
void retirarEstudiante() { cout << "Funcionalidad 'Retirar Estudiante' pendiente." << endl; }

int main() {
    int dia, mes;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cin.ignore();
    limpiarPantalla();
    cout << "Fecha: " << dia << "/" << mes << "\n¡Bienvenido!" << endl;
    esperarEntrada();

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
            case 3: verEstudiantes(); break; // Ahora funciona
            case 4: verNotasEstudiante(); break;
            case 5: retirarEstudiante(); break;
            case 6: cout << "Saliendo..." << endl; break;
            default: cout << "Opcion no valida." << endl; break;
        }
        if (opcion != 6) esperarEntrada();
    } while (opcion != 6);

    return 0;
}
