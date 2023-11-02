#include <stdlib.h>
#include <stdio.h>

int main(void){
    char *pathvar;

	pathvar = getenv("moonboos");
    printf("moonboos=%s\n", pathvar);

    pathvar = getenv("sast2023");
    printf("sast2023=%s\n", pathvar);

    pathvar = getenv("PATH");
    printf("PATH=%s\n", pathvar);

    return 0;
}