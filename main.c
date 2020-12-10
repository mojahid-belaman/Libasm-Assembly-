#include "libasm.h"

int main() 
{
   /* Test ft_strlen(char *str) */
   char *str1 = "";
   printf("%zu\n", strlen(str1));
   printf("%zu", ft_strlen(str1));

   /* Test ft_strcmp(const char *s1, const char *s2) */
   // char *str1 = "ABCDEF";
   // char *str2 = "ABCDEF";

   // printf("%d\n", strcmp(str1, str2));
   // printf("%d", ft_strcmp(str1, str2));

   /* Test ft_*/
   return(0);
}

// int main() {
//    char *str = "Helloworld";
//    char *result; 
//    result = ft_strdup((const char *)str);
//    printf("The string : %s", result);
//    return 0;
// }
// int main () {
//    char src[40];
//    char dest[100];
  
//    memset(dest, '\0', sizeof(dest));
//    ft_strcpy(src, "This is tutorialspoint.com");
//    ft_strcpy(dest, src);

//    printf("Final copied string : %s\n", dest);
   
//    return(0);
// }