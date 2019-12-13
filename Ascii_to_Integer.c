int chartoint(char *array)
{
    int value = 0;
    int index = 0;
    int negatif = 0;

    while (array[index] == '-' || array[index] == '+') {
        if (array[index] == '+')
            negatif--;
        negatif++;
        index++;
    }
    while (array[index] != '\0') {
        if (array[index] < '0' || array[index] > '9')
            break;
        if (array[index] >= '0' && array[index] <= '9') {
            value *= 10;
            value += array[index] - '0';
        }
        index++;
    }
    if ((negatif % 2) == 1)
        value = -value;
    return (value);
}
