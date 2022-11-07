#include "Cdl.h"
#include "Insegnamento.h"
#include "Studente.h"

int main(){

    Cdl IngInf("Ingegneria Informatica");
    IngInf.addStudente(Studente("Castrese","Basile","46005230"));
    IngInf.addStudente(Studente("Pinco", "Pallino", "47008963"));
    IngInf.addStudente(Studente("Diego", "Maradona", "42001010"));

    IngInf.addInsegnamento(Insegnamento("Programmazione", 9, "Ceccarelli"));
    IngInf.addInsegnamento(Insegnamento("Calcolatori", 9, "Natella"));
    IngInf.addInsegnamento(Insegnamento("AI", 6, "Amato"));
    //Esame-Studente
    IngInf.addEsameStudente(1,0);
    IngInf.addEsameStudente(1,1);
    IngInf.addEsameStudente(1,2);
    IngInf.addEsameStudente(2,1);
    IngInf.addEsameStudente(3,0);
    IngInf.addEsameStudente(3,1);

    IngInf.calcIstogramma();
    cout<<endl;
    IngInf.ordinaEStampa();

}