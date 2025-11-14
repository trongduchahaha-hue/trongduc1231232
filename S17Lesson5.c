#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[1000];
    char str2[1000];

    printf("Nhap chuoi thu nhat: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) {
        printf("Nhap khong thanh cong.\n");
        return 1;
    }

    str1[strcspn(str1, "\n")] = '\0';

    printf("Nhap chuoi thu hai: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) {
        printf("Nhap khong thanh cong.\n");
        return 1;
    }
    str2[strcspn(str2, "\n")] = '\0';

    for (int i = 0; str1[i] != '\0'; i++) {
        str1[i] = tolower((unsigned char)str1[i]);
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        str2[i] = tolower((unsigned char)str2[i]);
    }

    if (strcmp(str1, str2) == 0) {
        printf("Gi?ng nhau\n");
    } else {
        printf("Khác nhau\n");
    }

    return 0;
}

