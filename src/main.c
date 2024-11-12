#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    if (argc == 4 || (argc == 3 && strcmp(argv[1], "squa") == 0)) {
        char* op = argv[1];
        char* a = argv[2];
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(argv[3]));
            printf("%lf\n", r);
        } else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(argv[3]));
            printf("%lf\n", r);
        } else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(argv[3]));
            printf("%lf\n", r);
        } else if (strcmp(op, "div") == 0) {
            if (atof(argv[3]) == 0) {
                printf("Erreur : Division par zéro\n");
            } else {
                r = _div(atof(a), atof(argv[3]));
                printf("%lf\n", r);
            }
        } else if (strcmp(op, "squa") == 0) {
            r = _squa(atof(a));
            printf("%lf\n", r);
        } else {
            printf("Erreur de paramètres\n");
        }
    } else {
        printf("Erreur de paramètres\n");
    }
    return 0;
}
