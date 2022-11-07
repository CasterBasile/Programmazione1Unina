#ifndef DATE_H
#define DATE_H

class Date{
    public:
        Date(int day, int month, int year){
            d=day;
            m=month;
            y=year;
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