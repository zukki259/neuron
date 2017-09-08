#include <stdio.h>

int rows;
int columns;
int outputs;
int n_data;

double input[16];
double output_teacher[2];

void read_header(const FILE *f){
  fscanf(f,"%d %d %d %d",&rows,&columns,&outputs,&n_data);
}

void read_input(const FILE *f){
  int i;
  for(i=0;i<16;i++){
    fscanf(f," %lf",&(input[i]));
  }
}

void read_teacher(const FILE *f){
  int i;
  for(i=0;i<2;i++){
    fscanf(f," %lf",&(output_teacher[i]));
  }
}
void readfile(const char *name){
  
}

int main(){
  FILE *f=fopen("./testdata/teacher.txt","r");
  read_header(f);
  read_input(f);
  read_teacher(f);
  int i;
  printf("rows: %d\ncolumns: %d\noutputs: %d\ndata: %d\ndata:\n",rows,columns,outputs,n_data);
  for(i=0;i<16;i++)
    printf("%f\n",input[i]);
  printf("outputs:\n");
  for(i=0;i<2;i++)
    printf("%f\n",output_teacher[i]);
  fclose(f);
  return 0;
}
