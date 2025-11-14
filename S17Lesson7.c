#include <stdio.h>
#include <string.h>

int isSubstr(const char *A, const char *B) {
    int n = strlen(A);
    int m = strlen(B);

    if (m == 0) {
        return 1;
    }

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (A[i + j] != B[j]) {
                break;
            }
        }
        if (j == m) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char A[1000];
    char B[1000];

    printf("Nhap chuoi A: ");
    if (fgets(A, sizeof(A), stdin) == NULL) {
        printf("Loi nhap.\n");
        return 1;
    }
    A[strcspn(A, "\n")] = '\0';

    printf("Nhap chuoi B: ");
    if (fgets(B, sizeof(B), stdin) == NULL) {
        printf("Loi nhap.\n");
        return 1;
    }
    B[strcspn(B, "\n")] = '\0';

    if (isSubstr(A, B)) {
        printf("Có\n");
    } else {
        printf("Không\n");
    }

    return 0;
}

