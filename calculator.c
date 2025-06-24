#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("enter value : ");
    scanf("%d%c%d",&a,&ch,&b);
    
    if(ch=='+'){
     printf("sum is : %d",a+b);
    }
    else if(ch=='-'){
    printf("subtraction is : %d",a-b);
    }
    else if(ch=='*'){
        printf("multipication is : %d",a*b);
    }
    else if (ch=='/'){
        printf("division is : %d",a/b);
    }
    else{
        printf("modulo is : %d",a%b);
    }
    return 0;
}