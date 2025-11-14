#include <stdio.h>
#include <string.h>

int main() {
    char str1[2000];
    char str2[1000];

    printf("Nhap chuoi thu nhat: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) {
        printf("Loi nhap chuoi thu nhat\n");
        return 1;
    }
    str1[strcspn(str1, "\n")] = '\0';

    printf("Nhap chuoi thu hai: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) {
        printf("Loi nhap chuoi thu hai\n");
        return 1;
    }
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("Ket qua sau khi noi: %s\n", str1);

    return 0;
}

