#include<stdio.h>
int main(){

    int a,b,c;
    char ch,sh,uh,rh;

    printf("select operators\n 1. Arithmetic operators\n 2. logical operators\n 3.relational operators\n 4.assignment operators\n");
    scanf("%d",&a);

    if(a==1){

        printf("which arithmetic operator you want to use a.+,b.-,c.*,d./,e.%,f.++,g.--\n");
        scanf(" %c",&ch);

        printf("enter two number\n");
        scanf("%d%d",&b,&c);

     if(ch=='a')
        printf("sum is %d\n",b+c);
     
     else if (ch=='b')
        printf("difference is %d\n",b-c);
     
     else if (ch=='c')
        printf("multiply is %d\n",b*c);
     
     else if (ch=='d')
        printf("division is %d\n",b/c);
     
     else if(ch=='e')
        printf("modulus is %d\n",b%c);
     
     else if (ch=='f')
        printf("increment is %d\n",++b);

     else
     printf("decrement is %d\n",--c);

    }

    if(a==2){

        printf("which logical operator you want to use a. &&, b. ||,c. !\n");
        scanf(" %c",&sh);

        printf("enter two number\n");
        scanf(" %d",&b);
        scanf(" %d",&c);

       if(sh=='a')
        printf("logical && is %d\n",(b<9&&c>6));
       
       else if(sh=='b')
        printf("logical || is %d\n",(b<1||c>6));
       
       else
        printf("logical ! is %d\n",!(b=9));
           
    }
    if(a==3){

      printf("which relational operators you want to use a.==,b.>,c.<,d.>=,e.<= f.!=\n");
      scanf(" %c",&uh);

      printf("enter two number\n");
      scanf("%d%d",&b,&c);

      if(uh=='a')
         printf("relational == is %d\n",b==c);
      
      else if(uh=='b')
         printf("relational > is %d\n",b>c);

      else if(uh=='c')
         printf("relational < is %d\n",b<c);

      else if(uh=='d')
      printf ("relational >=is %d\n",b>=c);

      else if(uh=='e')
      printf("relational <= is %d\n",b<=c);

      else
      printf("relational != is %d\n",b!=c);

    }

    if(a==4){

      printf("which assignment operators you want to use a.=,b.+=,c.-=,d.*=,e./=,f.%=\n");
      scanf(" %c",&rh);

      printf("enter two value\n");
      scanf(" %d",&b);
      scanf(" %d",&c);
     
      if(rh=='a')
         printf("assignment = is %d\n",b=c);

      else if(rh=='b')
      printf("assignment += is %d\n",b+=c);

      else if(rh=='c')
      printf("assignment -= is %d\n",b-=c);

      else if(rh=='d')
      printf("assignment *= is %d\n",b*=c);

      else if(rh=='e')
      printf("assignment /= is %d\n",b/=c);

      else
      printf("assignment %= is %d\n",b%=c);

    }
    
    return 0;
}