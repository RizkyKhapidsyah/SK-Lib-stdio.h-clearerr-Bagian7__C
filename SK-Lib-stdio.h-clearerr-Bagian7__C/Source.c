#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile = fopen("test.txt", "r");

    fputc('x', pFile);

    if (ferror(pFile)) {
        printf("Error Writing to test.txt\n");
        clearerr(pFile);
    }

    fgetc(pFile);

    if (!ferror(pFile)) {
        printf("No errors reading test.txt\n");
    }
        
    fclose(pFile);

    _getch();
    return 0;
}