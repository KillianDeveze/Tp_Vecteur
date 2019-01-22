#include "Vecteur.h"

//Methode


//**************************
//Principe : Initialiser un vecteur a partir de la m�thode InitPoint
//
//Entr�e : Vecteur ,X,Y,A,B qui sont les coordon�es des deux points du vecteur
//Sortie :Vecteur initialis�
//Note :
//***************************
void InitVector(Vector *Vecteur,int X,int Y,int A,int B){

    InitPoint(&Vecteur->PointA,X,Y);
    InitPoint(&Vecteur->PointB,A,B);
}

//**************************
//Principe : Effectuer une addition entre deux Vecteur
//
//Entr�e : VecteurA et VecteurB
//Sortie :Addition de VecteurA et VecteurB
//Note :
//***************************
tPoint addition_vectorielle(tPoint Vecteur1,tPoint Vecteur2){

    tPoint VecteurAddition;

    VecteurAddition.nX=Vecteur1.nX+Vecteur2.nX;
    VecteurAddition.nY=Vecteur1.nY+Vecteur2.nY;


return VecteurAddition;}

//**************************
//Principe : A partir des coordonn�e de deux point cette fonction determine un vecteur
//
//Entr�e : nX,nY,nA,nB
//Sortie :Vecteur
//Note :
//***************************
tPoint ResultatVecteur(Vector Vecteur){

    tPoint PointTest;

    PointTest.nX=Vecteur.PointB.nX-Vecteur.PointA.nX;
    PointTest.nY=Vecteur.PointB.nY-Vecteur.PointA.nY;



return PointTest;}
