/* Student Serafim Alex-Mihai
   Grupa 151
   gcc 10.2.0
 */
//
// Created by seraf on 27.05.2021.
//

#ifndef UNTITLED_COMANDA_H
#define UNTITLED_COMANDA_H


#include "Produs.h"
#include "Data.h"
#include "Ospatar.h"
#include <iostream>

class Comanda {
    static int comanda_id;
    int Num;
    Produs Prod;
    int nrPortii;
    Data data;
    bool cancelled = false;
public:
    Comanda(Produs Prod, int nrPortii, Data data);
    Comanda(std::string nume, int nrPortii, Data data);
    Comanda(std::string nume, int nrPortii);

    Comanda();

    ~Comanda();
    friend Comanda operator+(const Comanda& com, int cantitate);
    Comanda& operator++();
    Comanda operator++(int);
    void del();
    friend std::istream &operator>>(std::istream &is, Comanda &comanda);
    friend std::ostream &operator<<(std::ostream &is, const Comanda &comanda);
};


#endif //UNTITLED_COMANDA_H
