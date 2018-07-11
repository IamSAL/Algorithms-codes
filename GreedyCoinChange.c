#include<stdio.h>
int main()
{
    int totalTk,n,i,x,totalCoin=0,temp;
    printf("\nEnter Total Tk:");
    scanf("%d",&totalTk);
    printf("\nAvailable Notes:");
    scanf("%d",&n);

    int notes[n];

    for(i=1;i<=n;i++){
        printf("\nvalue for note %d:",i);
        scanf("%d",&notes[i]);
    }
    printf("\nbefore sort:");
for(i=1;i<=n;i++){
    printf("%d-",notes[i]);
}

    for(i=1;i<=n;i++){
        if(notes[i]>notes[i+1]){

            temp=notes[i+1];
            notes[i+1]=notes[i];
            notes[i]=temp;

        }
    }

        printf("\nafter sort:");
for(i=1;i<=n;i++){
    printf("%d-",notes[i]);
}

    for(i=n;i>=1;i--){

        x=totalTk/notes[i];

        printf("\n\n %d of %d is taken",x,notes[i]);

        totalCoin=totalCoin+x;

        totalTk=totalTk-(x*notes[i]);

    }

    printf("\n\n\n Total coin needed: %d",totalCoin);

    return 0;


}
