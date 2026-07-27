#include <stdio.h>

int main() {
    char str1[] = "prakruti";
    char str2[] = "prakruti";
    int i = 0;
    int result = 0;

    // Loop until we reach the end of either string or a mismatch occurs
    while (str1[i] != '\0' && str2[i] != '\0') 
   {
        if (str1[i] != str2[i]) {
            break;
        }
        i++;
    }

    // Calculate the difference between the mismatching characters
    result = str1[i] - str2[i];

    // Output the comparison results
    if (result == 0) 
    {
        printf("The strings are equal.\n");
    } 
    else 
    {
        printf("The strings are not equal.\n");
    }

    return 0;
}
