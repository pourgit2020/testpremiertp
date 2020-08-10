#ifndef __PONCTUELLE_H__
#define __PONCTUELLE_H__

#include "employee.h"


class Ponctuelle : public Employee {
  private:
    double montant_unique;
    
  public:
    
    // Constructeur
    Ponctuelle(std::string nom, int matricule,double montant_unique);
    // Méthode
    double getPaie();
   
};

#endif