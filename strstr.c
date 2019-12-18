char *str(const char *haystack, const char *needle)
{
    for (; *haystack != '\0'; *haystack++) {
        if (*haystack == *needle) {
            for (int index = 0; *needle != '\0'; index++) {
                if (*needle != haystack[index])
                    return (NULL);
                *needle++;
            }
            return (char *) haystack;
        }
    }
    return (NULL);
}
