#include <iostream>
#include "Laboratorio.h"
using namespace std;

int main(){
    Laboratorio lab;
    lab.recuperar();//Lo que va a hacer es leer el archivo y volver a crear las computadoras que se respaldaron
    lab.mostrar();

//     Asi estamos mandando los parametros a nuestro constructor parametrizado
//     Y creamos un objeto
//     Computadora c = Computadora("Windows", "8 GB", "Lenovo 330S", 12500.50);
//     Computadora c2; //Se crea otro objeto
//     Computadora c3;

//     /*Es lo mismo que crear un objeto -> Computadora c;
//     y establecer los datos por teclado o de manera directa usando los setters
//     */ 
//     c2.setSistemaOperativo("Linux");
//     c2.setMemoriaRAM("16 GB");
//     c2.setNombreEquipo("Notebook Huawei");
//     c2.setPrecio(14000);

//     c3.setSistemaOperativo("MacOS");
//     c3.setMemoriaRAM("12 GB");
//     c3.setNombreEquipo("MacBook Pro");
//     c3.setPrecio(25000);

//     Laboratorio comp;//Aqui se va a crear el arreglo
    
//     Le mandamos los objetos de la clase computadora, ya creados

//     Laboratorio comp;

//     comp.agregarFinal(c);
//     comp.agregarFinal(c2);
//     comp.agregarFinal(c3);

//     comp << c << c2 << c3;

//    Computadora c4;//Creamos un nuevo objeto para leerlo
//    cin >> c4;//gracias a la sobrecarga de operadores
//    comp << c4;

//    comp.mostrar();
//    comp.respaldar_tabla();//Llamar al metodo respaldar en modo tabla
//    comp.respaldar();//Llamar al metodo respaldar linea por linea

    return 0;
}