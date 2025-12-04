#include <iostream>
#include <string>
#include <limits>

using namespace std;

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

    // Limpiar el buffer de entrada para futuras lecturas
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    limpiarPantalla();

    cout << "Fecha de hoy: " << dia << "/" << mes << endl;
    cout << "¡Bienvenido!" << endl;
    esperarEntrada();

    // El menú y la lógica principal se agregarán en commits posteriores.

    cout << "Fin del programa inicial." << endl;

    return 0;
}
