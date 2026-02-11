//Read a string and check if it is a palindrome using two-pointer comparison. 

#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    int left, right, flag = 1;

    // taking input
    scanf("%s", s);

    // set two pointers
    left = 0;
    right = strlen(s) - 1;

    // compare characters from both ends
    while (left < right) 
    {
        if (s[left] != s[right]) 
        {
            flag = 0;   // not palindrome
            break;
        }
        left++;
        right--;
    }
    if (flag == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
