#include <iostream>
#include <string>
#include <limits>

using namespace std;
// ... (Includes, constantes, variables, etc. como en commits anteriores)
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
int seleccionarEstudiante();

// ... (Implementaciones de limpiarPantalla, esperarEntrada, mostrarMenu, inscribir, verEstudiantes, seleccionar, cargarNotas)
void limpiarPantalla() { cout << string(50, '\n'); }
void esperarEntrada() { cout << "\nPresione Enter..."; cin.get(); }
void mostrarMenu() {
    cout << "--- Menu ---\n1. Inscribir\n2. Cargar Notas\n3. Ver Estudiantes\n4. Ver Notas\n5. Retirar\n6. Salir" << endl;
}
void inscribirEstudiante() {
    limpiarPantalla(); cout << "--- Inscripcion ---" << endl;
    if (contadorEstudiantes >= MAX_ESTUDIANTES) { cout << "Maximo alcanzado." << endl; return; }
    cout << "Nombre: "; getline(cin, nombres[contadorEstudiantes]);
    cout << "Apellido: "; getline(cin, apellidos[contadorEstudiantes]);
    for (int i = 0; i < NUM_NOTAS; i++) { notas[contadorEstudiantes][i] = 0.0; }
    activos[contadorEstudiantes] = true;
    cout << "\n¡Inscrito! ID: " << contadorEstudiantes << endl;
    contadorEstudiantes++;
}
void cargarNotas() {
    limpiarPantalla();
    cout << "--- Cargar Notas ---" << endl;
    int id = seleccionarEstudiante();
    if (id != -1) {
        cout << "\nCargando notas para " << nombres[id] << " " << apellidos[id] << ":" << endl;
        for (int i = 0; i < NUM_NOTAS; i++) {
            cout << "Ingrese la nota " << (i + 1) << ": ";
            cin >> notas[id][i];
        }
        cin.ignore();
        cout << "\n¡Notas cargadas!" << endl;
    }
}
void verEstudiantes() {
    limpiarPantalla(); cout << "--- Estudiantes ---" << endl;
    bool hay = false;
    for (int i = 0; i < contadorEstudiantes; i++) {
        if (activos[i]) {
            cout << "ID: " << i << " - " << nombres[i] << " " << apellidos[i] << endl;
            hay = true;
        }
    }
    if (!hay) cout << "No hay estudiantes." << endl;
}
void verNotasEstudiante() {
    limpiarPantalla();
    cout << "--- Consultar Notas ---" << endl;
    int id = seleccionarEstudiante();
    if (id != -1) {
        cout << "\nMostrando notas para " << nombres[id] << " " << apellidos[id] << ":" << endl;
        double suma = 0.0;
        for (int i = 0; i < NUM_NOTAS; i++) {
            cout << "Nota " << (i + 1) << ": " << notas[id][i] << endl;
            suma += notas[id][i];
        }
        double promedio = suma / NUM_NOTAS;
        cout << "Promedio: " << promedio << endl;
    }
}
int seleccionarEstudiante() {
    verEstudiantes();
    if (contadorEstudiantes == 0) return -1;
    int id;
    cout << "\nID del estudiante: ";
    cin >> id;
    cin.ignore();
    if (id < 0 || id >= contadorEstudiantes || !activos[id]) {
        cout << "ID no valido." << endl;
        return -1;
    }
    return id;
}


// Nueva Implementación
void retirarEstudiante() {
    limpiarPantalla();
    cout << "--- Retirar Estudiante ---" << endl;
    int id = seleccionarEstudiante();
    if (id != -1) {
        char confirmacion;
        cout << "\n¿Seguro que desea retirar a " << nombres[id] << "? (S/N): ";
        cin >> confirmacion;
        cin.ignore();
        if (confirmacion == 'S' || confirmacion == 's') {
            activos[id] = false;
            cout << "Estudiante retirado." << endl;
        } else {
            cout << "Operacion cancelada." << endl;
        }
    }
}


int main() {
    int dia, mes; cout << "Dia: "; cin >> dia; cout<<"Mes: "; cin >> mes; cin.ignore(); limpiarPantalla(); cout << "Fecha: " << dia << "/" << mes << endl; esperarEntrada();
    int opcion;
    do {
        limpiarPantalla();
        mostrarMenu();
        cin >> opcion;
        cin.ignore();
        switch (opcion) {
            case 1: inscribirEstudiante(); break;
            case 2: cargarNotas(); break;
            case 3: verEstudiantes(); break;
            case 4: verNotasEstudiante(); break;
            case 5: retirarEstudiante(); break; // Ahora funciona
            case 6: cout << "Saliendo..." << endl; break;
            default: cout << "Opcion no valida." << endl; break;
        }
        if (opcion != 6) esperarEntrada();
    } while (opcion != 6);
    return 0;
}
