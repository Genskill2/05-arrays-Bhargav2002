/* Enter your solutions in this file */
#include <stdio.h>
int max (int z[],int n){
  int max_so_far =z[0];
  for(int i=0;i<n;i++){
    if(z[i]>max_so_far)
      max_so_far =z[i];
  }
  return(max_so_far);
}

int min (int z[],int n){
  int min_so_far =z[0];
  for(int i=0;i<n;i++){
    if(z[i]<min_so_far)
      min_so_far =z[i];
  }
  return(min_so_far);
}

float average (int z[],int n){
  float sum=0;
  for(int i=0;i<n;i++){
    sum+=z[i];
  }
  int x= sum;
  float avg = (float) x/n ;
  return(avg);
}
int factors (int n, int z[]){
  int x=2;
  while(n!=1){
    if (n%x==0){
      while(n%x==0){
        z[]=x;
        n=(n/x);
      }
    }
    x++;
    }
  return (z[]);
}

int mode (int z[] ,int n){
  int x[];
  int max_so_far = z[0];
  for(int i=0;i<n;i++){
    if(z[i]>max_so_far)
      max_so_far=z[i];
  }
 int y= max_so_far;
   for (int j=0 ; j<= y;j++){
     for (int k=0;k<n;k++){
       if(z[k]==j){
         x[j]++;
         }
     }
   }
  return(x[]);
}
         

