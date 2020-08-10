
#include "syndiquee.h"

Syndiquee::Syndiquee(std::string nom, int matricule,double taux_horaire, double nb_heures):Employee(nom,matricule) {
  this->taux_horaire = taux_horaire;
  this->nb_heures = nb_heures;
}
double Syndiquee::getPaie(){
      double paie= this->taux_horaire*this->nb_heures;
      return paie;
    }
    