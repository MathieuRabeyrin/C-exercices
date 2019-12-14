#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int strlength(char *array)
{
    int index = 0;

    while (array[index] != '\0') {
        index++;
    }
    return (index);
}

void print(char *array)
{
    write(1, array, strlength(array));
}

int display(char *argv)
{
    char buffer[30000];
    int file = open(argv, O_RDONLY);

    if (file == -1) {
        print("cat: ");
        perror(argv);
        close(file);
        return (84);
    }
    read(file, buffer, 30000);
    write(1, &buffer, strlength(buffer));
    close(file);
    return (0);
}

int cat(int argc, char **argv)
{
    int index = 0;
    int size = 1;
    char buffer[30000];

    if (argc < 2) {
        while (size > 0) {
            size = read(0, buffer, 30000);
            write(1, &buffer, size);
            for (; buffer[index] != '\0'; index++)
                buffer[index] = '\0';
        }
    }
    index = 1;
    while (index < argc) {
        display(argv[index]);
        index++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    cat(argc, argv);
    return (0);
}
