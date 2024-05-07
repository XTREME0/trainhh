#include "Annulation.h"

Annulation::Annulation(int numeroTrain, std::string nomTrain, std::string pointEmbarquement, std::string pointDestination,
                std::string classeSiege, int numeroSiege, Passager passager, double montantARécupérer, time_t dateAnnulation)
    : numeroTrain(numeroTrain), nomTrain(nomTrain), pointEmbarquement(pointEmbarquement), pointDestination(pointDestination),
      classeSiege(classeSiege), numeroSiege(numeroSiege), passager(passager), montantARécupérer(montantARécupérer), dateAnnulation(dateAnnulation) {
}

// Getters
int Annulation::getNumeroTrain() const {
    return numeroTrain;
}

std::string Annulation::getNomTrain() const {
    return nomTrain;
}

std::string Annulation::getPointEmbarquement() const {
    return pointEmbarquement;
}

std::string Annulation::getPointDestination() const {
    return pointDestination;
}

std::string Annulation::getClasseSiege() const {
    return classeSiege;
}

int Annulation::getNumeroSiege() const {
    return numeroSiege;
}

time_t Annulation::getDateAnnulation() const {
    return dateAnnulation;
}

Passager Annulation::getPassager() const {
    return passager;
}

double Annulation::getMontantARécupérer() const {
    return montantARécupérer;
}

// Setters
void Annulation::setNumeroTrain(int numeroTrain) {
    this->numeroTrain = numeroTrain;
}

void Annulation::setNomTrain(std::string nomTrain) {
    this->nomTrain = nomTrain;
}

void Annulation::setPointEmbarquement(std::string pointEmbarquement) {
    this->pointEmbarquement = pointEmbarquement;
}

void Annulation::setPointDestination(std::string pointDestination) {
    this->pointDestination = pointDestination;
}

void Annulation::setClasseSiege(std::string classeSiege) {
    this->classeSiege = classeSiege;
}

void Annulation::setNumeroSiege(int numeroSiege) {
    this->numeroSiege = numeroSiege;
}

void Annulation::setDateAnnulation(time_t dateAnnulation) {
    this->dateAnnulation = dateAnnulation;
}

void Annulation::setPassager(Passager passager) {
    this->passager = passager;
}

void Annulation::setMontantARécupérer(double montantARécupérer) {
    this->montantARécupérer = montantARécupérer;
}
