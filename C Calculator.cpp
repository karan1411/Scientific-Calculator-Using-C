#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int Factorial(long long int fact);
int main()
{
float p,b,uy,c,f,r,mul=1.0,ij,kk_value,sum=0.0,g,n1,p1,sub,div=1.0,l,res,num,g_1,h_1,cot,cosec,sec;
int i,fact,Choice,e,t=1,kk,kk_base,z,num1,x=1,h,Yu=0,number_1,n,chinu=248;
float root_1=1,gh=1;
char k,chara;
long int z1=1;
double result;
do
{
printf("\n******SCIENTIFIC CALCULATOR****\n");
printf("\t\tTYPE ANY ONE TO DO OPERATION \n (1)ADD\n (2)SUBSTRACT\n (3)MULTIPLICATION\n (4)DIVISION\n (5)ANGLE\n (6)SQUARE ROOT\n (7)LOG \n (8)FACTORIAL\n (9)X^Y\n (10)ASCII Value\n (11)Exit\n");
printf("\nENTER OPERATION NUMBER\n");
scanf("%d",&Choice);

switch(Choice)
{
	
   	case 1:
   		printf("\nENTER HOW MANY NUMBER YOU WANT TO ADD\n");
   		scanf("%d",&e);
   		sum=0;
   		printf("\nENTER THE INTEGER OR FLOAT NUMBERS\n");
   		for(i=0;i<e;i++){
   		
		    scanf("%f",&f);
		    sum=sum+f;}
   		printf("THE SUM IS= %f\n",sum);
   		break;
   	 
   	case 2:
   		printf("\nENTER HOW MANY NUMBER YOU WANT TO SUB\n");
   		scanf("%d",&h);
   		printf("\nENTER THE INTEGER OR FLOAT NUMBERS\n");
   		for(i=0;i<h;i++){
   			scanf("%f",&g);
   			if(i==0){
   				sub=g;
			   }
			else{
				sub=sub-g;
			}
		   }
   		printf("%f",sub);
   		break;
   		  
   	case 3:
	   printf("ENTER HOW MANY NUMBER YOU WANT TO MULTIPLY\n");
	   scanf("%d",&e);
	   mul=1.0;
	   printf("ENTER THE INTEGER OR FLOAT NUMBERS\n");
	   for(i=1;i<=e;i++){
	   	scanf("%f",&f);
	   	mul=mul*f;}
	   printf("THE MULTIPLE IS %f\n",mul);
	   break;
	   
	case 4:
   		printf("\nENTER TWO INTEGER OR FLOAT NO YOU WANT TO DIV\n");
   	    scanf("%f%f",&g_1,&h_1);
   		div=g_1/h_1;
   		printf("%f/%f =%f\n",g_1,h_1,div);
   		break; 
   		  
   	case 5:
	   printf("ENTER THE VALUE OF ANGLE in degree\n");
	   scanf("%d",&n);
	   r=(3.14/180)*n;
	   p=sin(r);
	   b=cos(r);
	   c=tan(r);
	   cot=1/c;
	   cosec=1/p;
	   sec=1/b;
	   printf("THE VALUE OF sin(%d%c): %f\n",n,chinu,p);
	   printf("THE VALUE OF cos(%d%c): %f\n",n,chinu,b);
	   printf("THE VALUE OF tan(%d%c): %f\n",n,chinu,c);
	   printf("THE VALUE OF cot(%d%c): %f\n",n,chinu,cot);
	   printf("THE VALUE OF cosec(%d%c): %f\n",n,chinu,cosec);
	   printf("THE VALUE OF sec(%d%c): %f\n",n,chinu,sec);
	   break;
	 
	case 6:
	   	printf("\nENTER THE INTEGER OR FLOAT NO YOU WANT TO FIND SQUARE ROOT\n");
   		scanf("%f",&l);
   		root_1=1;
   		uy=0.5;
   		root_1=pow(l,uy);
		printf("%f",root_1);
		break; 	  
   	
    case 7:
    	printf("Enter '1' for base e\nEnter '2' for more base\n");
    	scanf("%d",&kk);
    	result=0;
    	if(kk==1){
    		printf("ENTER THE VALUE FOR LOG\n");
   			scanf("%f",&num);
   			result=log(num);
   			printf("log base e(%f)=%0.21f\n",num,result);
		}
		if (kk==2){
			printf("Enter the base\n");
			scanf("%d",&kk_base);
			printf("Enter the value\n");
			scanf("%f",&kk_value);
			result=log(kk_value)/log(kk_base);
			printf("log base %d(%f)=%0.21f\n",kk_base,kk_value,result);
		}
   		break;
   		  	
   	case 8:
		printf("ENTER THE NUMBER FOR FACTORIAL:\n");
		scanf("%d",&fact);
		printf("Factorial of %d = %lld", fact, Factorial(fact));
		
		break;
		
	case 9:
		
		printf("ENTER THE X\n");
		scanf("%f",&n1);
		printf("ENTER THE Y\n");
		scanf("%f",&p1);
		gh=pow(n1,p1);				
   	    printf("X^Y=%f",gh);
		break;
	case 10:
	    printf("Enter a charater \n");
	    getchar();
	    scanf("%c",&chara);
	    printf("ASCII value of %c = %d", chara, chara);
	case 11:
		
	    scanf("%c",&k);
	
		break;
	default:
		printf("Wrong choice\n");
		
 	}
	fflush(stdin);
	printf("\nif you want to do more operation then type 'a'\n");
	scanf("%c",&k);
}
while(k == 'a');
return 0;
}
int Factorial(long long int fact) {
    if (fact>=1)
        return fact*Factorial(fact-1);
    else
        return 1;
}
