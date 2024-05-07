#include "Reservation.h"

Reservation::Reservation(int numeroTrain, std::string nomTrain, std::string pointEmbarquement, std::string pointDestination,
                std::string classeSiege, Passager passager, double montantAPayer, time_t dateReservation)
    : numeroTrain(numeroTrain), nomTrain(nomTrain), pointEmbarquement(pointEmbarquement), pointDestination(pointDestination),
      classeSiege(classeSiege), passager(passager), montantAPayer(montantAPayer), dateReservation(dateReservation) {
}

// Getters
int Reservation::getNumeroTrain() const {
    return numeroTrain;
}

std::string Reservation::getNomTrain() const {
    return nomTrain;
}

std::string Reservation::getPointEmbarquement() const {
    return pointEmbarquement;
}

std::string Reservation::getPointDestination() const {
    return pointDestination;
}

std::string Reservation::getClasseSiege() const {
    return classeSiege;
}

time_t Reservation::getDateReservation() const {
    return dateReservation;
}

Passager Reservation::getPassager() const {
    return passager;
}

double Reservation::getMontantAPayer() const {
    return montantAPayer;
}

// Setters
void Reservation::setNumeroTrain(int numeroTrain) {
    this->numeroTrain = numeroTrain;
}

void Reservation::setNomTrain(std::string nomTrain) {
    this->nomTrain = nomTrain;
}

void Reservation::setPointEmbarquement(std::string pointEmbarquement) {
    this->pointEmbarquement = pointEmbarquement;
}

void Reservation::setPointDestination(std::string pointDestination) {
    this->pointDestination = pointDestination;
}

void Reservation::setClasseSiege(std::string classeSiege) {
    this->classeSiege = classeSiege;
}

void Reservation::setDateReservation(time_t dateReservation) {
    this->dateReservation = dateReservation;
}

void Reservation::setPassager(Passager passager) {
    this->passager = passager;
}

void Reservation::setMontantAPayer(double montantAPayer) {
    this->montantAPayer = montantAPayer;
}
