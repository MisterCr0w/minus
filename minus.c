#include <stdio.h>

 int minus(int x, int y);  //prototype

main(){
	
	int num, secondNumber;
	int sub; //declare variables
	
	printf("Enter the first number : ");  //prompt to input the first number
	scanf("%d", &num);  //stores it in variable num
	
	printf("Enter the second number : "); //prompt to input the second number
	scanf("%d", &secondNumber);   //stores it in secondNumber
	
	sub = minus(num, secondNumber); //call
	printf("The difference of the two numbers is : %d \n", sub); //displays the difference after sub function
	
	printf("The value stored in sub is : %d \n", sub);  //displays the value of sub
	
	return 0; 
	
}
int minus(int x, int y){
	
	return x - y;
}

