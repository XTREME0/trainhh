#ifndef TRAIN_H
#define TRAIN_H

#include <string>

class Train {
private:
    int numero;
    std::string nom;
    std::string pointEmbarquement;
    std::string pointDestination;
    int nombreWagons;
    int nombreWagonsPremiereClasse;

public:
    Train(int numero, std::string nom, std::string pointEmbarquement, std::string pointDestination, int nombreWagons, int nombreWagonsPremiereClasse);

    // Getters
    int getNumero() const;
    std::string getNom() const;
    std::string getPointEmbarquement() const;
    std::string getPointDestination() const;
    int getNombreWagons() const;
    int getNombreWagonsPremiereClasse() const;

    // Setters
    void setNumero(int numero);
    void setNom(std::string nom);
    void setPointEmbarquement(std::string pointEmbarquement);
    void setPointDestination(std::string pointDestination);
    void setNombreWagons(int nombreWagons);
    void setNombreWagonsPremiereClasse(int nombreWagonsPremiereClasse);
};

#endif
