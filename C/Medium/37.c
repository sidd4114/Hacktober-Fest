// Complete the code to gnerate a multiplication table


#include <stdio.h>
void print_table(int multiplier, int num){
    	  int product;
    	  for(int i=1;i<=num;i++)
    	  {
    	    product=num*i;
    	    printf("%d\t",num);
    	    printf("*\t");
    	    printf("%d\t",i);
    	    printf("%d\n",product);
    	  }
    	}
int main(){
int num , multiplier;
	       	 printf("Enter the Range of Multiplication table: "); 
 scanf("%d",&multiplier);           	
 printf("Enter the num. to generate the table of: ");
 	      	scanf("%d", &num);
 	
 	      	print_table(multiplier, num);
 	
	    return 0;
}