#include "Point.h"


//**************************
//Principe : Initialiser un point
//
//Entr�e : Var de type tPoint,getX,getY
//Sortie :Point initialis�
//Note :
//***************************
void InitPoint(tPoint *coord,int X,int Y){

    coord->nX=X;
    coord->nY=Y;
}

//**************************
//Principe : Initialise la coordon�e X d'un point
//
//Entr�e :
//Sortie :
//Note :
//***************************
void SetX(tPoint *coord,int X){

    coord->nX=X;

}

//**************************
//Principe : Initialise la coordon�e Y d'un point
//
//Entr�e :
//Sortie :
//Note :
//***************************
void SetY(tPoint *coord,int Y){

    coord->nY=Y;

}

//**************************
//Principe : Renvoie la valeur d'une coordon�e X d'un point
//
//Entr�e :
//Sortie :
//Note :
//***************************
int getX(tPoint coord){

    return coord.nX;

}

//**************************
//Principe : Renvoie la valeur d'une coordon�e Y d'un point
//
//Entr�e :
//Sortie :
//Note :
//***************************
int getY(tPoint coord){

    return coord.nY;

}
