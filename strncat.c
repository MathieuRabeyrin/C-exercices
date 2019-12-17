char *ncat(char *dest, const char *src, size_t n)
{
    int	index =	0;

    for(; dest[index] != '\0'; index++);
    for(int j = 0; *src != '\0' && j < n; index++) {
	dest[index] = *src++;
        j++;
    }
    dest[index] = '\0';
    return (dest);
}
