#include "EBA.h"

void EBA::readFile(){
    
    ifstream file;
    file.open("EuropeanBiscuits.txt");
    
    if(!file){
        cout<<"Impossibile aprire il file. \n";
    }

    int id, cont=0;
    string n, prod;
    float val1=0, val2=0, val3=0, val4=0, val5=0, val6=0, val7=0, val8=0, val9=0, val10=0;
    vector<float>c;

    while(!file.eof()){
        if(cont==0){
            file>>totale;
        }
        else{
            file>>id>>n>>prod>>val1>>val2>>val3>>val4>>val5>>val6>>val7>>val8>>val9>>val10;
            c.push_back(val1);
            c.push_back(val2);
            c.push_back(val3);
            c.push_back(val4);
            c.push_back(val5);
            c.push_back(val6);
            c.push_back(val7);
            c.push_back(val8);
            c.push_back(val9);
            c.push_back(val10);
            biscotti.push_back(Biscotti(id, n, prod,c));
            c.clear();       
        }
        cont++;
    }
}

void EBA::toString(){
    for(int i=0; i<totale; i++) biscotti[i].toString();
}

float EBA::distanzaEuclidea(int a, int b){

    float distanzaEuclidea=0;

    vector<float>car1=biscotti[a].getCaratteristiche();
    vector<float>car2=biscotti[b].getCaratteristiche();

    for(int i=0; i<10; i++) distanzaEuclidea+=pow(car1[i]-car2[i],2);
    distEuc=distanzaEuclidea;

    if(checkSimil())
        return distanzaEuclidea;
    else
        return -1;  //Valore che ho scelto per indicare che non si tratta di due biscotti Epsilon-simili (anche perché la distanza euclidea è >=0 sempre, per definizione. Quindi non può mai fare -1).
}

bool EBA::checkSimil(){
    return distEuc<epsilon;
}

void EBA::grafoSimil(){

    for(int i=0; i<15; ++i){
        int num=0;
        CircleList<int> tmp={};
        tmp.add(i);
        for(int j=0; j<15; ++j){
            if(i==j || distanzaEuclidea(i,j)==-1)
                continue; //Perché per i==j faccio il confronto fra un biscotto e se stesso, ovviamente la funzione mi darà true, quindi saltiamo questa verifica. Se invece è -1 significa che non sono Epsilon-simili e quindi non va aggiunto al nodo
            else{
                tmp.add(j);
                num++;
            }
        }
        grafo.push_back(tmp);
        numEpsilonSimili[i]=num;
}
}


void EBA::stampa(){
    cout<<"GRAFO SIMILARITA': "<<endl<<endl;
    for(int i=0; i<15; ++i) cout<<grafo[i].toString()<<endl;
    cout<<endl;
    cout<<"EPSILON-SIMILI PER OGNI BISCOTTO:"<<endl<<endl;
    for(int i=0; i<15; ++i) cout<<"Epsilon-simili per il biscotto "<<i<<" :"<<numEpsilonSimili[i]<<endl;    
}



