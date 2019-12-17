char *rchr(const char *s, int c)
{
    int index = 0;

    for (; *s++ != '\0'; index++);
    index--;
    *s--;
    for (; index >= 0 ; index--) {
        *s--;
        if (*s == c)
            return (char *)s;
    }
    return (NULL);
}
