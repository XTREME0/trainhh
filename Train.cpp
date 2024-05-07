#include "Train.h"

Train::Train(int numero, std::string nom, std::string pointEmbarquement, std::string pointDestination, int nombreWagons, int nombreWagonsPremiereClasse)
    : numero(numero), nom(nom), pointEmbarquement(pointEmbarquement), pointDestination(pointDestination), nombreWagons(nombreWagons), nombreWagonsPremiereClasse(nombreWagonsPremiereClasse) {
}

// Getters
int Train::getNumero() const {
    return numero;
}

std::string Train::getNom() const {
    return nom;
}

std::string Train::getPointEmbarquement() const {
    return pointEmbarquement;
}

std::string Train::getPointDestination() const {
    return pointDestination;
}

int Train::getNombreWagons() const {
    return nombreWagons;
}

int Train::getNombreWagonsPremiereClasse() const {
    return nombreWagonsPremiereClasse;
}

// Setters
void Train::setNumero(int numero) {
    this->numero = numero;
}

void Train::setNom(std::string nom) {
    this->nom = nom;
}

void Train::setPointEmbarquement(std::string pointEmbarquement) {
    this->pointEmbarquement = pointEmbarquement;
}

void Train::setPointDestination(std::string pointDestination) {
    this->pointDestination = pointDestination;
}

void Train::setNombreWagons(int nombreWagons) {
    this->nombreWagons = nombreWagons;
}

void Train::setNombreWagonsPremiereClasse(int nombreWagonsPremiereClasse) {
    this->nombreWagonsPremiereClasse = nombreWagonsPremiereClasse;
}
