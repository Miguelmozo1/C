#include <string.h>
// this allows us to use fgets and char when specifying char count
#include <stdio.h>

int strg_to_int(const char *str) {
    if(strcmp(str, "Blues") == 0) return 1;
    if(strcmp(str, "Rock") == 0) return 2;
    if(strcmp(str, "Classical") == 0) return 3;
    if(strcmp(str, "Pop") == 0) return 4;
    
    return 0;
}


int main() {

    printf("Favorite genre? Blues, Rock, Classical, or Pop\n");
    char fav[15];
    scanf("%s", fav);

    switch (strg_to_int(fav)) {
        case 1:
            printf("Blues are my favorite genre too\n");
            break;
        case 2:
            printf("Rock on brother\n");
            break;
        case 3:
            printf("Can't ever go wrong with classical\n");
            break;
        case 4:
            printf("Not my kind of jam, but some stick out\n");
            break;
        default:
            printf("Please enter only given genres\n");
    }




    return 0;
}