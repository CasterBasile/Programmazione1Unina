#include "triangoli.h"

Triangoli::Triangoli(char valore){
    v=valore;
    menu();
    disegnoTriangoli();
}

void Triangoli::menu(){
    char menu;
    cout<<"Seleziona il triangolo da disegnare: "<<endl;
    cout<<"a-b-c-d"<<endl;
    cin>>menu;
    s=menu;
}

void Triangoli::disegnoTriangoli(){
    if(s=='a'){
        for(int i=0; i<10; i++){
            for(int j=0; j<i; j++){
                cout<<v;
            }
            cout<<endl;
        }
    }

    if(s=='b'){
        for(int i=10; i>0; i--){
            for(int j=0; j<i; j++){
                cout<<v;
            }
            cout<<endl;
        }
    }

   if(s=='c'){
       for(int i=0; i<10; i++){
           for(int j=0; j<i; j++){
               cout<<' ';
           }
           for(int j=10; j>i; j--){
               cout<<v;
           }
           cout<<endl;
        }
    }

    if(s=='d'){
    for(int i=0; i<10; i++){         //Scorre le righe
        for(int j=0; j<10-i; j++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<v;
        }
        cout<<endl;
    }
    
    }
}

