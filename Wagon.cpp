#include "Wagon.h"

Wagon::Wagon(int numero, std::string classe, int nombrePlaces)
    : numero(numero), classe(classe), nombrePlaces(nombrePlaces) {
}

// Getters
int Wagon::getNumero() const {
    return numero;
}

std::string Wagon::getClasse() const {
    return classe;
}

int Wagon::getNombrePlaces() const {
    return nombrePlaces;
}

// Setters
void Wagon::setNumero(int numero) {
    this->numero = numero;
}

void Wagon::setClasse(std::string classe) {
    this->classe = classe;
}

void Wagon::setNombrePlaces(int nombrePlaces) {
    this->nombrePlaces = nombrePlaces;
}
