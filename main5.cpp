#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void usage(const char *program_name) {
    printf("Sposob uzycia: %s <komunikat> <#powtorzen>\n", program_name);
    exit(1);
}

int main(int argc, char const *argv[]) {
    if (argc < 3) {
        usage(argv[0]);
    }

    char *endptr;
    errno = 0;
    long count = strtol(argv[2], &endptr, 10);

    if (errno != 0 || *endptr != '\0' || count < 1) {
        fprintf(stderr, "Blad: nieprawidlowa liczba powtorzen '%s'\n", argv[2]);
        usage(argv[0]);
    }

    printf("Powtarzam %ld razy..\n", count);
    for (long i = 0; i < count; i++) {
        printf("%3ld - %s\n", i, argv[1]);
    }

    return 0;
}
