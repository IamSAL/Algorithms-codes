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

for(i=1;i<=n;i++){
    if(end[i]>end[i+1]){
        temp=end[i+1];
        end[i+1]=end[i];
        end[i]=temp;

        temp2=start[i+1];
        start[i+1]=start[i];
        start[i]=temp2;


    }
}


lastFinishTime=end[1];


for(i=1;i<=n;i++){
if(start[i]>=lastFinishTime){
    printf("\n Activity %d - %d is selected",start[i],end[i]);
    lastFinishTime=end[i];
}
else{
     printf("\n Activity %d is  not selected",i);
}

}
return 0;
}
