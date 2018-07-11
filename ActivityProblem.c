#include<stdio.h>
int main(){

int n,i,s,e,lastFinishTime,temp,temp2;

printf("\nEnter activity numbers: ");
scanf("%d",&n);

int start[n],end[n],finisht[100],begin[100],select[100];

for(i=1;i<=n;i++){
  printf("Activity %d start: ",i);
  scanf("%d",&s);
  start[i]=s;

printf("Activity %d end: ",i);
  scanf("%d",&e);
  end[i]=e;

}
printf("\n");

for(i=1;i<=100;i++){
    select[i]==0;

}

lastFinishTime=end[1];
printf("\n Activity 1 is selected");

for(i=2;i<=n;i++){
if(start[i]>=lastFinishTime){
    printf("\n Activity %d is selected",i);
    lastFinishTime=end[i];
}
else{
     printf("\n Activity %d is  not selected",i);
}

}
return 0;
}
