#ifndef ANNULATION_H
#define ANNULATION_H

#include "Passager.h"
#include <ctime>
#include <string>

class Annulation {
private:
    int numeroTrain;
    std::string nomTrain;
    std::string pointEmbarquement;
    std::string pointDestination;
    std::string classeSiege;
    int numeroSiege;
    time_t dateAnnulation;
    Passager passager;
    double montantARécupérer;

public:
    Annulation(int numeroTrain, std::string nomTrain, std::string pointEmbarquement, std::string pointDestination,
                std::string classeSiege, int numeroSiege, Passager passager, double montantARécupérer, time_t dateAnnulation);

    // Getters
    int getNumeroTrain() const;
    std::string getNomTrain() const;
    std::string getPointEmbarquement() const;
    std::string getPointDestination() const;
    std::string getClasseSiege() const;
    int getNumeroSiege() const;
    time_t getDateAnnulation() const;
    Passager getPassager() const;
    double getMontantARécupérer() const;

    // Setters
    void setNumeroTrain(int numeroTrain);
    void setNomTrain(std::string nomTrain);
    void setPointEmbarquement(std::string pointEmbarquement);
    void setPointDestination(std::string pointDestination);
    void setClasseSiege(std::string classeSiege);
    void setNumeroSiege(int numeroSiege);
    void setDateAnnulation(time_t dateAnnulation);
    void setPassager(Passager passager);
    void setMontantARécupérer(double montantARécupérer);
};

#endif
