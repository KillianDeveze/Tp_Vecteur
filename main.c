#include <stdio.h>
#include <stdlib.h>
#include "Vecteur.h"

int main()
{
    Vector VecteurA,VecteurB;

    InitVector(&VecteurA,1,2,2,3);
    InitVector(&VecteurB,3,5,5,7);
    tPoint VecteurC=(ResultatVecteur(VecteurA));
    tPoint VecteurD=(ResultatVecteur(VecteurB));

    printf("Le resultat est : %d %d",addition_vectorielle(VecteurC,VecteurD).nX,addition_vectorielle(VecteurC,VecteurD).nY);



return 0;}
