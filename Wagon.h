#ifndef WAGON_H
#define WAGON_H

#include <string>

class Wagon {
private:
    int numero;
    std::string classe;
    int nombrePlaces;

public:
    Wagon(int numero, std::string classe, int nombrePlaces);

    // Getters
    int getNumero() const;
    std::string getClasse() const;
    int getNombrePlaces() const;

    // Setters
    void setNumero(int numero);
    void setClasse(std::string classe);
    void setNombrePlaces(int nombrePlaces);
};

#endif
