#include<stdio.h>
int main()
{

    char array[50];
/////////////////////////////////////////////////////entering and printing array
        printf("Enter String: ");
        scanf("%[^\n]s",&array);
        printf("You entered:%s\n",array);

    char numbers[50],letters[50],punctuation[50];
    int i=0,j=0,k=0,l=0;
////////////////////////////////////////////////sorting the array
        for(l=0;array[l]!='\0';l++)
            {
                if(array[l]==' ')
                continue;

                else if(array[l]>='0'&&array[l]<='9')
                    {
                        numbers[i]=array[l];
                        i++;
                    }
                else if((array[l] >= 'A' && array[l] <= 'Z') || (array[l] >= 'a' && array[l] <= 'z'))
                    {
                        letters[j]=array[l];
                        j++;
                    }
                else{
                    punctuation[k]=array[l];
                    k++;
                    }
            }
            numbers[i]='\0';letters[j]='\0';punctuation[k]='\0';
            ///////////////////////////////////////////////////////printing the results
            printf("Numbers:%s\n",numbers);
            printf("Letters:%s\n",letters);
            printf("Punctuation:%s\n",punctuation);
            return 0;

}
