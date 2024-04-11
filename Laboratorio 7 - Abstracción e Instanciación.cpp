#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    char genero;

public:
    Persona(const string& n, int e, char g) : nombre(n), edad(e), genero(g) {}

    void imprimirInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Genero: " << genero << endl;
    }
};

int main() {
    Persona persona1("Juan", 30, 'M');
    Persona persona2("Maria", 25, 'F');

    cout << "Informacion de persona 1:" << endl;
    persona1.imprimirInformacion();

    cout << endl;

    cout << "Informacion de persona 2:" << endl;
    persona2.imprimirInformacion();

    return 0;
}
