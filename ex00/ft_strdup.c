#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {        
        i++;        
    }  
    return (i);    
}


char *ft_strdup(char *src)
{
    int src_size;
    int i;
    static char *dest;
    char *dest_offset;

    i = 0;
    // Alocate memory for duplicate
    src_size = ft_strlen(src);
    dest = (char *)malloc(sizeof(char) * src_size + 1);
    if (dest == NULL)
    {
        return ((char *) NULL);
    }

    // Copy string
    dest_offset = dest;
    while(src[i] != '\0')
    {
        dest_offset[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char src[] = "The cookie is a lie";
    char *dest;
    int src_len, dest_len;

    dest = ft_strdup(src);
    src_len = ft_strlen(dest);
    dest_len = ft_strlen(src);

    printf("Original String: '%s' (%d)\n",
            src, src_len);
    printf("Duplicate string: '%s' (%d)\n",
            dest, dest_len);
    return (0);
}