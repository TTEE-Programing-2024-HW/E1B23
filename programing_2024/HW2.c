#include <stdio.h>
#include <conio.h>

int main() {
    int password = 2024;
    int input;
    int spaces;
    int i,j;
    int attempts = 0;
    char charInput;
    char c;
    char ch;

    
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

    while (1) {
        // 步驟2：顯示主選單
        system("cls");
        // system("cls"); // Windows

        printf("--------------------------\n");
        printf("->  a. 畫出直角三角形     \n");
        printf("->  b. 顯示乘法表         \n");
        printf("->  c. 結束               \n");
        printf("--------------------------\n");

        char choice;
        scanf(" %c", &choice);

        if (choice == 'a' || choice == 'A') {
            // 步驟3：輸入字元顯示直角三角形
            system("cls");
            // system("cls"); // Windows

            printf("請輸入a到n之間的字元:\n");
            scanf(" %c", &charInput);

            if (charInput < 'a' || charInput > 'n') {
                printf("輸入錯誤,請輸入a到n之間的字元\n");
                getch();
                scanf(" %c", &charInput);
            }

            for ( i = 0; i < charInput - 'a' + 1; i++) {
                for ( j = charInput - 'a'; j > i; j--) {
                    printf(" ");
                }
                for ( ch = charInput -i; ch <= charInput; ch++) {
                    printf("%c", ch);
                }
                printf("\n");
            }

            printf("\n按下任何鍵以返回主選單\n");
            getch(); // 等待使用者按下任意鍵
        } else if (choice == 'b' || choice == 'B') {
            // 步驟4：輸入整數n顯示乘法表
            system("cls");
            // system("cls"); // Windows

            int n;
            printf("請輸入1到9之間的整數:\n");
            scanf("%d", &n);

            if (n < 1 || n > 9) {
                printf("輸入錯誤,請輸入1到9之間的整數\n");
                getch();
                scanf("%d", &n);
            }

            
            for ( i = 1; i <= n; i++) {
                for ( j = 1; j <= n; j++) {
                    printf("%d*%d=%3d ",i,j, i * j);
                }
                printf("\n");
            }

            printf("\n按下任何鍵以返回主選單\n");
            getch(); // 等待使用者按下任意鍵
        } else if (choice == 'c' || choice == 'C') {
            // 步驟5：詢問是否繼續
            system("cls");
            // system("cls"); // Windows

            printf("是否要繼續程式? (y/n)\n");
            scanf(" %c", &charInput);

            if (charInput == 'y' || charInput == 'Y') {
                continue; // 回到主選單
            } else if (charInput == 'n' || charInput == 'N') {
                printf("結束程式\n");
                break; // 結束程式
            } else {
                printf("輸入錯誤,請輸入y或n\n");
                getch();
                continue;
            }
        } else {
            printf("輸入錯誤,請輸入a或b或c\n");
            getch();
        }
    }

    return 0;
}
