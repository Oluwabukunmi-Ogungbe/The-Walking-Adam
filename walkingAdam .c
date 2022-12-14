//This is a program to count the number of baby Adam's steps before he falls

#include <stdio.h>
#include <stdlib.h>



int main()
{
   int testCaseNum;

   // This reads the input from the file
   FILE *walkingAdam;

   if ((walkingAdam = fopen("C:\\Users\\olumide\\Documents\\adam.in","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }



   fscanf(walkingAdam,"%d \n", &testCaseNum); //Read the the first line of the file as the number of test cases.

   printf("The number of test cases in the input file is %d \n", testCaseNum);






    char babysteps[100] ;

    while(fgets(babysteps,1000,walkingAdam)) //this loops through all the step sequences Adam takes
    {



       int allStepsBeforeFall = 0 ; // this counts all the steps taken before the child falls


        for (int i =0; i < strlen(babysteps); i++){
        if(babysteps[i] == 'U'){allStepsBeforeFall +=1;} // the count is increased when Adam takes a step U
        else {if(babysteps[i] == 'D' ){break;} // when Adam falls, the loop is broken and his step is displayed
                else{printf(""); //A case where Adam does not fall and does not move, the loop is also broken and his steps, displayed
                break;}
        }





    }

     printf("%d \n", allStepsBeforeFall);
    }

    fclose(walkingAdam);

   return 0;
}
