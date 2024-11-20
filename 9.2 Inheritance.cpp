// 9.2 Inheritance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

class Building
{
protected:
    string name;
public:
    Building() //Constructor default
    {
        name = "Edificio";
    }
    Building(string nombre) //Constructor
    {
        name = nombre;
    }
    const string getName() const //Funcion retorna el nombre
    {
        return name;
    }
};
//Clase derivada de Building
class Warehouse : public Building
{
private:
    int wood;
    int rocks;
    int wheat;
public:
    Warehouse() //Constructor default
    {
        name = "Warehaouse1";
        wood = 0;
        rocks = 0;
        wheat = 0;
    }
    Warehouse(string nombre, int madera, int piedra, int ww)
        : Building(name), /*Constructor building*/ wood(madera), rocks(piedra), wheat(ww)
    {
    };
    void printResources()
    {
        cout << "\nMATERIALES DISPONIBLES:\nNombre: " << getName() << "\nMadera: " << wood << "\nPiedra: " << rocks << "\nWheat: " << wheat << endl;
    }

};
//Clase derivada de Warehouse
class House : public Warehouse
{
private:
    int pisos;
    int miembros;
    int sirvientes;
public:
    House() //Constructor default
    {
        name = "Casa1";
        pisos = 0;
        miembros = 0;
        sirvientes = 0;
    }
    House(string nombre, int floors, int inhabitants, int servants)
    {
        Building(nombre);
        pisos = floors;
        miembros = inhabitants;
        sirvientes = servants;
    }
    void printHouse()
    {
        cout << "\nINFORMACION MIEMBROS:\nNombre: " << getName << "\nPisos: " << pisos << "\nMiembros : " << miembros << "\nSirvientes : " << sirvientes << endl;
    }
};
//Clase derivada de Building
class Temple : public Building
{
private:
    string members_god;
    int priest;
public:
    Temple() //Constructor default
    {
        name = "Templo1";
        members_god = "Nombre1";
        priest = 2;
    }
    Temple(string nombre, string miembros, int sacerdotes)
        : Building(name), members_god(miembros), priest(sacerdotes)
    {
    }
    void printTemple()
    {
        cout << "\nINFORMACIÓN TEMPLO:\nNombre" << getName << "\nMiembros: " << members_god << "\nSacerdotes: " << priest << endl;
    }
};

int main()
{
    //Darle valor a cada clase creada

    //Clase Building
    Building("Edificio A");

    //Clase Warehouse
    Warehouse("Warehouse B", 4, 7, 5);

    //Clase House

    //Clase Temple
}
