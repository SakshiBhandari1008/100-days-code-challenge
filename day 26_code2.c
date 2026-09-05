//WAP to print the following pattern:
//*

//*
//*
//*

//* 
//*
//*
//*

//*
//*
//*

//*

#include <stdio.h>

int main() {
    int i, j, n;

    for (i = 1; i <= 5; i += 2) {
        n = i;

        for (j = 1; j <= n; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    for (i = 3; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
