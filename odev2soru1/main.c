#include <stdio.h>
#include <windows.h>

int main() {
    char ch;
    int i;
    int yon = 1;
    int konum = 0;

    printf("Bir karakter giriniz: ");
    scanf("%c", &ch);

    while(1) {
        for(i = 0; i < konum; i++) {
            printf(" ");
        }

        printf("%c\n", ch);
        Sleep(10);

        konum += yon;
        if(konum == 30 || konum == 0) {
            yon = -yon;
        }
    }

    return 0 ;
}
