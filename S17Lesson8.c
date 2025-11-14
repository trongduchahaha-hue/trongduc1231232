#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[1000];
    printf("Nh?p m?t kh?u: ");
    if (fgets(password, sizeof(password), stdin) == NULL) {
        printf("L?i khi nh?p m?t kh?u\n");
        return 1;
    }
    password[strcspn(password, "\n")] = '\0';

    int len = strlen(password);
    int hasUpper = 0;
    int hasLower = 0;
    int hasDigit = 0;
    int hasSpecial = 0;

    for (int i = 0; password[i] != '\0'; i++) {
        char c = password[i];
        if (isupper((unsigned char)c)) {
            hasUpper = 1;
        } else if (islower((unsigned char)c)) {
            hasLower = 1;
        } else if (isdigit((unsigned char)c)) {
            hasDigit = 1;
        } else {
            hasSpecial = 1;
        }
    }

    if (len >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        printf("H?p l?\n");
    } else {
        printf("Không h?p l?\n");
    }

    return 0;
}

