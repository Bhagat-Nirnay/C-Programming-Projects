#include <stdio.h>

// Funtion prototype
int get_user_choice();
int Addition();
int Subtraction();
float Division();
float Multiplication();
int Age_Calculator();
float BMI();

// Function defition
int get_user_choice()
{
    int choice;

    // Display option to the user:
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("5. Age Calculator\n");
    printf("6. BMI\n");
    printf("Enter your choice: ");

    // Take input from the user
    scanf("%d", &choice);

    return choice;
}

// Defining choices:
int Addition()
{
    int a, b;
    printf("You choosed Addition\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("%d + %d = %d", a, b, a + b);
    return 0;
}

int Subtraction()
{
    int a, b;
    printf("You choosed Subtraction\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("%d - %d = %d", a, b, a - b);
    return 0;
}

float Division()
{
    float a, b;
    printf("You choosed Division\n");

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("%f / %f = %.2f", a, b, a / b);
    return 0;
}

float Multiplication()
{
    float a, b;
    printf("You choosed Division\n");

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("%f * %f = %.2f", a, b, a * b);
    return 0;
}

int Age_Calculator()
{
    int a, b;
    printf("You choosed Age Calculator\n");

    printf("Enter Birth of Year: ");
    scanf("%d", &a);

    printf("Enter Current Year: ");
    scanf("%d", &b);

    printf("The current age is: %d", b - a);
    return 0;
}

float BMI()
{
    float weight, height_cm, height_m;
    printf("You choosed BMI Calculator\n");

    printf("Enter your weight in Kg(s): ");
    scanf("%f", &weight);

    printf("Enter your height in centimeter: ");
    scanf("%f", &height_cm);

    // Converting height to meters
    height_m = height_cm / 100;

    float BMI = weight / (height_m * height_m);

    // printf("Your BMI is: %f", BMI);

    if (BMI < 18.5)
    {
        printf("Your BMI is %.2f and you are underweight\n", BMI);
    }
    else if (BMI >= 18.5 || BMI <= 24.9)
    {
        printf("Your BMI is %.2f weight is Normal\n", BMI);
    }
    else if (BMI >= 25 || BMI <= 29.9)
    {
        printf("Your BMI is %.2f and you are Overweight\n", BMI);
    }
    else
    {
        printf("Your BMI is %.2f and you are Fat / increased Obesity\n", BMI);
    }

    return 0;
}

int main()
{
    // Get the user's choice
    int choice = get_user_choice();

    // Using swtich case statement
    switch (choice)
    {
    case 1:
        Addition();
        break;

    case 2:
        Subtraction();
        break;

    case 3:
        Division();
        break;

    case 4:
        Multiplication();
        break;

    case 5:
        Age_Calculator();
        break;

    case 6:
        BMI();
        break;

    default:
        printf("Invalid option! Please enter a valid option.\n");
        break;
    }

    return 0;
}