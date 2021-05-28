/* Student Serafim Alex-Mihai
   Grupa 151
   gcc 10.2.0
 */
//
// Created by seraf on 27.05.2021.
//

#include <memory>
#include "Ospatar.h"
Ospatar::Ospatar(std::string Nume, std::vector<std::unique_ptr<Comanda>> &&comenzi, int nrComenzi, char gen, int varsta):Nume(Nume), comenzi(std::move(comenzi)), nrComenzi(nrComenzi), gen(gen), varsta(varsta) {}
Ospatar::~Ospatar() {}

std::ostream& operator<<(std::ostream& os, const Ospatar& ospatar){
    os << "nume:" << ospatar.Nume << "gen:" << ospatar.gen << "varsta:" << ospatar.varsta << " nrcomenzi:" << ospatar.nrComenzi << "\ncomenzi:";
    for(int i = 0; i<ospatar.nrComenzi; ++i){
        os << *ospatar.comenzi[i];
    }
    os << "\n";
}

bool operator>(const Ospatar& o1, const Ospatar& o2){
    return o1.nrComenzi > o2.nrComenzi;
}

bool operator==(const Ospatar& o1, const Ospatar& o2){
    return o1.nrComenzi == o2.nrComenzi;
}

std::string Ospatar::nume(){
    return Nume;
}

Ospatar::Ospatar(const std::string &nume, std::vector <std::unique_ptr <Comanda>> &&com, char gen, int varsta)
        : Nume(nume), comenzi(std::move(com)), gen(gen), varsta(varsta) {}

Ospatar::Ospatar(const std::string &nume, char gen, int varsta) : Nume(nume), gen(gen), varsta(varsta) {}
