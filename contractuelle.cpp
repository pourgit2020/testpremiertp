#include "contractuelle.h"

Contractuelle::Contractuelle(std::string nom, int matricule,int montant_contrat, int les_semaines):Employee(nom,matricule) 
{
  this->montant_contrat = montant_contrat;
  this->semaines = les_semaines;
}
double Contractuelle::getPaie(){
      double paie= (double)this->montant_contrat/(double)this->semaines;
      return paie; 
    }
   