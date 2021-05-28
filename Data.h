/* Student Serafim Alex-Mihai
   Grupa 151
   gcc 10.2.0
 */
//
// Created by seraf on 27.05.2021.
//

#ifndef UNTITLED_DATA_H
#define UNTITLED_DATA_H


#include <iostream>

class Data {
    int zi, luna, an;
public:
    Data(int zi = 27, int luna = 5, int an = 2021);
    ~Data();
    friend std::ostream& operator<<(std::ostream& os, const Data& data);
    friend std::istream& operator>>(std::istream& is, Data& data);
};


#endif //UNTITLED_DATA_H
