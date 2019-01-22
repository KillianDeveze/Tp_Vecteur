#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED
#include "Point.h"

//Structures

typedef struct Vector{
    tPoint PointA;
    tPoint PointB;
}Vector;

//Prototypes

extern void InitVector(Vector *Vecteur,int X,int Y,int A,int B);

extern tPoint ResultatVecteur(Vector Vecteur);

extern tPoint addition_vectorielle(tPoint Vecteur1,tPoint Vecteur2);

extern void soustraction_vectorielle(Vector *VecteurA,Vector *VecteurB);

extern void multiplication_scalaire(Vector *VecteurA,Vector *VecteurB);

extern void produid_scalaire(Vector *VecteurA,Vector *VecteurB);

extern void produit_vectoriel(Vector *VecteurA);

#endif // VECTEUR_H_INCLUDED
