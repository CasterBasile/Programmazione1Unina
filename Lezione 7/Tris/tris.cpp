#include "tris.h"

Tris::Tris(){
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            tabella[i][j]=' ';
        }
    }
}

bool Tris::verificaMovimento(int r, int c) const{
    return r>=0 && r<3 && c>=0 && c<3 && tabella[r][c]==' ';
}


Tris::Stato Tris::statoGioco() const{   //OCCHIO A QUESTA INTESTAZIONE
    //Verifica se c'è un vincitore sulla diagonale primaria
    if(tabella[0][0]!=' ' && tabella[0][0]==tabella[1][1] && tabella[0][0]==tabella[2][2]){
        return VINTO;
    }   //Verifica se c'è un vincitore sulla diagonale secondaria
    else if(tabella[2][0]!=' ' && tabella[2][0]==tabella[1][1] && tabella[2][0]==tabella[0][2]){
        return VINTO;
    }

    //Verifica se c'è un vincitore su una riga
    for(int a=0; a<3; ++a){
        if(tabella[a][0]!=' ' && tabella[a][0]==tabella[a][1] && tabella[a][0]==tabella[a][2]){
            return VINTO;
        }
    }

    //Verifica se c'è un vincitore su una colonna
    for(int a=0; a<3; ++a){
        if(tabella[0][a]!=' ' && tabella[0][a]==tabella[1][a] && tabella[0][a]==tabella[2][a]){
            return VINTO;
        }
    }

    //Verifica se ci sono celle vuote, cioè se bisogna continuare a giocare oppure no
    for(int r=0; r<3; ++r){
        for(int c=0; c<3; ++c){
            if(tabella[r][c]==' '){
                return CONTINUA;
            }
        }
    }    

    return PAREGGIO;
}

void Tris::movimento(){
    stampa();

    while(true){
        if(coordinate('X')){
            break;
        }
        else if(coordinate('O')){
            break;
        }
    }
}

bool Tris::coordinate(char giocatore){
    int x, y;
    do{
        cout<<"Giocatore: "<<giocatore<<" Inserisci movimento: "<<endl;
        cout<<"Inserire riga: ";
        cin>>x;
        cout<<"Inserire colonna: ";
        cin>>y;
        cout<<endl;
    }while(!verificaMovimento(x, y));
    tabella[x][y]=giocatore;
    stampa();
    Stato var=statoGioco();

    if(var==VINTO){
        cout<<"Giocatore "<<giocatore<<" vince!"<<endl;
        return true;
    }else if(var==PAREGGIO){
        cout<<"Partita terminata in pareggio."<<endl;
        return true;
    }else{
        return false;
    }
}
void Tris::stampa() const{      
    cout<<" 0   1   2"<<endl<<endl; //Questo stampa il numero di colonna
    
    for(int r=0; r<3; ++r){
        cout<<r;                    //Questo stampa il numero di riga

            for(int c=0; c<3; ++c){
                cout<<setw(3)<<tabella[r][c];

                    if(c!=2){
                        cout<<"|";
                    }
            }
            if(r!=2){
                cout<<"\n ___|___|___\n    |   |   \n";
            }
    }
    cout<<endl<<endl;
}