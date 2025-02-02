//Find the lowest & highest value in array.

#include <stdio.h>
#include <conio.h>

void main() 
{
    int i;
    
    int my_array[] = {7, 2, 99, 4, 11}; // Array declaration
    
    int minval = my_array[0]; // Initialize minval with the first element of the array
    int maxval = my_array[0]; // Initialize maxval with the first element of the array

    // Loop through the array to find the minimum and maximum values
    for (i = 1; i < sizeof(my_array)/sizeof(my_array[0]); i++) 
	{
        if (my_array[i] < minval) //for find lowest value
		{
            minval = my_array[i]; // Update minval if a smaller value is found
        }

        if (my_array[i] > maxval) //for find Highest value
		{
            maxval = my_array[i]; // Update maxval if a larger value is found
        }
    }

    // Print the minimum and maximum values
    printf("Lowest Value is : %d\n", minval);
    printf("Highest Value is : %d\n", maxval);
}

