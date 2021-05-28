/* Student Serafim Alex-Mihai
   Grupa 151
   gcc 10.2.0
 */
//
// Created by seraf on 27.05.2021.
//

#include "Data.h"
Data::Data(int zi, int luna, int an):zi(zi), luna(luna), an(an) {}
Data::~Data() {}

std::istream& operator>>(std::istream& is, Data& data){
    is >> data.zi >> data.luna >> data.an;
    return is;
}

std::ostream& operator<<(std::ostream& os,const Data& data){
    os << data.zi << "." << data.luna << "." << data.an << "\n";
    return os;
}