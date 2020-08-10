#ifndef __CONTRACTUELLE_H__
#define __CONTRACTUELLE_H__
#include "employee.h"


class Contractuelle : public Employee {
  private:
    int montant_contrat;
    int semaines;
  public:
    
    // Constructeur
    Contractuelle(std::string nom, int matricule,int montant_contrat, int les_semaines);
    // Méthode paie
    double getPaie();
  
    
};
#endif