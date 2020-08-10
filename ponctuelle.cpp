  
  #include "ponctuelle.h"

Ponctuelle::Ponctuelle(std::string nom, int matricule,double montant_unique):Employee(nom,matricule)
 {
  this-> montant_unique =  montant_unique;
 }
double Ponctuelle::getPaie(){
      double paie=this->montant_unique;
      return paie;
    }