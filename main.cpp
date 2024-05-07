#include <iostream>
#include <fstream>
#include <ctime>
#include "Train.h"
#include "Wagon.h"
#include "Passager.h"
#include "Trajet.h"
#include "Reservation.h"
#include "Annulation.h"

// Function to save reservation details to reservations.txt
void enregistrerReservation(const Reservation& reservation) {
    std::ofstream fichier("reservations.txt", std::ios_base::app);
    if (fichier.is_open()) {
        fichier << "Numéro de train : " << reservation.getNumeroTrain() << std::endl;
        fichier << "Nom du train : " << reservation.getNomTrain() << std::endl;
        fichier << "Point d'embarquement : " << reservation.getPointEmbarquement() << std::endl;
        fichier << "Point de destination : " << reservation.getPointDestination() << std::endl;
        fichier << "Classe de siège : " << reservation.getClasseSiege() << std::endl;
	time_t reservationTime = reservation.getDateReservation();
	fichier << "Date de réservation : " << ctime(&reservationTime);
        fichier << "Nom du passager : " << reservation.getPassager().getNom() << " " << reservation.getPassager().getPrenom() << std::endl;
        fichier << "Montant à payer : " << reservation.getMontantAPayer() << " DH" << std::endl;
        fichier << "------------------------------------" << std::endl;
        fichier.close();
    }
}

// Function to save annulation details to annulations.txt
void enregistrerAnnulation(const Annulation& annulation) {
    std::ofstream fichier("annulations.txt", std::ios_base::app);
    if (fichier.is_open()) {
        fichier << "Numéro de train : " << annulation.getNumeroTrain() << std::endl;
        fichier << "Nom du train : " << annulation.getNomTrain() << std::endl;
        fichier << "Point d'embarquement : " << annulation.getPointEmbarquement() << std::endl;
        fichier << "Point de destination : " << annulation.getPointDestination() << std::endl;
        fichier << "Classe de siège : " << annulation.getClasseSiege() << std::endl;
	time_t annulationTime = annulation.getDateAnnulation();
	fichier << "Date d'annulation : " << ctime(&annulationTime);
        fichier << "Nom du passager : " << annulation.getPassager().getNom() << " " << annulation.getPassager().getPrenom() << std::endl;
        fichier << "Montant à récupérer : " << annulation.getMontantARécupérer() << " DH" << std::endl;
        fichier << "------------------------------------" << std::endl;
        fichier.close();
    }
}

int main() {
    // Create a train
    Train train(123, "Al Atlas", "Casablanca", "Marrakech", 5, 2);

    // Create a passenger
    Passager passager("zakaria", "JAMMOUD", "zakaria.jammoud@gmail.com", "Autre");

    // Create a reservation
    Reservation reservation(123, "Al Atlas", "Tanger", "Casablanca", "Fenêtre", passager, 189.0, time(nullptr));

    // Save reservation details to reservations.txt
    enregistrerReservation(reservation);

    // Create an annulation
    Annulation annulation(123, "Al Atlas", "Tanger", "Casablanca", "Fenêtre", 12, passager, 50.0, time(nullptr));

    // Save annulation details to annulations.txt
    enregistrerAnnulation(annulation);

    return 0;
}

