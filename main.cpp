#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Declaracion de variables
    int edad;
    char genero;
    char estrato;
    double peso;
    double altura;
    bool tieneAlergias;

    string direccion;
    string telefono;
    string correo;

    cout << "=== CENTRO DE SALUD - ADMISION ===" << endl;
    cout << "Ingrese la informacion del paciente:" << endl << endl;

    // 2. Lectura de datos por teclado
    cout << "Edad: ";
    cin >> edad;

    cout << "Genero (M/F/O): ";
    cin >> genero;

    cout << "Estrato socioeconomico (1-6): ";
    cin >> estrato;

    cout << "Peso (kg): ";
    cin >> peso;

    cout << "Altura (m): ";
    cin >> altura;

    cout << "Tiene alergias? (1 para Si, 0 para No): ";
    cin >> tieneAlergias;

    cin.ignore(); // Limpiar el buffer de entrada para cadenas de texto

    cout << "Direccion de residencia: ";
    getline(cin, direccion);

    cout << "Telefono de contacto: ";
    getline(cin, telefono);

    cout << "Correo electronico: ";
    getline(cin, correo);

    // 3. Calculo de IMC
    double imc = peso / (altura * altura);

    // 4. Resumen en pantalla
    cout << "\n===================================" << endl;
    cout << "    RESUMEN DE ADMISION PACIENTE   " << endl;
    cout << "===================================" << endl;
    cout << "Edad: " << edad << " anos" << endl;
    cout << "Genero: " << genero << endl;
    cout << "Estrato: " << estrato << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " m" << endl;
    cout << "Alergias: " << (tieneAlergias ? "Si" : "No") << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Correo: " << correo << endl;
    cout << "-----------------------------------" << endl;
    cout << "IMC Calculado: " << imc << endl;

    // Diagnostico simple
    if (imc < 18.5) {
        cout << "Estado nutricional: Bajo peso" << endl;
    } else if (imc >= 18.5 && imc <= 24.9) {
        cout << "Estado nutricional: Peso normal" << endl;
    } else {
        cout << "Estado nutricional: Sobrepeso" << endl;
    }

    cout << "===================================" << endl;

    return 0;
}