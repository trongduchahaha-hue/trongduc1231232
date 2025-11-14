#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Nhap chuoi: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("Loi khi nhap chuoi.\n");
        return 1;
    }
    s[strcspn(s, "\n")] = '\0';

    int max_len = 0;
    int curr_len = 0;
    int max_start = 0;

    int i = 0;
    while (1) {
        char c = s[i];
        if (c != ' ' && c != '\0') {
            curr_len++;
        } else {
            if (curr_len > max_len) {
                max_len = curr_len;

                max_start = i - curr_len;
            }
            curr_len = 0;
        }

        if (c == '\0')
            break;
        i++;
    }

    char longest[1000];
    for (i = 0; i < max_len; i++) {
        longest[i] = s[max_start + i];
    }
    longest[max_len] = '\0';

    printf("Tu dai nhat: \"%s\"\n", longest);
    printf("Do dai: %d\n", max_len);

    return 0;
}

