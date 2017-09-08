#include <math.h>

static inline double __sigmoid(double x){
  return 1.0/(1.0+exp(-x));
}

static inline double __sigmoid_cache(double x){
  static int initialized = 0;
  static double cache[2002];
  double left,right,ret,theta,xi;
  int  i;
  if(!initialized){
    for(i=0;i<2002;i++){
      cache[i]=-1;
    }
  }
  int z=(int)(x*1000);
  int index=z+1000;
  xi=((double)z)/1000;
  if(index>=0&&index<=2000){
    if(cache[index]==-1){
      left=__sigmoid(xi);
      cache[index]=left;
    }else{
      left=cache[index];
    }
    if(cache[index+1]==-1){
      right=__sigmoid(xi+0.001);
      cache[index+1]=right;
    }else{
      right=cache[index+1];
    }
    theta=(x-xi)*1000;
    ret=(1-theta)*left+theta*right;
  }else{
    ret=__sigmoid(x);
  }
  return ret;
}
  
double sigmoid(double x){
  return __sigmoid_cache(x);
}
