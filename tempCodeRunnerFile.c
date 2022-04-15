#include <stdio.h>  // for print
#include <stdlib.h> // for input
#include <string.h>
void pointers(x)
{
    // to get the memory address  of a variable use & in front of the variable and ita usually a %p to mean pointer
    int point = x;
    printf("%d %p \n", point, &point);
};

void sayHello(char name[20], char city[20])
{
    printf("Just saying hi %s. How is %s\n", name, city);
};

void startVairables()
{
    //  variables - char %s/%c, int %d, float %f, double(more common for decimals), void
    /* this is a multiline comment */
    char charName[] = "Mary"; // if you use char without the [] then you're only allowed to have one letter otherwise you get an error
    int charAge = 18;
    char dayWell[15]; // creating a variable with no item that can be used later. only write a number when taking in a string to show howmany characters will be able to be input
    //  if you say const int charAge you can never change the variable elsewhere
    printf("GoodMorning %s. You slept for %f hours\n", charName, 9.343 + 1.2);
    printf("Hows your day %d going?\n", charAge);
    // scanf("%s", dayWell); // only gets one word if there is a space it terminates
    fgets(dayWell, 15, stdin);               // allows spaces in input teh 15 is th enumber of characters as seen on the var
    printf("Your day is going %s", dayWell); // for all other types except strings the second part of the printf statement is &dayWell
    charAge = 90;                            // no need to rewrite type
};

float calculator()
{
    float firstNumber=0;
    float secondNumber=0;
    char ope[1];
    float total =0.0;

    printf("Please put in first number: ");
    scanf("%f", &firstNumber);
    printf("Please put in operand(*,+,-,/): ");
    scanf(" %s", ope);
    // in strcmp 0 means equal to any other number means not equal to and it only works with strings
    
    // strcomp is for strings 
    if ((strcmp(ope, "+") != 0) & (strcmp(ope, "-") != 0) & (strcmp(ope, "/") != 0 )& (strcmp(ope, "*") != 0 ))
    {
        printf("Invalid operand please input +,-,/,*");
        scanf("%s", ope);
    }
    printf("Please put in second number: ");
    scanf("%f", &secondNumber);
  
    if (strcmp(ope, "+") == 0)
    {
        total = firstNumber + secondNumber;
    }
    else if (strcmp(ope, "-") == 0)
    {
        total = firstNumber - secondNumber;
    }
    else if (strcmp(ope, "*") == 0)
    {
        total = firstNumber * secondNumber;
    }
    else if (strcmp(ope, "/") == 0)
    {
        total = firstNumber / secondNumber;
    };

    printf("%f %s %f = %f\n ",firstNumber, ope, secondNumber, total);
    return total;

    // teh if statements could also be writen as switch statements in this scenario

    };

float calculator2()
{
    float firstNumber=0;
    float secondNumber=0;
    char ope;
    float total =0.0;
    printf("Please put in first number: ");
    scanf("%f", &firstNumber);
    printf("Please put in operand(*,+,-,/): ");
    scanf(" %c", &ope);
    printf("Please put in second number: ");
    scanf("%f", &secondNumber);

    switch(ope){
        case '+':
            total = firstNumber + secondNumber;
            break;
        case '-':
            total = firstNumber - secondNumber;
            break;
        case '*':
            total = firstNumber *secondNumber;
            break;
        case '/':
            total = firstNumber / secondNumber;
            break;
        default:
            printf("Invalid operand please input +,-,/,*\n");
        
            calculator2();
    
    };
    printf("%f %c %f = %f\n ",firstNumber, ope, secondNumber, total);
    return total;
};

int main()
{
    // startVairables();
    // sayHello("Lindah", "Kiambu");
    // pointers(10);
    calculator2(); 
    // calculator();
    return 0;
}
