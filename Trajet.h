#ifndef TRAJET_H
#define TRAJET_H

#include <string>
#include <vector>

class Trajet {
private:
    std::string pointEmbarquement;
    std::string pointDestination;
    std::vector<std::string> garesIntermediaires;
    double prixPremiereClasseHorsPointe;
    double prixPremiereClasseStandard;
    double prixPremiereClassePointe;
    double prixDeuxiemeClasseHorsPointe;
    double prixDeuxiemeClasseStandard;
    double prixDeuxiemeClassePointe;

public:
    Trajet(std::string pointEmbarquement, std::string pointDestination, std::vector<std::string> garesIntermediaires,
           double prixPremiereClasseHorsPointe, double prixPremiereClasseStandard, double prixPremiereClassePointe,
           double prixDeuxiemeClasseHorsPointe, double prixDeuxiemeClasseStandard, double prixDeuxiemeClassePointe);

    // Getters
    std::string getPointEmbarquement() const;
    std::string getPointDestination() const;
    std::vector<std::string> getGaresIntermediaires() const;
    double getPrixPremiereClasseHorsPointe() const;
    double getPrixPremiereClasseStandard() const;
    double getPrixPremiereClassePointe() const;
    double getPrixDeuxiemeClasseHorsPointe() const;
    double getPrixDeuxiemeClasseStandard() const;
    double getPrixDeuxiemeClassePointe() const;

    // Setters
    void setPointEmbarquement(std::string pointEmbarquement);
    void setPointDestination(std::string pointDestination);
    void setGaresIntermediaires(std::vector<std::string> garesIntermediaires);
    void setPrixPremiereClasseHorsPointe(double prix);
    void setPrixPremiereClasseStandard(double prix);
    void setPrixPremiereClassePointe(double prix);
    void setPrixDeuxiemeClasseHorsPointe(double prix);
    void setPrixDeuxiemeClasseStandard(double prix);
    void setPrixDeuxiemeClassePointe(double prix);
};

#endif
