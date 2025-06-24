#include<stdio.h>
#include<string.h>

struct registration{
    char name[100];
    int phone_num;
    char email[100];
    char address[100];
}login;

void input(struct registration login);
void displaymenu();
void final();

int main(){
    printf("\n\n----HELLO AND WELCOME TO THE IGNITE CAFE----\n\n");
    printf("please fill the required detail to proceed :-\n");
    input(login);
    displaymenu();
    final();
    return 0;
}

void input(struct registration login)
{
    printf("\nenter username: ");
    fgets(login.name,100,stdin);
    printf("enter user phone number: ");
    scanf("%d",&login.phone_num);
    printf("enter user email: ");
    scanf("%s",&login.email);
    printf("enter your address: ");
    scanf("%s",&login.address);
}


void displaymenu(){
       int arr[5]={99,149,199,249,299};
       printf("thankyou for registration\n\n HERE YOU GO\n\nmenu include:-\n");  
       int n,i;
       printf("1.pizza\n2.pasta\n3.noodles\n4.beverages\n5.sweet dish\n\n");
       
       do
       {
       printf("\nselect s.i num for further detail(please enter 0 to stop detailing process) : ");
       scanf("%d",&n);

       switch(n){
        case 1:printf("\n 1. PIZZA :-\n");
               printf("1.1 margerrita small pizza Rs%d\n",arr[0]);
               printf("1.2 veg loaded double cheese medium pizza Rs%d\n",arr[1]);
               printf("1.3 chicken dominator larger pizza Rs%d\n",arr[4]);
               break;
        case 2:printf("\n2. PASTA :-\n");
               printf("2.1 red sauce pasta Rs%d\n",arr[3]);
               printf("2.2 white sauce pasta Rs%d\n",arr[3]);
               break;
        case 3:printf("\n3. NOODLES :-\n");
               printf("3.1 veg hakka noodles Rs%d\n",arr[2]);
               printf("3.2 schewan egg noodles Rs%d\n",arr[3]);
               printf("3.3 peprica chicken noodles Rs%d\n",arr[4]);
               break;
        case 4:printf("\n4. BEVERAGES :-\n");
               printf("4.1 hot chocolate Rs%d\n",arr[0]);
               printf("4.2 cold coffee Rs%d\n",arr[1]);
               printf("4.3 lemon cold tea Rs%d\n",arr[1]);
               break;
        case 5:printf("\n5. SWEET DISHES :-\n");
               printf("5.1 gulab jamun[2p] Rs%d\n",arr[0]);
               printf("5.2 rasugulla[2p] Rs%d\n",arr[0]);
               break;
        default : printf("item not available\n");  
               break;
       }
    }while(n!=0);
}

void final()
{
       int arr[5]={99,149,199,249,299};          
       double j,sum=0;

       printf("\n\nselect the dish you want to order(please enter 0 to stop ordering): \n");
       
       do{
       scanf("%lf",&j);

       if(j==1.1||j==4.1||j==5.1||j==5.2){
              sum+=arr[0];
       }
       else if(j==1.2||j==4.2||j==4.3){
              sum+=arr[1];
       }
       else if(j==3.1){
              sum+=arr[2];
       }
       else if(j==2.1||j==2.2||j==3.2){
              sum+=arr[3];
       }
       else if(j==1.3||j==3.3){
              sum+=arr[4];
       }
       }while(j !=0 ) ;
       
       puts("Thank you for ordering");

       printf("\n\nTOTAL AMOUNT TO BE PAY : %.2f ",sum);

       puts("\n\n -----THANK YOU AND VISIT AGAIN-----\n\n");
 }


