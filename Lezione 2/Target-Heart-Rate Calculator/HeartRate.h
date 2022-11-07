#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class HeartRate{

    public:
        
        //Costruttore
        HeartRate(string name, string surname, int day, int month, int year);
        
        //Funzioni set
        void setNome(string name);
        void setCognome(string surname);
        void setGiorno(int day);
        void setMese(int month);
        void setAnno(int year);
        void setEta();
        void setMaxBPM();        //Funzione che calcola la frequenza cardiaca massima secondo la formula 220-età

        //Funzioni get
        string getNome() const;
        string getCognome() const;
        int getGiorno() const;
        int getMese() const;
        int getAnno() const;
        int getEta() const;
        
        
        void getTargetBPM();     //Funzione che calcola la frequenza cardiaca target, praticamente calcola il 50% e l'85% della frequenza cardiaca massima

    private:

        string nome, cognome;
        int giorno, mese, anno, BPM, eta;

};