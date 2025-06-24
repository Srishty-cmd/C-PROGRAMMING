#include<stdio.h>
//nested switch
int main(){
int a,b,c;
printf("\nHELLO AND WELCOME TO MY WEBSITE\n\n");
printf("choose school\n 1 gvt\n 2 ss academy\n");
scanf("%d",&a);
switch(a){
    case 1: printf("gvt\n");
    printf("choose shift\n 1 mrng\n 2 evng\n");
    scanf("%d",&b);
    switch(b){
        case 1: printf("morning schedule starts from 7:00 to 1:00\n ");
                printf("recess timing 9:00 to 9:15\n");
                break;
        case 2: printf("evening schedule starts from 4:00 to 9:00\n");    
                printf("recess timing 7:00 to 7:15\n");
                break;    
    }
    break;
    case 2: printf("ss academy\n");
    printf("choose shift\n 1 mrng\n 2 aftnoon\n");
    scanf("%d",&c);
    switch(c){
        case 1:printf("morning shift starts from 6:30 to 12:00\n");
               printf("recess timimng 8:45 to 9:00\n");
               break;
        case 2:printf("afternoon shift starts from 12:30 to 4:00\n");
               printf("recess timing 2:00 to 2:15\n");
               break;       
    }

}
printf("\n\nTHANK YOU FOR YOUR VISIT");
return 0;
}
    