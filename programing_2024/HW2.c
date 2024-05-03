#include <stdio.h>

int main() {
    int password = 2024;
    int input;
    int x = 0;

    printf("*                  \n");
    printf("**                 \n");
    printf("***                \n");
    printf("****               \n");
    printf("*****              \n");
    printf(" *****             \n");
    printf("  *****            \n");
    printf("   *****           \n");
    printf("    *****          \n");
    printf("     *****         \n");
    printf("      *****        \n");
    printf("       *****       \n");
    printf("        *****      \n");
    printf("         *****     \n");
    printf("          *****    \n");
    printf("           *****   \n");
    printf("            *****  \n");
    printf("             ***** \n");
    printf("              *****\n");
    printf("               ****\n");
    printf("                ***\n");
    printf("                 **\n");
    printf("                  *\n");

    do {
        printf("請輸入四位數字密碼： ");
        scanf("%d", &input);
        x++;

        if (input == password) {
            printf("密碼正確！進入下一步驟\n");
            break;
        } else {
            printf("密碼錯誤！請再次輸入\n");
        }

        if (x >= 3) {
            printf("您已連續三次輸入錯誤，程式結束\n");
            return 0;
        }
    } while (1);

    

    return 0;
}
