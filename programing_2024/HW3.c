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
    printf("請輸入密碼: \n");// 步驟1：輸入密碼

    do {
        scanf("%d", &input);
        attempts++;

        if (input == password) {
            printf("密碼正確!\n");
            break;
        } else {
            printf("密碼錯誤,還有%d次機會\n",attempts);
        }

        if (attempts == 3) {
            printf("次數用盡,程式即將結束\n");
            return 0;
        }
    } while (1);
}
