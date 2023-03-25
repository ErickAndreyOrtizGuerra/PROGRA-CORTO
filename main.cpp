/*Erick Andrey Ortiz Guerra 0909 22 17063*/

#include <iostream>
using namespace std;

int main() {
    int edad, numero1,numero2,numeroparoimp, numerofacto, factorial=1, i=1, diadelasemana; //variables//

    cout <<"ingresa tu edad: ";
    cin >> edad;
    if (edad >= 18) { // si edad es mayor que 18 muestra y si es igual a 18 es menor//
        cout << "eres mayor de edad";
    } else {
        cout << "eres menor de edad";
    }

    cout << "ingrese el primer numero: " << endl;
    cin >> numero1;
    cout << "ingrese el segundo numero: " << endl;
    cin >> numero2;

    if (numero1 > numero2) { //si numero1 es mayor que numero2 mostrar en pantalla//
        cout << "el primer numero es mayor" << endl;
    } else if (numero2 > numero1) {
        cout << "el segundo numero es mayor" << endl;
    }


    cout << "ingrese un numero:";
    cin >> numeroparoimp;

    if (numeroparoimp % 2 == 0) { //si numero ingresado por el usuario se puede dividir dentro de 2 es numero par//
        cout << numeroparoimp << "es un numero par" << endl;
    } else {
        cout << numeroparoimp << "es un numero impar" << endl;
    }

    cout << "ingresa un numero entero positivo: ";
    cin >> numerofacto;

    while (i <= numerofacto) {
        factorial *= i;
        i++; //i tiene como valor inicial 1 y se ira sumando dentro en bucle mientras se cumpla la condicion//
    }
    cout << "El factorial de " << numerofacto << " es " << factorial << endl;


    cout << "ingresa un numero del 1 al 5: ";
    cin >> diadelasemana;

    switch (diadelasemana) {
        case 1:
            cout << "lunes" << endl;
            break;
        case 2:
            cout << "martes" << endl;
            break;
        case 3:
            cout << "miercoles" << endl;
            break;
        case 4:
            cout << "jueves" << endl;
            break;
        case 5:
            cout << "viernes" << endl;
            break;
    }

 return 0;
}
