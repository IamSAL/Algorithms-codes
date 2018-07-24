#include<stdio.h>

int main(){
int coinType,i,coinNums,totalCoin=0;
float amount;
printf("\nEnter amount:");
scanf("%f",&amount);
printf("\nHow many types of coin?:");
scanf("%d",&coinType);

int coins[coinType];

for(i=1;i<=coinType;i++){
    printf("Enter value for coin[%d]:",i);
    scanf("%d",&coins[i]);
}

printf("\n coins before sort:");
for(i=1;i<=coinType;i++){
printf("%d-",coins[i]);
}

for (int i = 1; i <= coinType; i++)                     //Loop for ascending ordering
	{
		for (int j = 1; j <=coinType; j++)             //Loop for comparing other values
		{
			if (coins[j] < coins[i])                //Comparing other array elements
			{
				int tmp = coins[i];         //Using temporary variable for storing last value
				coins[i] = coins[j];            //replacing value
				coins[j] = tmp;             //storing last value
			}
		}
	}

/*for(i=1;i<=coinType;i++){
    if(coins[i]>coins[i+1]){
        temp=coins[i];
        coins[i]=coins[i+1];
        coins[i+1]=temp;
    }
}*/
printf("\n coins after sort:");
for(i=1;i<=coinType;i++){
printf(" %d  -  ",coins[i]);
}




for(i=1;i<=amount;i++){
    coinNums=amount/coins[i];
    printf("\n\n %d of %d is taken",coinNums,coins[i]);
    totalCoin=totalCoin+coinNums;
    amount=amount-(coinNums*coins[i]);

}

    printf("\n\n\n Total coin needed: %d",totalCoin);

    return 0;


}
