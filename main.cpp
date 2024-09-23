#include <iostream>
using namespace std;


bool validarNota(int nota) {
    if (nota < 1 || nota > 10) {
        cout << "Error: La nota " << nota << " esta fuera del rango permitido (1 a 10)." << endl;
        return false;
    }
    return true;
}


string determinarEstado(int p) {
    if (p >= 7 && p <= 10) {
        return "El estudiante esta aprobado.\n";
    } else if (p >= 5 && p < 7) {
        return "El estudiante esta suspendido.\n";
    } else if (p >= 1 && p < 5) {
        return "El estudiante esta reprobado.\n";
    } else {
        return "Promedio fuera de rango.\n";
    }
}


int main() {
    int n1, n2, n3, n4, p;


    cout << "Ingrese la nota del estudiante en deberes (1 a 10): ";
    cin >> n1;
    if (!validarNota(n1)) return 1;

    cout << "Ingrese la nota del estudiante en trabajos (1 a 10): ";
    cin >> n2;
    if (!validarNota(n2)) return 1;

    cout << "Ingrese la nota del estudiante en pruebas (1 a 10): ";
    cin >> n3;
    if (!validarNota(n3)) return 1;

    cout << "Ingrese la nota del estudiante en examenes (1 a 10): ";
    cin >> n4;
    if (!validarNota(n4)) return 1;


    p = (n1 + n2 + n3 + n4) / 4;


    cout << "Promedio: " << p << "\n";
    cout << determinarEstado(p);

    return 0;
}
