/* Jodie Jackson
 * Operating System
 * Lab 1
 * Copy Function 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    FILE *original;
    //char input[100];
   // printf("Please enter the source file: ");
    //fgets(input, sizeof(input), stdin);
    //input[strcspn(input, "\n")] = '\0';
    original = fopen(argv[1], "r");
    if (original == NULL)
    {
        printf("Original file does not exist!\n");
        exit(1);
    }
    FILE *copy;
    //char output[100];
    //printf("Please enter the destination file: ");
    //fgets(output, sizeof(output), stdin);
    //output[strcspn(output, "\n")] = '\0';
    copy = fopen(argv[2], "w");

    if (copy == NULL)
    {

        printf("Destination file does not exist!\n");
        exit(1);
    }


    do{
    char inputline[100];
    while (fgets(inputline, sizeof(inputline), original))
    {
        fputs(inputline, copy);
    }
      printf("files both already exist");
      exit(1);
    }while(copy && original);



    fclose(original);
    fclose(copy);
    return 0;
}
