#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    //print choices
    printf("###############\n");
    printf("#     gay     #\n");
    printf("# calculator  #\n");
    printf("#    in C     #\n");
    printf("###############\n");
    printf("# 1. add      #\n");
    printf("# 2. subtract #\n");
    printf("# 3. multiply #\n");
    printf("# 4. divide   #\n");
    printf("# 5. info     #\n");
    printf("###############\n\n");
    printf("notes: floating point numbers are weird\n\n");
    //user choice
    printf("choice: ");
    scanf("%d",&choice);
    
    if (choice == 1) {
	//get inputs
	printf("enter first number: ");
	scanf("%f",&num1);
	printf("enter second number: ");
	scanf("%f",&num2);
	//do the math
	result = num1 + num2;
	//show result
	printf("the result of your numbers is %f \n",result);
    }

    else if (choice == 2) {
	//get inputs
	printf("enter first number: ");
	scanf("%f",&num1);
	printf("enter second number: ");
	scanf("%f",&num2);
	//do the math
	result = num1 - num2;
	//show result
	printf("the result of your numbers is %f \n",result);
    }

    else if (choice == 3) {
	//get inputs
	printf("enter first number: ");
	scanf("%f",&num1);
	printf("enter second number: ");
	scanf("%f",&num2);
	//do the math
	result = num1 * num2;
	//show result
	printf("the result of your numbers is %f \n",result);
    }

    else if (choice == 4) {
	//get inputs
	printf("enter first number: ");
	scanf("%f",&num1);
	printf("enter second number: ");
	scanf("%f",&num2);
	//do the math
	result = num1 / num2;
	//show result
	printf("the result of your numbers is %f \n",result);
    }

    else if (choice == 5) {
	printf("gay calculator\n");
	printf("version 1.1\n");
	printf("made by broken\n");
	printf("https://brokenlabs.cf\n");
    }

    return 0;
}
