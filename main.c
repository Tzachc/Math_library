#include <stdio.h>
#include "myMath.h"
#define THREE 3
#define TWO 2
#define FOUR 4
#define FIVE 5
int main ()
{
    printf("please enter real number: " );
    double x =0;
    scanf("\n%lf",&x);
    //first equation
   float firstFun = (sub(add(Exp(x),Pow(x,THREE)),TWO));
        printf("The value of f(x)= e^x+x^3-2 at the point %.4f ", x );
        printf("is : %.4f" , firstFun);
    printf("\n ----------------------------------------------------------\n");
    // second equation
       double secFun = (add(mul(THREE,x),mul(TWO,Pow(x,TWO))));
   printf("\n The value of f(x)= 3x+2x^2 at the point %.4f is : %.4f \n", x , secFun );
   printf("\n -------------------------------------------- \n");
    //third equation
    double aa = div(mul(Pow(x,THREE),FOUR),FIVE);
    double final2 = sub(aa,mul(TWO,x));
    printf("\n The value of f(x)= (4x^3)/5 -2x at the point : %.4f is : %.4f\n",x, final2);
    return 0;
    
}
