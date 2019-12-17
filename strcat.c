void *cat(char *dest, const char *src)
{
    int	index =	0;

    for(; dest[index] != '\0'; index++);
    for(; *src != '\0'; index++)
	dest[index] = *src++;
    dest[index] = '\0';
    return (dest);
}
