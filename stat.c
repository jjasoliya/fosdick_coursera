#include "stat.h"
#include <stdio.h>
#include <stdlib.h>


// print array function definition
int print_array(unsigned int size_of_array, unsigned char * arr)
  {
   
  printf("size_of_array:%u \n",size_of_array);
    
  for(int i = 0; i < size_of_array;i++){
  printf("%hhu ",arr[i]);
  }

  printf("\n");


  }

//find mean function definition
int find_mean(unsigned int size_of_array, unsigned char * arr)
  {
     int sum_of_array_elements = 0;
     int mean;
     for(int i=0;i<size_of_array;i++)
	{ 	
           sum_of_array_elements += arr[i];
        }

    return mean = (int)sum_of_array_elements / size_of_array ;

  }


void main()
{

  printf("fosdisk first program\n");

  unsigned int size_of_array;
  unsigned char * arr;
 //unsigned char n;

  //scan the user inputs
  printf("Enter the size of the array:\n");
  scanf("%u",&size_of_array);

  arr = malloc(size_of_array * sizeof(unsigned char));
  printf("Enter the elements of the array:\n");
  for( int i = 0;i<size_of_array;i++)
	{
            scanf("%hhu",&arr[i]);
	}
  

  //print the array details
  printf("size_of_array:%u \n",size_of_array);
    
  for(int i = 0; i < size_of_array;i++){
  printf("%hhu ",arr[i]);
  }

  printf("\n");


  printf("OUTPUT FOR FUNCTIONS\n");

  print_array(size_of_array, arr);
  printf("mean=%d\n",find_mean(size_of_array, arr));

}






