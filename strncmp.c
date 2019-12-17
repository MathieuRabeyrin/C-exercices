int ncmp(const char *s1, const char *s2, size_t n)
{
    for (int index = 0; index < n; index++) {
	if (*s1 != *s2)
            return (*s1 - *s2);
	if (*s1 == '\0' && *s2 == '\0')
	    return (0);
        *s1++;
        *s2++;
    }
    return (0);
}
