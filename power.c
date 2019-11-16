#define e 2.718
#include "myMath.h"
double Pow(double x,int y)
{
    if(y==0)
        return 1;
     return Pow(x,y-1)*x;   
}
double Exp(int x)
{
    if(x<0){
       float z = (-1)*x;
       float xx = div(1,Exp(z));
       return xx;
    }
    else 
        return Pow(e,x); 
}
