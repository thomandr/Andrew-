

/**
 * main.c
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "stats_lib.h"
#include "stats_lib.c"
int main(void)
{
   FILE* fileptr;
   fileptr = fopen("data.txt", "r");

   int i, j, size;
   float data[250];

   if(fileptr ==NULL){
    printf("ERROR!");
    exit(-1);
   }

   for(i=1; i < 250; i++){
    fscanf(fileptr, "%g", &data[i]);
    if(feof(fileptr))
        break;
   }
   fclose(fileptr);

   size = i;

   for(j=1; j < size; j++){
    fscanf(fileptr, "%g",&data[j]);
    printf("number %d: %g\n", j, data[j]);
   }

   float max =  maximum(data, i);
   printf("\nMaximum = %g", max);

   float min = minimum(data, i);
   printf("\nMinimum = %g", min);

   float average = mean(data, j);
   printf("\nMean = %g", average);

   float med = median(data, i);
   printf("\nMedian = %g", med);

   float var1 = variance(data, i);
   printf("\nVariance = %g", var1);

   float sD = standard_deviation(data, i);
   printf("\nStandard Deviation = %g", sD);


return 0;
}
