#include<stdio.h>
int main(){
    double balance =1000,amount;
    int choice;
    printf("\n\n---WELCOME TO OUR ATM---\n");
    do{
        printf("\n\nchoose an option:-\n\n1.check balance \n2. deposit \n3.withdraw \n4. exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("\nyour bank balance is %.2lf",balance);
                    break;
            case 2: printf("\nenter deposit amount : ");
                    scanf("%lf",&amount);
                    balance+=amount;
                    printf("\ndeposit successfully !");
                    break;
            case 3: printf("\nenter withdraw amount : ");
                    scanf("%lf",&amount);
                    if(amount>balance){
                        printf("\ninsufficient amount");
                    }else{
                        balance-=amount;
                        printf("\nwithdraw successfully!");
                    } 
                    break;
            case 4: printf("\nThank you for using our ATM");
                    break;
            default : printf("\ninvalid option try again !");
                          
    }
}while(choice!=4);
return 0;
}