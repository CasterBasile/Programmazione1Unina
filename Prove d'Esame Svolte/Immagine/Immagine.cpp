#include "Immagine.h"

Immagine::Immagine(int r, int c){
    nrow=r;
    ncol=c;
    R=new double* [nrow];
    G=new double*[nrow];
    B=new double*[nrow];
    for(int i=0; i<nrow; i++){
        R[i]=new double[ncol]{};
        G[i]=new double[ncol]{};
        B[i]=new double[ncol]{};
    }
}

Immagine::Immagine(const Immagine& I){
    nrow=I.getRow();
    ncol=I.getCol();

    R=new double*[nrow];
    G=new double*[ncol];
    B=new double*[ncol];

    for(int i=0; i<nrow; i++){
        R[i]=new double[ncol]{};
        G[i]=new double[ncol]{};
        B[i]=new double[ncol]{};
    }

    for(int i=0; i<nrow; i++){
        for(int j=0; j<ncol; j++){
            R[i][j]=I.getValueR(i,j);
            G[i][j]=I.getValueG(i,j);
            B[i][j]=I.getValueB(i,j);
        }
    }
}

Immagine& Immagine::operator=(const Immagine& I){
    nrow=I.getRow();
    ncol=I.getCol();
    
    R=new double*[nrow];
    G=new double*[nrow];
    B=new double*[nrow];

    for(int i=0; i<nrow; i++){
        R[i]=new double[ncol]{};
        G[i]=new double[ncol]{};
        B[i]=new double[ncol]{};
    }

    for(int i=0; i<nrow; i++){
        for(int j=0; j<ncol; j++){
            R[i][j]=I.getValueR(i,j);
            G[i][j]=I.getValueG(i,j);
            B[i][j]=I.getValueB(i,j);
        }
    }
    return *this;
}

Immagine::~Immagine(){
    for(int i=0; i<nrow; i++){
        delete [] R[i];
        delete [] G[i];
        delete [] B[i];
    }
    delete [] R;
    delete [] G;
    delete [] B;
}

void Immagine::filter(){
    //Media matrici
    if(nrow%2==0 || ncol%2==0){
        throw invalid_argument("Queste matrici non hanno un centro.");
    }
    int numero = nrow*ncol;
    double totaleR{0}, mediaR{0};
    double totaleG{0}, mediaG{0};
    double totaleB{0}, mediaB{0};

    for(int i{1}; i<nrow-1; i++){
        for(int j{1}; j<ncol-1; j++){
            totaleR+=R[i][j];
            totaleG+=G[i][j];
            totaleB+=B[i][j];
        }
    }
    
    mediaR = totaleR/numero;
    mediaG = totaleG/numero;
    mediaB = totaleB/numero;

    R[nrow/2][ncol/2]=mediaR;
    G[nrow/2][ncol/2]=mediaG;
    B[nrow/2][ncol/2]=mediaB;
}

string Immagine::toString() const{
    ostringstream s;
    s<<"Matrice R: "<<endl;
    for(int i{0}; i<nrow; i++){
        for(int j{0}; j<ncol; j++){
            s<<"["<<R[i][j]<<"]";
        }
        s<<endl;
    }
    s<<endl;

    s<<"Matrice G: "<<endl;
    for(int i{0}; i<nrow; i++){
        for(int j{0}; j<ncol; j++){
            s<<"["<<G[i][j]<<"]";
        }
        s<<endl;
    }
    s<<endl;

    s<<"Matrice B: "<<endl;
    for(int i{0}; i<nrow; i++){
        for(int j{0}; j<ncol; j++){
            s<<"["<<B[i][j]<<"]";
        }
        s<<endl;
    }
    s<<endl;

    return s.str();

}