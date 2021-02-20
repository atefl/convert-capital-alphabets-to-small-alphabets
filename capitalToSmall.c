#include <stdio.h>
#include <cs50.h>
#include <string.h> // Library to deal with string
int main()
{
    string name = get_string("enter your name: "); // name inputed by user
    long n = strlen(name); // strlen() is function in <string.h> for know length of string
    for (int i = 0; i < n; i++) // for loop
    {
        if (name[i] > 64 && name[i] < 91) // alphabets in ASCII must between 64 and 91 to convert to small alphabets
        {
        printf("%c",name[i] + 32); // character add 32 to got small alphabets
        }
        else // if user input small alphabet then print it
        {
            printf("%c",name[i]); 
        }
    }
}
