#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

//Structures

typedef struct tPoint{
    int nX;
    int nY;
}tPoint;


//Prototypes

extern void InitPoint(tPoint *coord,int X,int Y);
extern void SetX(tPoint *coord,int X);
extern void SetY(tPoint *coord,int Y);
extern int getX(tPoint coord);
extern int getY(tPoint coord);

#endif // POINT_H_INCLUDED
