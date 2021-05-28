/* Student Serafim Alex-Mihai
   Grupa 151
   gcc 10.2.0
 */
//
// Created by seraf on 27.05.2021.
//

#ifndef UNTITLED_OSPATAR_H
#define UNTITLED_OSPATAR_H


#include <string>
#include <vector>
#include <iostream>
#include "Comanda.h"

class Ospatar {
    std::string Nume;
    std::vector<std::unique_ptr<Comanda>> comenzi;
    int nrComenzi;
    char gen;
    int varsta;

public:

    Ospatar(std::string Nume, std::vector<std::unique_ptr<Comanda>> &&comenzi, int nrComenzi, char gen, int varsta);

    Ospatar(const std::string &nume, std::vector <std::unique_ptr <Comanda>> &&com, char gen, int varsta);

    Ospatar(const std::string &nume, char gen, int varsta);

    ~Ospatar();
    friend std::ostream& operator<<(std::ostream& os, const Ospatar& ospatar);
    std::string nume();
    friend bool operator>(const Ospatar& o1, const Ospatar& o2);
    friend bool operator==(const Ospatar& o1, const Ospatar& o2);
};


#endif //UNTITLED_OSPATAR_H
