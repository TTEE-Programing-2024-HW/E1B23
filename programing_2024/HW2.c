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
        printf("�п�J�|��Ʀr�K�X�G ");
        scanf("%d", &input);
        x++;

        if (input == password) {
            printf("�K�X���T�I�i�J�U�@�B�J\n");
            break;
        } else {
            printf("�K�X���~�I�ЦA����J\n");
        }

        if (x >= 3) {
            printf("�z�w�s��T����J���~�A�{������\n");
            return 0;
        }
    } while (1);

    

    return 0;
}
