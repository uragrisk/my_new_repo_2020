#include <stdio.h>



int main() {

    int i;
    int massiv[] = { 1,2,3,4,6,7,8 };
    for (i = 0; i < sizeof(massiv) / 4; i++)
    {
        if (massiv[i] + 1 != massiv[i + 1])
            break;
    }
    printf("%d <=", massiv[i + 1]);
    for (i = 0; i < sizeof(massiv) / 4; i++)
    {
        printf("%d,", massiv[i]);
    }
    return 0;
}