//Code written on December 5, 2020
// by MD UMAID SHAAN
//This program implements a boolean function in C

#include <stdio.h>

//The main function
int main(void)
{

int Z=1,Y=0,X=0,W=1;//inputs
int A,B,C,D;//outputs
A = ((!W)&(!X)&(!Y)&(!Z))|((!W)&X&(!Y)&(!Z))|((!W)&(!X)&Y&(!Z))|((!W)&X&Y&(!Z))|((!W)&(!X)&(!Y)&Z);//boolean function

B = (W&(~X)&(~Y)&(~Z))|((~W)&X&(~Y)&(~Z))|(W&(~X)&Y&(~Z))|((~W)&X&Y&(~Z));//boolean function

C = (W&X&(~Y)&(~Z))|((~W)&X&Y&(~Z))|(W&(~X)&Y&(~Z))|((~W)&X&Y&(~Z));//boolean function

D = (W&X&Y&(~Z))|((~W)&(~X)&(~Y)&Z);//Boolean function

printf("%x\n",A);//output A

printf("%x\n",B);//output B

printf("%x\n",C);//output C

printf("%x\n",D);//Output D
return 0;
}
