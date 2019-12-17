char *ncpy(char *dest, const char *src, size_t n)
{
    int index = 0;

    while (index < n && *src != '\0') {
        *dest++ = *src++;
        index++;
    }
    for	(; index < n; index++)	
        *dest++	= '\0';
    return (dest);
}
