#ifndef RESERVATION_H
#define RESERVATION_H

#include "Passager.h"
#include <ctime>
#include <string>

class Reservation {
private:
    int numeroTrain;
    std::string nomTrain;
    std::string pointEmbarquement;
    std::string pointDestination;
    std::string classeSiege;
    time_t dateReservation;
    Passager passager;
    double montantAPayer;

public:
    Reservation(int numeroTrain, std::string nomTrain, std::string pointEmbarquement, std::string pointDestination,
                std::string classeSiege, Passager passager, double montantAPayer, time_t dateReservation);

    // Getters
    int getNumeroTrain() const;
    std::string getNomTrain() const;
    std::string getPointEmbarquement() const;
    std::string getPointDestination() const;
    std::string getClasseSiege() const;
    time_t getDateReservation() const;
    Passager getPassager() const;
    double getMontantAPayer() const;

    // Setters
    void setNumeroTrain(int numeroTrain);
    void setNomTrain(std::string nomTrain);
    void setPointEmbarquement(std::string pointEmbarquement);
    void setPointDestination(std::string pointDestination);
    void setClasseSiege(std::string classeSiege);
    void setDateReservation(time_t dateReservation);
    void setPassager(Passager passager);
    void setMontantAPayer(double montantAPayer);
};

#endif
