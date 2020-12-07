#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_strcmp(const char *X, const char *Y);
// {
//     while(*X)
//     {
//         if (*X != *Y)
//             break;
//         X++;
//         Y++;
//     }
 
//     return *(const unsigned char*)X - *(const unsigned char*)Y;

// }
int main() 
{
   char *str1 = "mojahid";
   char *str2 = "";
   printf("%d", ft_strcmp(str1, str2));
   return(0);
}