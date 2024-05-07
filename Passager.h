#ifndef PASSAGER_H
#define PASSAGER_H

#include <string>

class Passager {
private:
    std::string nom;
    std::string prenom;
    std::string email;
    std::string categorie;

public:
    Passager(std::string nom, std::string prenom, std::string email, std::string categorie);

    // Getters
    std::string getNom() const;
    std::string getPrenom() const;
    std::string getEmail() const;
    std::string getCategorie() const;

    // Setters
    void setNom(std::string nom);
    void setPrenom(std::string prenom);
    void setEmail(std::string email);
    void setCategorie(std::string categorie);
};

#endif
