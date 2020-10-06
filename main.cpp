
/*
Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.
Ej: si se ingresan 3, + y 5 se debe imprimir:
3+5=8
*/

#include <iostream>

using namespace std;

int main(void){

    //Declaracion de variables
    int numero_A;
    int numero_B;
    char operacion;

    //Capturar datos
    cout << "Ingrese el numero A: ";
    cin >> numero_A;
    cout << "Ingrese el numero B: ";
    cin >> numero_B;

    //Ingresar la operacion
    cout << "Ingrese la operacion: ";
    cin >> operacion;

    //Suma
    if (operacion == '+')
        cout << numero_A << " + " << numero_B << " = " << numero_A + numero_B << endl;

    //Resta
    else if (operacion == '-')
        cout << numero_A << " - " << numero_B << " = " << numero_A - numero_B << endl;

    //Multiplicacion
    else if (operacion == '*')
        cout << numero_A << " * " << numero_B << " = " << numero_A * numero_B << endl;

    //Division
    else
        cout << numero_A << " / " << numero_B << " = " << static_cast<float>(numero_A) / numero_B << endl;

    return 0;
}
