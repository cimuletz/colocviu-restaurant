/* Student Serafim Alex-Mihai
   Grupa 151
   gcc 10.2.0
 */
//
// Created by seraf on 27.05.2021.
//

#include "Comanda.h"

int Comanda::comanda_id = 0;

Comanda::Comanda(Produs Prod, int nrPortii, Data data):Num(comanda_id), Prod(Prod), nrPortii(nrPortii), data(data) {
    comanda_id++;
    Num = comanda_id;
}
Comanda::Comanda(std::string nume, int nrPortii, Data data):Prod(nume), nrPortii(nrPortii), data(data){
    comanda_id++;
    Num = comanda_id;
}

Comanda::Comanda(std::string nume, int nrPortii): Prod(nume), nrPortii(nrPortii), data(Data()){
    comanda_id++;
    Num = comanda_id;
}

Comanda::Comanda() {
    comanda_id++;
    Num = comanda_id;
}


Comanda::~Comanda(){}
Comanda operator+(const Comanda& com, int cantitate){
    Comanda copie{com};
    copie.nrPortii += cantitate;
    return copie;
}
Comanda& Comanda::operator++(){
    this -> nrPortii++;
    return *this;
}

Comanda Comanda::operator++(int) {
    Comanda copie(*this);
    ++*this;
    return copie;
}

void Comanda::del(){
    cancelled = true;
}

std::istream &operator>>(std::istream &is, Comanda &comanda) {
    is >> comanda.Prod >> comanda.nrPortii >> comanda.data;
    return is;
}

std::ostream &operator<<(std::ostream &os, const Comanda &comanda){
    os << "prod:" << comanda.Prod << "nrComanda:" << comanda.Num << "\n" << "numarPortii:" << comanda.nrPortii << "\n" << "data:" << comanda.data << "\n";
    return os;
}