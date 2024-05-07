#include "Passager.h"

Passager::Passager(std::string nom, std::string prenom, std::string email, std::string categorie)
    : nom(nom), prenom(prenom), email(email), categorie(categorie) {
}

// Getters
std::string Passager::getNom() const {
    return nom;
}

std::string Passager::getPrenom() const {
    return prenom;
}

std::string Passager::getEmail() const {
    return email;
}

std::string Passager::getCategorie() const {
    return categorie;
}

// Setters
void Passager::setNom(std::string nom) {
    this->nom = nom;
}

void Passager::setPrenom(std::string prenom) {
    this->prenom = prenom;
}

void Passager::setEmail(std::string email) {
    this->email = email;
}

void Passager::setCategorie(std::string categorie) {
    this->categorie = categorie;
}
