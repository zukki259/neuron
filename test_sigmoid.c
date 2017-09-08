#include <stdio.h>
#include <math.h>

#include "sigmoid.h"

#define ERR 0.000001

double sigmoid_(double x){
  return 1.0/(1.0+exp(-x));
}
int main(){
  int i;
  double x,delta,sigma;
  for(i=-10000;i<=10000;i++){
    x=((double)i)/10000.0;
    sigma=sigmoid_(x);
    delta=sigmoid(x)-sigma;
    if(delta/sigma<ERR&&delta/sigma>-ERR) continue;
    printf("x=%f; error: %f%%\n",x,delta/sigma*100);
  }

  return 0;
}
