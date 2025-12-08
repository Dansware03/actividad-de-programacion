#include <iostream>
#include <string>
#include <limits>

using namespace std;

// ... (Constantes, Globales, Prototipos y Auxiliares como en el commit 5) ...
const int MAX_ESTUDIANTES = 100;
const int NUM_NOTAS = 4;
string nombres[MAX_ESTUDIANTES];
string apellidos[MAX_ESTUDIANTES];
double notas[MAX_ESTUDIANTES][NUM_NOTAS];
bool activos[MAX_ESTUDIANTES];
int contadorEstudiantes = 0;

void mostrarMenu();
void inscribirEstudiante();
void cargarNotas();
void verEstudiantes();
void verNotasEstudiante();
void retirarEstudiante();
void limpiarPantalla();
void esperarEntrada();
int seleccionarEstudiante();

void limpiarPantalla() { cout << string(50, '\n'); }
void esperarEntrada() { cout << "\nPresione Enter para continuar..."; cin.get(); }
void mostrarMenu() {
    cout << "--- Menu ---\n1. Inscribir\n2. Cargar Notas\n3. Ver Estudiantes\n4. Ver Notas\n5. Retirar\n6. Salir" << endl;
}

// Funciones ya implementadas (inscribir, verEstudiantes, seleccionarEstudiante)
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

// Nueva implementación
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

// Placeholders
void verNotasEstudiante() { cout << "Funcionalidad 'Ver Notas' pendiente." << endl; }
void retirarEstudiante() { cout << "Funcionalidad 'Retirar' pendiente." << endl; }

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
            case 2: cargarNotas(); break; // Ahora funciona
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
