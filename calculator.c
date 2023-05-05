#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
      //assigning values to variables

     float valueOne;
     float valueTwo;
     char operator;
     float answer;
     //asking user for input
     printf("Enter calculation:\n\n");
     scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    //coditionals for calculating values
     switch(operator)
     {
        case '+' : answer = (valueOne + valueTwo);
        break;
        case '-' : answer = (valueOne - valueTwo);
        break;
        case '*' : answer = (valueOne * valueTwo);
        break;
        case '/' : answer = (valueOne / valueTwo);
        break;
        case '^' : answer = pow(valueOne, valueTwo);
        break;
        default:
        goto fail;
     }

     //print out the answer

     printf("%.9g%c%.9g =  %.6g\n\n.", valueOne, operator, valueTwo, answer);
     goto exit;
     //if program fails
     fail:
     printf("fail.\n");
     exit:
     return 0;
}