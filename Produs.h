/* Student Serafim Alex-Mihai
   Grupa 151
   gcc 10.2.0
 */
//
// Created by seraf on 27.05.2021.
//

#ifndef UNTITLED_PRODUS_H
#define UNTITLED_PRODUS_H


#include <string>
#include <iostream>

class Produs {
    std::string denProd;
    float pretProd;

public:

    Produs(std::string denProd, float pretProd);

    Produs(const std::string &denProd);

    Produs();

    ~Produs();
    friend std::ostream& operator<<(std::ostream& os, const Produs& produs);
    friend std::istream& operator>>(std::istream& is, Produs& produs);

};


#endif //UNTITLED_PRODUS_H
