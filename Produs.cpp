/* Student Serafim Alex-Mihai
   Grupa 151
   gcc 10.2.0
 */
//
// Created by seraf on 27.05.2021.
//

#include "Produs.h"

Produs::Produs(std::string denProd, float pretProd): denProd(denProd), pretProd(pretProd) {}

Produs::Produs(const std::string &denProd) : denProd(denProd) {}

Produs::Produs() {}

Produs::~Produs() {}

std::ostream& operator<<(std::ostream& os,const Produs& produs){
    os  << "\n" << "denumire:" << produs.denProd << "\n" << produs.pretProd << "\n";
    return os;
}

std::istream& operator>>(std::istream& is, Produs& produs){
    is >> produs.denProd >> produs.pretProd;
    return is;
}