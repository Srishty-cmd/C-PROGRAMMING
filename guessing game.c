#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,attempts=0;
    srand(time(0));//generate random number
    number=rand()%100+1;//to provide range we use % operator
    printf("\n\n---welcome to number guessing game---");
    printf("I have choose a number between (1-100)\n\n ");
    printf("try to guess it\n");
    do{
        printf("\n\nenter guess number : ");
        scanf("%d",&guess);
        attempts++;
        if(guess>number){
            printf("\ntoo high !try again");
        }
        else if(guess<number){
            printf("\ntoo low !try again\n");
        }
        else{
            printf("\ncongratulation ! you win");
            printf("\nyou guess the num in %d attempt",attempts);
        }
    }while(guess!=number);
    return 0;
}