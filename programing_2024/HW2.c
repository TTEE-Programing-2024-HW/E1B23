#include <stdio.h>
#include <conio.h>

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

    system("cls");// 清除螢幕並顯示主選單
    
    
    printf("--------------------------\n");
    printf("->  a. 畫出直角三角形   \n");
    printf("->  b. 顯示乘法表       \n");
    printf("->  c. 結束             \n");
    printf("--------------------------\n");
    
    char choice;
    char In;
    scanf("%c", &choice);//讀入所輸入的選項 
    
    if (choice == 'a' || choice == 'A') {
        system("cls");//若輸入a或A 
        
        printf("請輸入字元在'a'到'n'之間: \n");//要求輸入一個‘a’到‘n’的字元
        scanf("%c", &In);
        
        if (In< 'a'||In> 'n') {
            printf("錯誤,請輸入'a'到'n'之間\n");
            return 0;
        }
        
        for (char c='a';c<=In;c++) { 
            for (int spaces=In-c;spaces>0;spaces--) {
                printf(" ");
            }
            for (char ch='a';ch<=c;ch++) {
                printf("%c", ch);
            }
            printf("\n");
        }                             //印出直角三角形
        
        printf("按下任意按鍵可回到主選單\n");
        getch(); // 等待使用者按下任意鍵
        system("cls");
        
        printf("--------------------------\n");
        printf("->  a. 畫出直角三角形   \n");
        printf("->  b. 顯示乘法表       \n");
        printf("->  c. 結束             \n");
        printf("--------------------------\n");

}else if (choice == 'b' || choice == 'B') {
        system("cls");//若輸入b或B
		
		int n;
        printf("請輸入1到9之間的整數:\n");
        scanf("%d",&n);
		
		if (n < 1 || n > 9) {
            printf("輸入錯誤,請輸入1到9之間的整數\n");
            return 0;
        }
		
		for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                printf("%3d ", i * j);
            }
            printf("\n");
        }//印出n*n的乘法表 
		
		printf("\n按下任意按鍵可回到主選單\n");
        getch(); // 等待使用者按下任意鍵
        system("cls");
		
		printf("--------------------------\n");
        printf("->  a. 畫出直角三角形   \n");
        printf("->  b. 顯示乘法表       \n");
        printf("->  c. 結束             \n");
        printf("--------------------------\n");
	}else if (choice == 'c' || choice == 'C') {
            printf("Continue? (y/n)\n");//印出確定是否繼續 
            scanf("%c", &chara);
            
            if (chara == 'y' || chara == 'Y') {
                continue; // 回到主選單
            } else if (charInput == 'n' || charInput == 'N') {
                printf("準備結束程式...\n");
                break; // 結束程式
            } else {
                printf("輸入錯誤,請輸入'y'或'n'\n");
            }
        }
        return 0;
    }
