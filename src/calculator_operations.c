#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int greater(int operand1, int operand2)
{
    if(operand1 > operand2)
        return operand1;
    else
        return operand2;
}

int smaller(int operand1, int operand2)
{
    if(operand1 < operand2)
        return operand1;
    else
        return operand2;
}

int rectarea(int operand1, int operand2)
{
    return operand1 * operand2;
}

int rectperi(int operand1, int operand2)
{
    return (2*(operand1 + operand2));
}

int prime(int operand1)
{
    int var,number=0,flag=0;     
    number=operand1/2;    
    for(var=2;var<=number;var++)    
    {    
    if(operand1%var==0)    
    {    
    return 0;   
    flag=1;    
    break;    
    }    
    }    
    if(flag==0)         
    return 1;  
}

int bitwiseand(int operand1, int operand2)
{
    return operand1 && operand2;
}

int bitwiseor(int operand1, int operand2)
{
    return operand1 || operand2;
}

int bitwisenot(int operand1)
{
    return !operand1;
}

