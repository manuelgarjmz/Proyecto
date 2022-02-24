#include <iostream>

using namespace std;

int main()
{
    int opcion;
    char nombre[150], hora[50], tratamiento[150], descripcion[500];
    int precio, cant, preunit, precioc, total, op;

    cout << "Selecione la opcion que quiere realizar" << endl;
    cout << "1.Agendar Cita" << endl;
    cout << "2.Modificar Cita" << endl;
    cout << "3.Eliminar Cita" << endl;
    cout << "4.Lista de citas vigentes" << endl;
    cout << "5.Limpiar Pantalla" << endl;
    cout << "6. Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1: 
        while (opcion == 1)
        {
        cout << "Ingresa el nombre del paciente" << endl;
        cin >> nombre;
        cout << "Ingresa la hora del tratamiento (formato de 24 horas)" << endl;
        cin >> hora;
        cout << "Ingresa el nombre del tratamiento" << endl;
        cin >> tratamiento;
        cout << "Ingresa la descripcion del tratamiento" << endl;
        cin >> descripcion;
        cout << "Ingresa el precio unitario del tratamiento" << endl;
        cin >> precio;
        cout << "Ingresa la cantidad del tratamiento" << endl;
        cin >> cant;
        cout << "Ingresa el precio unitario" << endl;
        cin >> preunit;

        precioc = precio * cant;
        total = precioc + preunit;
        cout << "El precio total es:" << total << endl;
       
            cout << "Desea agendar otra cita" << endl;
            cout << "1.- Si" << endl;
            cout << "2.- No" << endl;
            cin >> opcion;
        }
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        exit(1);
        break;
    default: cout << "No ingreso opcion valida";
    }
}