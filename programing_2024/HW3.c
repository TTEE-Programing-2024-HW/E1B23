#include <stdio.h>



int main(){
	
	int password = 2024;
    int input;
    int attempts = 0;
	
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
    printf("�п�J�K�X: \n");// �B�J1�G��J�K�X

    do {
        scanf("%d", &input);
        attempts++;

        if (input == password) {
            printf("�K�X���T!\n");
            break;
        } else {
            printf("�K�X���~,�٦�%d�����|\n",attempts);
        }

        if (attempts == 3) {
            printf("���ƥκ�,�{���Y�N����\n");
            return 0;
        }
    } while (1);
}
