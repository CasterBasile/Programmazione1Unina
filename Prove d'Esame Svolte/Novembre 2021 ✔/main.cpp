#include "Progetto.h"
#include "Programmatore.h"
#include "Task.h"
#include "List.h"
#include "Data.h"

#include <vector>
#include <algorithm>
using std::vector;
using std::sort;

int main(){
    vector<Programmatore> programmatori;
    
    Programmatore pr1("Sempronio Rossi", 50.0);
    Programmatore pr2("Giuseppe Verdi", 32.50);
    programmatori.push_back(pr1);
    programmatori.push_back(pr2);
    sort(programmatori.begin(), programmatori.end());   //verranno ordinati per costo poché abbiamo implementato l'operatore < che effettua il confronto sul costo
    
    //Stampiamo il vettore dei programmatori
    cout<<"Programmatori: "<<endl;
    for(auto cursor=programmatori.begin(); cursor!=programmatori.end(); cursor++){
        cout<<cursor->toString();
    }
    cout<<endl;

    List task;

    Task t1("Gioco", {25,7,2022}, 10, pr1);
    Task t2("Compilare", {24,8,2022}, 15, pr1);
    Task t3("Eseguire", {27,7,2022}, 7, pr1);  
    Task t4("Disegnare", {12,8,2022}, 8, pr2);

    task.addTask(t1, task);
    task.addTask(t2, task);
    task.addTask(t3, task);
    task.addTask(t4, task);

    //Stampiamo la lista delle task
    cout<<"Lista Task: "<<endl;
    for(int i=0; i<task.size(); i++){
        cout<<task[i].toString();
    }
    cout<<endl;

    Progetto progetto1("App", "Google", 100, {20,7,2022}, {5,10,2022}, &task);
    cout<<"Informazioni progetto: "<<endl;
    cout<<progetto1.toString()<<endl;

    //Test workloadDeveloper()
    cout<<"Somma ore lavoro programmatore "<<pr1.getNome()<<": "<<task.workloadDeveloper(pr1, task)<<" ore. \n";
    cout<<"Somma ore lavoro programmatore "<<pr2.getNome()<<": "<<task.workloadDeveloper(pr2, task)<<" ore. ";


}

