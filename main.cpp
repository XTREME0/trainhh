#include <iostream>
#include <fstream>
#include <ctime>
#include "Train.h"
#include "Wagon.h"
#include "Passager.h"
#include "Trajet.h"
#include "Reservation.h"
#include "Annulation.h"

// Global arrays for prices
float prix1d1[] = {243.0f, 299.0f, 364.0f};
float prix1d2[] = {115.0f, 143.0f, 172.0f};
float prix1d3[] = {93.0f, 116.0f, 139.0f};
float prix2HorsPointe[] = {149.0f, 189.0f, 224.0f};
float prix2Standard[] = {224.0f, 243.0f, 299.0f};
float prix2Pointe[] = {299.0f, 364.0f};

// Function to calculate price based on trajet, class, and level
float calculatePrice(const std::string& trajet, bool isFirstClass, int level) {
    // Table of prices for trajets
    float prixTangerCasablanca[] = {149.0f, 189.0f, 224.0f, 243.0f, 299.0f, 364.0f};
    float prixTangerRabat[] = {115.0f, 143.0f, 172.0f, 187.0f, 234.0f, 281.0f};
    float prixTangerKenitra[] = {93.0f, 116.0f, 139.0f, 162.0f, 199.0f, 244.0f};

    // Select appropriate trajet prices
    float* prixTrajet;
    if (trajet == "Tanger-Casablanca") {
        prixTrajet = prixTangerCasablanca;
    } else if (trajet == "Tanger-Rabat") {
        prixTrajet = prixTangerRabat;
    } else if (trajet == "Tanger-Kenitra") {
        prixTrajet = prixTangerKenitra;
    } else {
        // Invalid trajet, return default price
        return 0.0f;
    }

    // Select appropriate class prices
    float* prixClass;
    if (isFirstClass) {
        if (level == 1) {
            prixClass = prix1d1;
        } else if (level == 2) {
            prixClass = prix1d2;
        } else if (level == 3) {
            prixClass = prix1d3;
        } else {
            // Invalid level, return default price
            return 0.0f;
        }
    } else {
        prixClass = prix2HorsPointe; // Default to hors pointe for second class
        if (level == 2) {
            prixClass = prix2Standard;
        } else if (level == 3) {
            prixClass = prix2Pointe;
        }
    }

    // Calculate and return the price
    return prixTrajet[level - 1];
}

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

    // zakaria
    Passager passager("zakaria", "JAMMOUD", "zakaria.jammoud@gmail.com", "Autre");

    // Test 1: Tanger-Casablanca, 2nd class standard
    float priceTest1 = calculatePrice("Tanger-Casablanca", false, 2);
    Reservation reservation1(123, "Al Atlas", "Tanger", "Casablanca", "Fenêtre", passager, priceTest1, time(nullptr));
    enregistrerReservation(reservation1);

    // Test 2: Tanger-Kenitra, 1st class medium demand
    float priceTest2 = calculatePrice("Tanger-Kenitra", true, 2);
    Reservation reservation2(123, "Al Atlas", "Tanger", "Kenitra", "Fenêtre", passager, priceTest2, time(nullptr));
    enregistrerReservation(reservation2);
   
    // fatima
    Passager fatima("Fatima", "EL AMRANI", "fatima.elamrani@example.com", "Autre");

    float priceTest3 = calculatePrice("Tanger-Rabat", true, 3);
    Reservation reservation3(123, "Al Atlas", "Tanger", "Rabat", "Fenêtre", fatima, priceTest3, time(nullptr));
    enregistrerReservation(reservation3);

    return 0;
}
