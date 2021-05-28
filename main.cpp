#include <iostream>
#include <vector>
#include <memory>
#include "Comanda.h"

int main() {
    Produs meniu[3] = { {"frigarui", 30}, {"cola",7.5}, {"cafea",5} };

    Comanda c1{"frigarui", 2, Data(31, 5, 2016)}, c2("cola",3), c3("cafea",1), c4 = c2, c5;

    c3 = c3 + 4; // se comanda încă 4 cafele 

    c2++; // se mai comandă o cola 

    c1.del(); //se anulează comanda c1 

    std::cin >> c5; //se citește comanda c5

    std::cout << c4 << "\n" << c5; //se afișează comanzile c4 și c5

    std::vector<std::unique_ptr<Comanda>> com1(4), com2(4);

    com1.emplace_back(std::make_unique<Comanda>(c1));
    com1.emplace_back(std::make_unique<Comanda>(c2));
    com1.emplace_back(std::make_unique<Comanda>(c3));
    com2.emplace_back(std::make_unique<Comanda>(c4));
    com2.emplace_back(std::make_unique<Comanda>(c5));

    Ospatar o1("Ionescu", std::move(com1), 'M', 25), o2("Popescu", std::move(com2), 'F', 30);

    std::cout << o1 << o2;

    if (o2 > o1) std::cout << "Ospatarul " << o2.nume() << "a servit mai multe comenzi decat ospatarul " << o1.nume() << "\n";

    else if (o2 == o1) std::cout << "Numar egal de comenzi intre ospatarii " << o2.nume() << "si " << o1.nume() << "\n";

    else std::cout << "Ospatarul " << o2.nume() << "a servit mai puține comenzi decat ospatarul " << o1.nume() << "\n";

    return 0;
}
