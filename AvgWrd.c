#include <stdio.h>
#define SIZE 80


//main function
int main(void)
{

    //initialize variables
    char prompt;
    int string = 0, words = 1;

    //prompts the user for a sentence
    printf("\nEnter a sentence: ");

    /*takes the first 80 words and increment words and string by 1 per each letter and white space*/
    if (words < SIZE)
    {
       while ((prompt = getchar()) != '\n') 
       {
           switch (prompt) 
           {
               case ' ':  
                   words++;
                   break;
               default:
                   string++;
                   break;
           }
       }
    }

    //prints the value of the average word length 
    printf("Average word length %.1f\n\n", (float) string/ words);  

    return 0;
}
