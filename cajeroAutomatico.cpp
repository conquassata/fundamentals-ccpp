#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Usuario {
    string nombre;
    string contrasena;
    float saldo_ahorros;
    float saldo_corriente;
    float limite_sobregiro;
    float saldo_tarjeta_credito;
    float limite_tarjeta_credito;
};

Usuario usuarios[] = {
    {"usuario1", "pass123", 1000.00, 1500.00, 500.00, 0.00, 1000.00},
    {"usuario2", "pass456", 2000.00, 1000.00, 300.00, 0.00, 1500.00},
};

string login() {
    string usuario;
    string contrasena;

    while (true) {
        cout << "Nombre de usuario: ";
        cin >> usuario;
        cout << "Contrasena: ";
        cin >> contrasena;

        for (int i = 0; i < sizeof(usuarios) / sizeof(usuarios[0]); i++) {
            if (usuarios[i].nombre == usuario && usuarios[i].contrasena == contrasena) {
                return usuarios[i].nombre;
            }
        }

        cout << "Credenciales incorrectos. Intente nuevamente." << endl;
    }
}

void limpiarPantalla() {
    system("cls");  // En sistemas Windows
}

char seleccionCuenta(string usuario) {
    cout << "\n.:Bienvenido, " << usuario << ":." << endl;
    cout << "Opciones:" << endl;
    cout << "1. Cuenta de ahorros" << endl;
    cout << "2. Cuenta corriente" << endl;
    cout << "3. Tarjeta de credito" << endl;
    cout << "4. Salir" << endl;

    char opcion;
    do {
        cout << "Seleccione una opcion: ";
        cin >> opcion;
    } while (opcion < '1' || opcion > '4');

    return opcion;
}

void saldoConsulta(string usuario, char cuenta) {
    float saldo;

    if (cuenta == '1') {
        saldo = usuarios[0].saldo_ahorros;
    } else if (cuenta == '2') {
        saldo = usuarios[0].saldo_corriente;
    } else {
        saldo = usuarios[0].saldo_tarjeta_credito;
    }

    string tipoCuenta = (cuenta == '1') ? "Cuenta de ahorros" : ((cuenta == '2') ? "Cuenta corriente" : "Tarjeta de credito");
    cout << "Su saldo actual en " << tipoCuenta << " es: $" << saldo << endl;
}

void consignar(string usuario, char cuenta) {
    float monto;
    cout << "Digite el monto a consignar: $";
    cin >> monto;

    if (cuenta == '1') {
        usuarios[0].saldo_ahorros += monto;
    } else if (cuenta == '2') {
        usuarios[0].saldo_corriente += monto;
    } else {
        usuarios[0].saldo_tarjeta_credito += monto;
    }

    string tipoCuenta = (cuenta == '1') ? "Cuenta de ahorros" : ((cuenta == '2') ? "Cuenta corriente" : "Tarjeta de credito");
    cout << "Se ha realizado una consignacion de $" << monto << ". Saldo actual en " << tipoCuenta << " es: $" << ((cuenta == '1') ? usuarios[0].saldo_ahorros : ((cuenta == '2') ? usuarios[0].saldo_corriente : usuarios[0].saldo_tarjeta_credito)) << endl;
}

void retirar(string usuario, char cuenta) {
    float monto;
    cout << "Digite el monto a retirar: $";
    cin >> monto;

    float* saldo;
    float* limite_sobregiro; // Agregamos un puntero para el límite de sobregiro

    if (cuenta == '1') {
        saldo = &usuarios[0].saldo_ahorros;
        limite_sobregiro = &usuarios[0].limite_sobregiro;
    } else if (cuenta == '2') {
        saldo = &usuarios[0].saldo_corriente;
        limite_sobregiro = &usuarios[0].limite_sobregiro;
    } else {
        saldo = &usuarios[0].saldo_tarjeta_credito;
        limite_sobregiro = &usuarios[0].limite_tarjeta_credito;
    }

    if (*saldo + *limite_sobregiro < monto) {
        if (cuenta == '1' || cuenta == '2') {
            cout << "Saldo insuficiente, se realiza un sobregiro de $" << monto - *saldo << endl;
            *saldo = 0;
        } else {
            cout << "Saldo insuficiente, se realiza un avance de tarjeta de credito de $" << monto - *saldo << endl;
            *saldo = 0;
        }
    } else if (*saldo < monto) {
        if (cuenta == '1' || cuenta == '2') {
            cout << "Saldo insuficiente, se realiza un sobregiro de $" << monto - *saldo << endl;
            *saldo = 0;
        } else {
            cout << "Saldo insuficiente, se realiza un avance de tarjeta de credito de $" << monto - *saldo << endl;
            *saldo = 0;
        }
    } else {
        cout << "Retirando $" << monto << "..." << endl;
        *saldo -= monto;

        string tipoCuenta = (cuenta == '1') ? "Cuenta de ahorros" : ((cuenta == '2') ? "Cuenta corriente" : "Tarjeta de credito");
        cout << "Monto retirado. Saldo actual en " << tipoCuenta << " es: $" << *saldo << endl;

        int denominaciones[] = {100, 50, 20, 10};
        cout << "Billetes entregados:" << endl;
        for (int i = 0; i < 4; i++) {
            int num_billetes = monto / denominaciones[i];
            if (num_billetes > 0) {
                cout << num_billetes << " billete(s) de $" << denominaciones[i] << endl;
                monto -= num_billetes * denominaciones[i];
            }
        }
    }
}

int main() {
    string usuario = login();
    char cuenta;

    while (true) {
        cuenta = seleccionCuenta(usuario);
        limpiarPantalla();
        cout << "\nMenu:" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Consignar" << endl;
        cout << "3. Retirar" << endl;
        cout << "4. Salir" << endl;

        char opcion;
        do {
            cout << "Elige una opcion: ";
            cin >> opcion;
        } while (opcion < '1' || opcion > '4');

        switch (opcion) {
            case '1':
                saldoConsulta(usuario, cuenta);
                break;
            case '2':
                consignar(usuario, cuenta);
                break;
            case '3':
                retirar(usuario, cuenta);
                break;
            case '4':
                cout << "Hasta pronto!" << endl;
                return 0;
            default:
                cout << "Seleccione una opcion valida. Intente nuevamente..." << endl;
                break;
        }
    }

    return 0;
}
