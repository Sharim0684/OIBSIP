// Write a program in C to count the total number of alphabets, digits and special 
// characters in a string.
#include <stdio.h>
 #include <string.h>
int main()
{
  	char str[100],i;
    int alphabets=0,digits=0,special=0;
    
    printf("Enter a string  ");
    gets(str);
     for(i=0;str[i];i++)
    {
        
            if ((str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122))
        {
           alphabets = alphabets+1;
           // alphabets++;
        }

        else if (str[i]>=48 && str[i]<=57)
        {
           digits=digits+1;
           //digits++;
        }
        else
        
            special = special+1;
         //   special++;
             
        
    }
     printf("numbers of alphabets in string is %d\n ",alphabets);
     printf("number of digits in string is %d \n",digits);
     printf("number of special character in string is %d \n",special);


     return 0;
}