/******************************************************************************
 * Copyright (C) 2012 by Huy Nguyen
 *
 *****************************************************************************/
/**
 * @file  stats.c 
 * @brief Given an array of unsigned char, provide functions to print, sort, find median, mean, maximum,
          minimum and statistics values
 *
 *
 * @author Huy Nguyen
 * @date   2022-05-21
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Global variables for storing the min, max, mean and median values of an array*/
unsigned char arrayMin = 0;
unsigned char arrayMax = 0;
unsigned char arrayMean = 0;
unsigned char arrayMedian = 0;

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  
  /* First, sort array in descending order (from largest to smallest)*/
  sort_array(test, SIZE);

  /* Print array after sort, for test */
  //print_array(test, SIZE);

  arrayMax = find_maximum(test, SIZE);
  arrayMin = find_minimum(test, SIZE);
  arrayMean   = find_mean(test, SIZE);
  arrayMedian = find_median(test, SIZE);
  print_statistics();

}


void print_statistics() {
  printf("Array statistics : \n");
  printf("  Max: %u\n", arrayMax);
  printf("  Min: %u\n", arrayMin);
  printf("  Mean: %u\n", arrayMean);
  printf("  Median: %u\n",  arrayMedian);
}

void print_array(unsigned char *pArray, unsigned int len) {
  unsigned int i;

  for (i = 0; i < len; i++)  {
    printf("array[%u] : %u \n", i, pArray[i]);
  }

}

unsigned char find_median(unsigned char *pArray, unsigned int len) {
  unsigned char median = 0;
  unsigned int idx = len / 2;  //middle index

  // if number of elements are even
  if (len % 2 == 0) {
    median = ( pArray[idx-1] + pArray[idx] ) / 2;
  }
  else // if number of elements are odd
    median = pArray[idx];

  return median;
}

unsigned char find_mean(unsigned char *pArray, unsigned int len) {
  unsigned int uMean= 0;

  // Add up all the numbers in the array
  for (unsigned int i = 0; i < len; i++) {
    uMean += pArray[i];
  }

  return (uMean / len);
}

/*
The array has been sorted in descending order. The maximum value is the first element of the array
*/
unsigned char find_maximum(unsigned char *pArray, unsigned int len) {
  return pArray[0];
}

/*
The array has been sorted in descending order. The minimum value is the last element of the array
*/
unsigned char find_minimum(unsigned char *pArray, unsigned int len) {
  return pArray[len-1];
}

//Sort in descending order
void sort_array(unsigned char *pArray, unsigned int len) {
  unsigned int i = 0, j = 0, temp = 0;

  for (i = 0; i < len; i++) {
    for (j = 0; j < len - 1; j++) {
      if (pArray[j] < pArray[j + 1]) {
        temp = pArray[j];
        pArray[j] = pArray[j + 1];
        pArray[j + 1] = temp;
      }
    }
  }
}
