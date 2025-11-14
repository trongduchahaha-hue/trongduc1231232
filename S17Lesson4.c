#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char ch;
    int i, j;

    printf("Nhap chuoi: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("Loi khi nhap chuoi\n");
        return 1;
    }

    s[strcspn(s, "\n")] = '\0';

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    j = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ch) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';

    printf("Chuoi sau khi xoa '%c': %s\n", ch, s);

    return 0;
}

