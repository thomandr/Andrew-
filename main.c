#include <stdio.h>
#include <string.h>
char* secondWord(char* inputString, char* outputString);

int main()
    {
        ///////////////////////declaring
        char string[150];
        char words[5][50];
        int i,j,k;
        char temp[50];
        char *output ="";
         char ip = string;
         char *op=output;
         int pass, fail;

////////////////////////////////////////////////////prompting
        printf("Enter string with 3-5 words:");
        scanf("%[^\n]s",string);
//////////////////////////////////////////////////alphabetizing
        j=0;
        k=0;
        for(i=0;i<=(strlen(string));i++)
            {
            if(string[i]==' '||string[i]=='\0')
                {
                    words[k][j]='\0';
                    k++;
                    j=0;
                }
            else
                    {
                    words[k][j]=string[i];
                    j++;
                    }
            }
            printf("You entered : %s\n",string);

            for (i = 0; i < k - 1 ; i++)
                {
                    for (j = i + 1; j < k; j++)
                        {
                            if (strcmp(words[i], words[j]) > 0)
                                {
                                    strcpy(temp, words[i]);
                                    strcpy(words[i], words[j]);
                                    strcpy(words[j], temp);
                                }
                        }
                }

                printf("First alphabetically :%s\n",words[0]);
                printf("Second alphabetically :%s\n",words[1]);
                printf("Third alphabetically :%s\n",words[2]);
                printf("Fourth alphabetically :%s\n",words[3]);
                printf("Fifth alphabetically :%s\n",words[4]);
////////////////////////////////////////////////////////////////////sorting the second word
    char *second =secondWord(string, output);
                printf("Second word : %s\n", second);

                //test 1
                strcpy(string, "one two three");
                op = secondWord(&string,&op);
                printf("Function Test Case #1\n");
                printf("Input: One Two Three\n");
                printf("Expected output: Two\n");
                printf("Output: %s\n", op);
                if(strcmp(secondWord(string, op), "two")==0){
                    pass++;
                    printf("result: \t PASS\n");
                }
                else{
                    fail++;
                    printf("result: \t FAIL\n");
                }
                //test 2
                strcpy(string, "Apple cake Bread pie chicken");
                op = secondWord(&string,&op);
                printf("Function Test Case #2\n");
                printf("Input: Apple cake Bread pie chicken\n");
                printf("Expected output: cake\n");
                printf("Output: %s\n", op);
                if(strcmp(secondWord(string, op), "cake")==0){
                    pass++;
                    printf("result: \t PASS\n");
                }
                else{
                    fail++;
                    printf("result: \t FAIL\n");
                }

    return 0;
}
char* secondWord(char* inputString, char* outputString)/////////////////sorting the second word
{
char *array[2];
int i = 0;

array[1] = strtok(inputString, " ");
if(array[1] != NULL){
    array[++i] = strtok(NULL, " ");
    outputString = array[1];

    return outputString;
}
else outputString = NULL;
    return outputString;
}
