/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <Add File Name>
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  print_array(test,SIZE);
  print_statistics(test,SIZE);
  print_array(test,SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char array[],unsigned int length){
  unsigned char minimum=0,maximum=0;
  unsigned int mean=0,median=0;

  sort_array(array,length);

  minimum=find_minimum(array,length);
  maximum=find_maximum(array,length);
  mean=find_mean(array,length);
  median=find_median(array,length);

  printf("Minimum: %u\n",minimum);
  printf("Maximum: %u\n",maximum);
  printf("Mean: %u\n",mean);
  printf("Median: %u\n",median);
}

void print_array(unsigned char array[],unsigned int length){

  printf("\nFormat of printing array will be as follows:\n");
  printf("Number[Index of the number]\n\n");

  for(unsigned int idx=0; idx<length; idx++){
    printf("%u[%u] ",array[idx],idx);
  }

  printf("\n\n");

}

unsigned char find_median(unsigned char array[],unsigned int length){

  unsigned char median;
  unsigned int median_idx=0;

  if((length%2)==0)
  {
    median_idx=((length+1)/2);
    median=(array[median_idx]+array[median_idx+1])/2;
  }
  else
  {
    median_idx=((length+1)/2);
    median=array[median_idx];
  }
}

unsigned int find_mean(unsigned char array[],unsigned int length){
    unsigned int sum=0;
    for(unsigned int idx=0; idx<length; idx++){
    sum+=array[idx];
  }

  return (sum/length);
}

unsigned char find_maximum(unsigned char array[],unsigned int length){
  return (array[0]);
}

unsigned char find_minimum(unsigned char array[],unsigned int length){
  return (array[length-1]);
}

void sort_array(unsigned char array[],unsigned int length){
  unsigned char sorted=0;

  while(!sorted){
    sorted=1;
    for(unsigned int idx=0; idx<(length-1); idx++){

      if(array[idx]<array[idx+1]){

        unsigned char temp=array[idx];
        array[idx]=array[idx+1];
        array[idx+1]=temp;
        sorted=0;

      }

    }

  }
}
