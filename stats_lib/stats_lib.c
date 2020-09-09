/*
 * stats_lib.c
 *
 *  Created on: Sep 2, 2020
 *      Author: thomandr
 */
#include "stats_lib.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float maximum(float nums[ ], int n) {
    for (int i = 0; i < n; ++i) {
        if (nums[0] < nums[i])
            nums[0] = nums[i]; }
            return nums[0];
}

float minimum(float nums[ ], int n) {
    for (int i = 0; i < n; ++i) {
        if (nums[0] > nums[i])
            nums[0] = nums[i]; }
            return nums[0];
}

float mean(float nums[ ], int n) {
    float total=0.0, average;

    for (int i = 0; i < n; i++) {
        total = (total + nums[i]);
    }
       average = (total / n);
        return average;
}

float median(float nums[ ], int n) {
   int temp, median;
   for(int i=0;i<n;i++)
 {
   for(int j=0; j<n-i-1; j++)
   {
    if(nums[j]<nums[j+1])
    {
     temp = nums[j];
     nums[j] = nums[j+1];
     nums[j+1] = temp;
    }
   }
 }
 if( n%2 == 0)
  median = (nums[(n/2)-1]+nums[(n/2)])/2.0;
 else
  median = nums[(n/2)];
  return median;
 }

float variance(float nums[ ], int n) {
     int i, j;
    float sum =0.0, var, mean, total =0.0;
    for (i = 0; i < n; ++i) {
        total = total + nums[i];
    }
        mean = total / n;

    for (j = 0; j < n; j++)
    {
        sum = sum + pow((nums[j] - mean), 2);
    }
    var = mean / (n-1);
    return var;
   }

float standard_deviation(float nums[], int n) {
    int total, i, j;
    float sum, var = 0.0, mean = 0.0, std;
    for (i = 0; i < n; ++i) {
        total = total + nums[i];
    }
        mean = total / n;

    for (j = 0; j < n; j++)
    {
        sum = sum + pow((nums[j] - mean), 2);
    }
    var = mean / (n-1);
     std = sqrt(var);
     return std;
}

