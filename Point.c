#include "Point.h"


//**************************
//Principe : Initialiser un point
//
//Entrée : Var de type tPoint,getX,getY
//Sortie :Point initialisé
//Note :
//***************************
void InitPoint(tPoint *coord,int X,int Y){

    coord->nX=X;
    coord->nY=Y;
}

//**************************
//Principe : Initialise la coordonée X d'un point
//
//Entrée :
//Sortie :
//Note :
//***************************
void SetX(tPoint *coord,int X){

    coord->nX=X;

}

//**************************
//Principe : Initialise la coordonée Y d'un point
//
//Entrée :
//Sortie :
//Note :
//***************************
void SetY(tPoint *coord,int Y){

    coord->nY=Y;

}

//**************************
//Principe : Renvoie la valeur d'une coordonée X d'un point
//
//Entrée :
//Sortie :
//Note :
//***************************
int getX(tPoint coord){

    return coord.nX;

}

//**************************
//Principe : Renvoie la valeur d'une coordonée Y d'un point
//
//Entrée :
//Sortie :
//Note :
//***************************
int getY(tPoint coord){

    return coord.nY;

}
