#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,j,k;
  const int N=10000;
  int box[N][64];
  int sum[N];
  double sum2=0.;

  for(i=0;i<N;i++){
    for(j=0;j<64;j++){
      box[i][j]=0;
    }
    sum[i]=0;
  }


  srand((unsigned)time(NULL));
  for(i=0;i<N;i++){
    for(j=0;j<1000;j++){
      box[i][rand()%64]++;
    }
    for(k=0;k<64;k++){
      sum[i]+=box[i][k];
    }
    sum2+=sum[i];
  }
  printf("%.5f\n",sum2/N/64);

  return 0;
}
