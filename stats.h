/******************************************************************************
 * Copyright (C) 2012 by Huy Nguyen
 *
 *****************************************************************************/
/**
 * @file  stats.h 
 * @brief Functions prototypes used by stats.c
 *
 * @author Huy Nguyen
 * @date   2022-05-21
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


 /**
  * @brief  Print the statistics of an array including minimum, maximum, mean, and median
  *
  * @return void()
  */
void print_statistics();


/**
 * @brief Print the array
 *
 * @param pArray     Pointer to the array of data
 * @param len        Number of elements in the array
 *
 * @return void()
 */
void print_array(unsigned char *pArray, unsigned int len);



/**
 * @brief Calculate the median value of the array
 *
 * @param pArray            Pointer to the array of data
 * @param len               Number of elements in the array
 * @return unsigned char    median value in array
 */
unsigned char find_median(unsigned char *pArray, unsigned int len);


/**
 * @brief Calculate the average value of the array
 *
 * @param pArray            Pointer to the array of data
 * @param len               Number of elements in the array
 * @return unsigned char    Average value in array
 */
unsigned char find_mean(unsigned char *pArray, unsigned int len);


/**
 * @brief Calculate the maximum value in the array
 *
 * @param pArray            Pointer to the array of data
 * @param len               Number of elements in the array
 * @return unsigned char    Maximum value in array
 */
unsigned char find_maximum(unsigned char *pArray, unsigned int len);


/**
 * @brief Calculate the minimum value in the array
 *
 * @param pArray            Pointer to the array of data
 * @param len               Number of elements in the array
 * @return unsigned char    Minimum value in array
 */
unsigned char find_minimum(unsigned char *pArray, unsigned int len);


/**
 * @brief Sorts an array from largest (index 0) to smallest (index n-1)
 *
 * @param pArray            Pointer to the array of data
 * @param len               Number of elements in the array
 *
 * @return void()
 */
void sort_array(unsigned char *pArray, unsigned int len);

#endif /* __STATS_H__ */
