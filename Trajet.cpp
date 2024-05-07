#include "Trajet.h"

Trajet::Trajet(std::string pointEmbarquement, std::string pointDestination, std::vector<std::string> garesIntermediaires,
           double prixPremiereClasseHorsPointe, double prixPremiereClasseStandard, double prixPremiereClassePointe,
           double prixDeuxiemeClasseHorsPointe, double prixDeuxiemeClasseStandard, double prixDeuxiemeClassePointe)
    : pointEmbarquement(pointEmbarquement), pointDestination(pointDestination), garesIntermediaires(garesIntermediaires),
      prixPremiereClasseHorsPointe(prixPremiereClasseHorsPointe), prixPremiereClasseStandard(prixPremiereClasseStandard),
      prixPremiereClassePointe(prixPremiereClassePointe), prixDeuxiemeClasseHorsPointe(prixDeuxiemeClasseHorsPointe),
      prixDeuxiemeClasseStandard(prixDeuxiemeClasseStandard), prixDeuxiemeClassePointe(prixDeuxiemeClassePointe) {
}

// Getters
std::string Trajet::getPointEmbarquement() const {
    return pointEmbarquement;
}

std::string Trajet::getPointDestination() const {
    return pointDestination;
}

std::vector<std::string> Trajet::getGaresIntermediaires() const {
    return garesIntermediaires;
}

double Trajet::getPrixPremiereClasseHorsPointe() const {
    return prixPremiereClasseHorsPointe;
}

double Trajet::getPrixPremiereClasseStandard() const {
    return prixPremiereClasseStandard;
}

double Trajet::getPrixPremiereClassePointe() const {
    return prixPremiereClassePointe;
}

double Trajet::getPrixDeuxiemeClasseHorsPointe() const {
    return prixDeuxiemeClasseHorsPointe;
}

double Trajet::getPrixDeuxiemeClasseStandard() const {
    return prixDeuxiemeClasseStandard;
}

double Trajet::getPrixDeuxiemeClassePointe() const {
    return prixDeuxiemeClassePointe;
}

// Setters
void Trajet::setPointEmbarquement(std::string pointEmbarquement) {
    this->pointEmbarquement = pointEmbarquement;
}

void Trajet::setPointDestination(std::string pointDestination) {
    this->pointDestination = pointDestination;
}

void Trajet::setGaresIntermediaires(std::vector<std::string> garesIntermediaires) {
    this->garesIntermediaires = garesIntermediaires;
}

void Trajet::setPrixPremiereClasseHorsPointe(double prix) {
    this->prixPremiereClasseHorsPointe = prix;
}

void Trajet::setPrixPremiereClasseStandard(double prix) {
    this->prixPremiereClasseStandard = prix;
}

void Trajet::setPrixPremiereClassePointe(double prix) {
    this->prixPremiereClassePointe = prix;
}

void Trajet::setPrixDeuxiemeClasseHorsPointe(double prix) {
    this->prixDeuxiemeClasseHorsPointe = prix;
}

void Trajet::setPrixDeuxiemeClasseStandard(double prix) {
    this->prixDeuxiemeClasseStandard = prix;
}

void Trajet::setPrixDeuxiemeClassePointe(double prix) {
    this->prixDeuxiemeClassePointe = prix;
}
