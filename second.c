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

struct Student{
    char name[60];
    char major[50];
    int gradYear;
    float gpa;
};
void addStudent(char name[60],char major[50], float gpa, int gradYear){
    struct Student stud1;
    stud1.gpa = gpa;
    stud1.gradYear= gradYear;
    strcpy( stud1.name ,name); //with stings you cant directly wite std1.name= Lindah you have so use strcpy and it starts with a space
    strcpy( stud1.major, major);
    printf("%s,%s, %f, %d \n", stud1.name, stud1.major, stud1.gpa, stud1.gradYear);
    
};

int counterWhile(int start){
    int counter= 0;
    while (start< 6){
        start++;
        counter++;
    };
    printf("%d\n", counter);
    // on to for loop
    int i ;
    for (i= counter+3; i<15; i++){
        printf("%d\n", i);
    };
    printf("\n");
    int arr[]= {2,5,8,3,110,2};
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d\n",arr[i]);
    };
    return counter;
};
int twoDarr(){
    int nums[3][2]= {
        {1,2}, {3,4}, {5,6}
    };
    printf("%d \n", nums[2][0]);
    int i, j;
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf("%d\n",nums[i][j]);
        };
    };
return nums[0][1];
};

int pointerh(){
    int age=90; 
    int * pAge = &age;
    double gpa = 3.5;
    double * pGpa =&gpa;
    char grade[2] ="AB";
    char * pGrade; // the space doesn't have to be there it could just be *pGrade but best practice is to upt the space and since pointers hold onl one byte of charater they cant hold a whole string so we have to go through letter by letter; 
    
    for (int i=0; i<sizeof(grade)/sizeof(grade[0]);i++){
        printf("%p, %c\n", &grade[i], grade[i]);
    }; 

    // printf("%p,%d, %p, %s \n",pAge, age, pGrade, grade );
    // to derefernce a pointer you change the %p to whatever variable type and add * back to the valrble name ie *pAge
    printf("%d, %c",*pAge, *pGrade);
    return 0;
};

int main()
{
    // startVairables();
    // sayHello("Lindah", "Kiambu");
    // pointers(10);
    // calculator2(); 
    // calculator();
    // addStudent("Lindah", "Econ", 80.3,2093);
    // counterWhile(3);
    // twoDarr();
    pointerh();
    return 0;
}
