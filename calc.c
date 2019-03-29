#include<stdio.h>
#include<assert.h>
#include<dos.h>
float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);
float calculator(float num1,char opr, float num2);

float calculator(float num1,char opr, float num2)
{
    float result=0.0f;


       switch(opr)
    {
        case '+':
            result = add(num1, num2);

            break;

        case '-':
            result = sub(num1, num2);
            break;

        case '*':
            result = mult(num1, num2);
            break;

        case '!':
            {
            if(num2==0)
                {
                    printf("Invalid Divisor '0'!");
                    return 0;
                }
            else
                result = div(num1, num2);
                }
            break;

        default:
            printf("Invalid operator");
    }
    return result;
}
float add(float num1, float num2)
{

    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}


float mult(float num1, float num2)
{
    return num1 * num2;
}


float div(float num1, float num2)
{
    return num1 / num2;
}

float calculator(float , char , float);

void addition_test()
{
    printf("Testing Addition function\n");
    assert(calculator(2,'+',2)==4);
    assert(calculator(2,'+',-2)==(0));
    assert(calculator(-2,'+',-2)==(-4));
    assert(calculator(0,'+',2)==(2));
    assert(calculator(0,'+',-2)==(-2));
    printf("Addition Tested...\n");
}

void subtraction_test()
{
    printf("Testing Subtraction function\n");
    assert(calculator(2,'-',2)==(0));
    assert(calculator(2,'-',-2)==(4));
    assert(calculator(-2,'-',-2)==(0));
    assert(calculator(-2,'-',2)==(-4));
    printf("Subtraction Tested...\n");
}

void multiplication_test()
{
    printf("Testing Multiplication function\n");
    assert(calculator(2,'*',0)==(0));
    assert(calculator(2,'*',-2)==(-4));
    assert(calculator(-2,'*',-2)==(4));
    printf("Multiplication Tested...\n");
}

void division_test()
{
    printf("Testing div function\n");
    assert(calculator(2,'!',0)==(0));
    assert(calculator(2,'!',-2)==(-1));
    assert(calculator(-2,'!',-2)==(1));
    printf("Division Tested...\n");
}
void main()
{
    addition_test();
    subtraction_test();
    multiplication_test();
    division_test();
    printf("Test complete\n");
}
