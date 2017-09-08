#include <stdio.h>
#include "sigmoid.h"

#define INPUT 16
#define MID 4
#define OUTPUT 2
double input[INPUT];
double mid[MID];
double mid_in[MID+MID*INPUT];
double output[OUT];
double output_in[OUT+OUT*MID];

static inline void calc_mid(int index){
  int i;
  double s=mid_in[INPUT+index*(INPUT+1)];
  for(i=0;i<INPUT;i++){
    s+=mid_in[i+index*(INPUT+1)]*input[i];
  }
  mid[index]=sigmoid(s);
}

static inline void calc_output(int index){
  int i;
  double s=output_in[MID+index*(MID+1)];
  for(i=0;i<MID;i++){
    s+=output_in[i+index*(MID+1)]*input[i];
  }
  output[index]=sigmoid(s);
}

