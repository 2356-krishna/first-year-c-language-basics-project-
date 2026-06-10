#include<stdio.h>

int main(){
    printf("-------------------- C PROJECT SPLITWISE --------------------\n\n\n");
     int n,i;
     float amount[50],equalshare,total;
     printf("Enter Number of persons which are Splitiing the amount :  ");
scanf("%d",&n);
printf("\n\nEnter amount paid by each person\n\n");
for(i=0;i<n;i++){
    printf("Enter amount paid by person %d: \n\n",i+1);
    scanf("%f",&amount[i]);
    total=total +amount[i];
}
equalshare= total/n;
printf("---- Splitwise summary ----\n\n\n");
printf("Total expense: %f\n\n",total);
printf("Each person should pay : %2f \n\n",equalshare);
for(i=0;i<n;i++){
if(amount[i] > equalshare){
    printf("Person %d will get : %f\n\n\n",i+1,amount[i]-equalshare);
}
else if(amount[i]< equalshare){
    printf("Person %d will have to pay : %f\n\n\n",i+1,equalshare-amount[i]);
}
else if(amount[i] == equalshare){
    printf("Person %d is Settled\n\n\n",i+1);
}
}
     return 0;
}