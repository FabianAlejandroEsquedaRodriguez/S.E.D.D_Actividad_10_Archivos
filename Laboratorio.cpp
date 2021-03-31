#include <iostream>
#include <fstream>
#include "Laboratorio.h"

using namespace std;

Laboratorio::Laboratorio(){
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &comp){
    if(cont < 5){//SI nuestro contador es menor que 5
        array[cont] = comp;//Guardar el parametro que le pasamos segun la posicion en la que vaya nuestro arreglo
        cont ++;
    }
    else{
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar(){

    cout << left;
    cout << "\n";
    cout << setw(22)<<"Sistema Operativo";
    cout << setw(15)<<"Memoria RAM";
    cout << setw(18)<<"Nombre";
    cout << setw(15)<<"Precio";
    cout << endl << endl;

    for (size_t i = 0; i < cont; i++) {

        Computadora &c = array[i];//Estamos guardando una referencia a lo que hay en las posiciones del arreglo
        cout<<c;//Imprimir el objeto de la forma que esta en el computadora.h

        /*cout<<"SISTEMA OPERATIVO: "<<c.getSistemaOperativo()<<endl;
        cout<<"MEMORIA RAM: "<< c.getMemoriaRAM()<<endl;
        cout<<"NOMBRE DEL EQUIPO: "<<c.getNombreEquipo()<<endl;
        cout<<"PRECIO: "<<c.getPrecio()<<endl;
        */
        cout<<endl;
    }
    
}

void Laboratorio::respaldar_tabla(){
    ofstream archivo ("computadoras_tabla.txt");

    if (archivo.is_open()){//Validar si el archivo pudo ser creado
    
        archivo << left;
        archivo << "\n";
        archivo << setw(22)<<"Sistema Operativo";
        archivo << setw(15)<<"Memoria RAM";
        archivo << setw(18)<<"Nombre";
        archivo << setw(15)<<"Precio";
        archivo << endl << endl;

        for (size_t i = 0; i < cont; i++) {
        Computadora &c = array[i];
        archivo<<c;//Imprime cada comptadora del arreglo en el archivo
        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo ("computadoras.txt");

    if (archivo.is_open()){//Validar si el archivo pudo ser creado

        for (size_t i = 0; i < cont; i++) {
        Computadora &c = array[i];
        //Imprime cada computadora del arreglo en el archivo
            archivo<<c.getSistemaOperativo()<<endl;
            archivo<<c.getMemoriaRAM()<<endl;
            archivo<<c.getNombreEquipo()<<endl;
            archivo<<c.getPrecio()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("computadoras.txt");//Va a abrir este archivo que es donde tenemos las computadoras linea por linea
    if(archivo.is_open()){
        string tempo;
        float precio;
        Computadora c;

        while(true){
            getline(archivo, tempo);//Para leer el sistema operativo
            if(archivo.eof()){//Verificar si el archivo ya llego al final
                break;
            }
            c.setSistemaOperativo(tempo);//Asignar el sistema operativo
            
            getline(archivo, tempo);//Leer la memoria ram
            c.setMemoriaRAM(tempo);//Establecer la memoria ram
            
            getline(archivo, tempo);//Leer el nombre
            c.setNombreEquipo(tempo);//Establecer el nombre

            getline(archivo, tempo);//Leer el precio
            precio = stof(tempo);//string-to-float // convertir una cadena a flotantes
            c.setPrecio(precio);//Establecer el precio

            agregarComputadora(c);
        }
    }
    archivo.close();
}