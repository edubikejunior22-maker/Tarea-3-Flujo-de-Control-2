#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Cuantos estudiantes desea ingresar? ";
    cin >> n;
    cin.ignore(); // limpiar el buffer antes de usar getline

    vector<string> nombres(n);
    vector<vector<double>> notas(n, vector<double>(4));
    vector<double> promedios(n);
    vector<string> estatus(n);

    // Bucle for para capturar los datos de cada estudiante
    for (int i = 0; i < n; i++) {
        cout << "\n--- Estudiante " << (i + 1) << " ---\n";
        cout << "Nombre: ";
        getline(cin, nombres[i]);

        double suma = 0;
        // Bucle for para capturar las 4 notas de ese estudiante
        for (int j = 0; j < 4; j++) {
            cout << "Nota " << (j + 1) << ": ";
            cin >> notas[i][j];
            suma += notas[i][j];
        }
        cin.ignore(); // limpiar el buffer para el siguiente getline

        promedios[i] = suma / 4.0;
        estatus[i] = (promedios[i] >= 70) ? "Aprobado" : "Reprobado";
    }

    // Encabezado de la tabla
    cout << "\n\n";
    cout << left << setw(20) << "Estudiante"
        << right << setw(8) << "Nota 1"
        << setw(8) << "Nota 2"
        << setw(8) << "Nota 3"
        << setw(8) << "Nota 4"
        << setw(10) << "Promedio"
        << setw(12) << "Estatus" << "\n";

    cout << string(74, '-') << "\n";

    // Bucle for para imprimir cada fila de la tabla
    for (int i = 0; i < n; i++) {
        cout << left << setw(20) << nombres[i]
            << right << setw(8) << notas[i][0]
            << setw(8) << notas[i][1]
            << setw(8) << notas[i][2]
            << setw(8) << notas[i][3]
            << setw(10) << fixed << setprecision(2) << promedios[i]
            << setw(12) << estatus[i] << "\n";
    }

    return 0;
}