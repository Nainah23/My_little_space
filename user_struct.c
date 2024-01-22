#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int shoe_size;
} User;

int main() {
    User arr[2];
    int i;
    
    strcpy(arr[0].name, "Kamah");
    arr[0].shoe_size = 9;
    
    strcpy(arr[1].name, "Nainah");
    arr[1].shoe_size = 8;
    
    for (i = 0; i < 2; i++){
        if (strcmp(arr[i].name, "Nainah") == 0){
            printf("User: %s\n", arr[i].name);
            printf("Shoe Size: %d\n", arr[i].shoe_size);
            return 0;
        }
    }

    return 1;
}

