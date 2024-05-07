#include <iostream>
#include <ctime>
#include "Train.h"
#include "Wagon.h"
#include "Passager.h"
#include "Trajet.h"
#include "Reservation.h"
#include "Annulation.h"

int main() {
    // Création d'un train
    Train train(123, "Al Atlas", "Casablanca", "Marrakech", 5, 2);

    // Création d'un passager
    Passager passager("El", "Ahmed", "ahmed.el@example.com", "Autre");

    // Création d'une réservation
    Reservation reservation(123, "Al Atlas", "Casablanca", "Marrakech", "Fenêtre", passager, 100.0, time(nullptr));

    // Affichage des détails de la réservation
    std::cout << "Détails de la réservation :" << std::endl;
    std::cout << "Train : " << reservation.getNomTrain() << std::endl;
    std::cout << "Point d'embarquement : " << reservation.getPointEmbarquement() << std::endl;
    std::cout << "Point de destination : " << reservation.getPointDestination() << std::endl;
    std::cout << "Classe de siège : " << reservation.getClasseSiege() << std::endl;
    std::cout << "Nom du passager : " << reservation.getPassager().getNom() << " " << reservation.getPassager().getPrenom() << std::endl;
    std::cout << "Montant à payer : " << reservation.getMontantAPayer() << std::endl;

    // Création d'une annulation
    Annulation annulation(123, "Al Atlas", "Casablanca", "Marrakech", "Fenêtre", 12, passager, 50.0, time(nullptr));

    // Affichage des détails de l'annulation
    std::cout << "\nDétails de l'annulation :" << std::endl;
    std::cout << "Train : " << annulation.getNomTrain() << std::endl;
    std::cout << "Point d'embarquement : " << annulation.getPointEmbarquement() << std::endl;
    std::cout << "Point de destination : " << annulation.getPointDestination() << std::endl;
    std::cout << "Classe de siège : " << annulation.getClasseSiege() << std::endl;
    std::cout << "Nom du passager : " << annulation.getPassager().getNom() << " " << annulation.getPassager().getPrenom() << std::endl;
    std::cout << "Montant à récupérer : " << annulation.getMontantARécupérer() << std::endl;

    return 0;
}
