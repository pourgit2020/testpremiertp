#include "employee.h"

Employee::Employee(std::string nom, int matricule) {
  this->nom = nom;
  this->matricule=matricule;
  
}
int Employee::getMatricule(){  
  return matricule;
}
std::string Employee::getNom(){
return nom;
}
 Employee::~Employee(){} ;