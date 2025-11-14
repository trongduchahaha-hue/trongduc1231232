#include <stdio.h>
#include <string.h>

int main () {
	char str1[100];
	char str2[100];
	
	printf (" Nhap chuoi thu nhat: ");
	if (fgets(str1, sizeof(str1),stdin) == NULL){
		printf("Nhap khong thanh cong: ");
		return 1;
	}
	str1[strcspn(str1, "\n")] = '\0';
	
	printf("Nhap chuoi thu hai: ");
	if (fgets(str2, sizeof(str2),stdin) == NULL){
		printf("Nhap khong thanh cong: ");
		return 1;
	}
	str2[strcspn(str2, "\n")] = '\0';
	
	printf("Ket qua sau khi noi: %s\n", str1);

    return 0;
}
