#ifndef DATE_H
#define DATE_H
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::ostringstream;

class Date{
    public:
        Date(int day=1, int month=1, int year=2000){
            d=day;
            m=month;
            y=year;
        }

        string display() const{
            ostringstream s;
            s<<d<<"/"<<m<<"/"<<y<<"\n";
            return s.str();
        }

        bool operator<(Date rhs){
            if(y<rhs.y) return true;
            if(y==rhs.y && m<rhs.m) return true;
            if(y==rhs.y && m==rhs.m && d<rhs.d) return true;
            return false; //Se non è vera nessuna delle precedenti
        }

    private:
        int d, m, y;
};



#endif