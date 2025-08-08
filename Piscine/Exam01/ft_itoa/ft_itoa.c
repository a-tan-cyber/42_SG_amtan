#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int nbr);

int main(void)
{
    char *result;
    int number = INT_MIN;

    result = ft_itoa(number); 
    if (result)
    {
        printf("Expected: %d\n", number);
        printf("Converted number: %s\n", result);
    }
        
    else
        printf("Conversion failed.\n");
        
    free(result); // Free the allocated memory
    return 0;
}

char	*ft_itoa(int nbr)
{
    long long_nbr;
    char *result;
    int is_negative;
    int digit_count;
    long temp;
    int total_length;
    int index;
    char digit;
    
    // Step 0: Convert the integer to a long to handle edge cases like INT_MIN
    long_nbr = nbr; // Use long to handle INT_MIN case
    
    // Step 1: Handle special case for zero
    if (long_nbr == 0)
    {
        // We need a string of length 2 for "0" and null terminator
        char *result = malloc(2 * sizeof(char));
        if (!result)
            return NULL; // Memory allocation failed
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    // Step 2: Determine if the number is negative
    if (long_nbr < 0)
    {
        is_negative = 1;
        long_nbr *= -1; // Convert to positive for processing
    }
    else 
        is_negative = 0;

    // Step 3: Count the number of digits in the number
    digit_count = 0;
    temp = long_nbr; // So we don't modify long_nbr in the loop
    while (temp > 0)
    {
        temp /= 10;
        digit_count++;
    }

    // Step 4: Allocate memory for the result string
    // Compute total length, which includes sign if negative and null terminator
    total_length = digit_count + is_negative + 1; // +1 for null terminator
    result = malloc(total_length * sizeof(char));
    if (!result)
        return NULL; // Memory allocation failed
    
    // Step 5: Terminate the string with null character first, for safety
    result[total_length - 1] = '\0';

    // Step 6: Fill the string with digits in reverse order
    index = total_length - 2; // Before null terminator
    temp = long_nbr; // Reset temp to original number
    while (temp > 0)
    {
        digit = temp % 10 + '0'; // Convert digit to character
        result[index] = digit; // Place the digit in the string
        temp /= 10; // Remove the last digit
        index--; // Move to the next position
    }

    // Step 7: If the number was negative, place the '-' sign at the start
    if (is_negative)
    {
        result[0] = '-'; // Place the negative sign
    }

    // Step 8: Return the result string
    return result;
}