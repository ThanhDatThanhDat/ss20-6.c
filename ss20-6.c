#include <stdio.h>

int main() {
    FILE *fileMO, *fileDong;
    char choice;  

    fileMO = fopen("bt01.txt", "r");
    if (fileMO == NULL) {
        printf("Khong the mo file bt01.txt de doc.\n");
        return 1;  
    }

    fileDong = fopen("bt06.txt", "w");
    if (fileDong == NULL) {
        printf("Khong the mo file bt06.txt de ghi.\n");
        fclose(fileMO);  
        return 1;  
    }

    while ((choice = fgetc(fileMO)) != EOF) {
        fputc(choice, fileDong);  
    }

    fclose(fileMO);
    fclose(fileDong);

    printf("da sao chep noi dung tu bt01.txt sang bt06.txt thanh cong.\n");

    return 0;
}
