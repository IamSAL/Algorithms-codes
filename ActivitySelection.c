#include<stdio.h>
int main(){

int n,i,j,temp,temp2;

printf("\nHow Many Activities?:");
scanf("%d",&n);

int start[n],end[n];

for(i=1;i<=n;i++){

    printf("\nStart of Activity[%d]:",i);
    scanf("%d",&start[i]);

    printf("\nEnd of Activity[%d]:",i);
    scanf("%d",&end[i]);
}

for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(end[i]>end[i+1]){
            temp=end[i];
            end[i]=end[i+1];
            end[i+1]=temp;


        temp2=start[i];
        start[i]=start[i+1];
        start[i+1]=temp2;
        }
    }
}

printf("\n Activity 1 is selected by default.");

for(i=2;i<=n;i++){
    if(start[i]>=end[i-1]){
        printf("\n Activity %d is selected.",i);
    }
    else{
        printf("\n Activity %d is not selected.",i);
    }
}

return 0;

}
