#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	char str[1000];
	int choice;
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin );
	str[strcspn(str, "\n")]= '\0';
	
	printf("\n-------------MENU-------------\n");
	printf("1. Chuyen thanh CHU HOA \n");
	printf("2. Chuyen thanh chu thuong \n");
	printf("Nhap lua chon: ");
	printf("---------------------------------\n");
	scanf("%d", &choice);
	
    if (choice == 1 ) {
    	for ( int i = 0; str[i] != '\0'; i++) {
    		if(str >= 'a'&& str <= 'z'){
    			str[i] = str[i] - ('a'-'A');
			}
		}
		printf("\n Chuoi sau khi doi thanh CHU HOA: %s\n", str);
	}
    else if (choice == 2 ) {
		for ( int i = 0; str[i] != '\0'; i++){
		if (str >= 'A' && str <= 'Z') {
			str[i] = str[i] + ('a'-'A');
		    }
    	}
    	printf("\n Chuoi sau khi doi thanh chu thuong: %s\n", str);
    } 
    else {
    	printf("Lua chon khong hop le !\n");
	}
	return 0;
	
}
