size_t cspn(const char *s, const char *reject)
{
    int index = 0;
    int	temp = 0;

    for (int j = 0; reject[j] != '\0'; j++) {
        for (; s[index] != '\0'; index++)
            if (s[index] == reject[j])
                return (index);
        temp = index;
        index = 0;
    }
    return (temp);
}
