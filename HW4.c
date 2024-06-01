#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定義學生結構體
typedef struct {
    char name[50];
    int student_id;
    int math;
    int physics;
    int english;
    float average;
} Student;

// 學生資料陣列
Student students[10];
int student_count = 0;

// 密碼保護
int password_protection() {
    char correct_password[] = "2024";
    char password[5];
    int attempts = 0;

    while (attempts < 3) {
        printf("請輸入4個數字的密碼: ");
        scanf("%4s", password);

        if (strcmp(password, correct_password) == 0) {
            printf("歡迎！\n");
            return 1;
        } else {
            attempts++;
            printf("密碼錯誤！您還有%d次機會。\n", 3 - attempts);
        }
    }
    printf("密碼錯誤超過三次，程式結束。\n");
    return 0;
}

// 清除螢幕
void clear_screen() {
    system("cls");
}

// 主選單
void main_menu();

void enter_student_grades();
void display_student_grades();
void search_student_grades();
void grade_ranking();
int exit_system();

// 計算平均分數
float calculate_average(int math, int physics, int english) {
    return (math + physics + english) / 3.0;
}

// 主選單
void main_menu() {
    char choice;
    while (1) {
    	clear_screen();
        printf("------------[Grade System]----------\n");
        printf("    |  a. Enter student grades             |\n");
        printf("    |  b. Display student grades         |\n");
        printf("    |  c. Search for student grades    |\n");
        printf("    |  d. Grade ranking                        |\n");
        printf("    |  e. Exit system                               |\n");
        printf("------------------------------------\n");
        printf("請輸入選項: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                enter_student_grades();
                break;
            case 'b':
                display_student_grades();
                break;
            case 'c':
                search_student_grades();
                break;
            case 'd':
                grade_ranking();
                break;
            case 'e':
                if (exit_system()) {
                    return;
                }
                break;
            default:
                printf("無效的選項，請重新輸入。\n");
        }
    }
}

// 輸入學生成績
void enter_student_grades() {
    clear_screen();
    int n,i;
    printf("請輸入學生人數（5~10）: ");
    while (1) {
        scanf("%d", &n);
        if (n >= 5 && n <= 10) {
            break;
        }
        printf("請輸入5到10之間的整數: ");
    }

    for ( i = 0; i < n; i++) {
        printf("請輸入學生姓名: ");
        scanf("%s", students[student_count].name);

        while (1) {
            printf("請輸入6位數的學號: ");
            scanf("%d", &students[student_count].student_id);
            if (students[student_count].student_id >= 100000 && students[student_count].student_id <= 999999) {
                break;
            }
        }

        while (1) {
            printf("請輸入數學成績（0~100）: ");
            scanf("%d", &students[student_count].math);
            if (students[student_count].math >= 0 && students[student_count].math <= 100) {
                break;
            }
            printf("請輸入0到100之間的分數!!\n");
        }

        while (1) {
            printf("請輸入物理成績（0~100）: ");
            scanf("%d", &students[student_count].physics);
            if (students[student_count].physics >= 0 && students[student_count].physics <= 100) {
                break;
            }
            printf("請輸入0到100之間的分數!!\n");
        }

        while (1) {
            printf("請輸入英文成績（0~100）: ");
            scanf("%d", &students[student_count].english);
            if (students[student_count].english >= 0 && students[student_count].english <= 100) {
                break;
            }
            printf("請輸入0到100之間的分數!!\n");
        }

        students[student_count].average = calculate_average(students[student_count].math, students[student_count].physics, students[student_count].english);
        student_count++;
    }
    clear_screen();
}

// 顯示學生成績
void display_student_grades() {
    clear_screen();
    int i;
    if (student_count == 0) {
        printf("目前沒有學生資料。\n");
    } else {
        for ( i = 0; i < student_count; i++) {
            printf("第%d名姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均: %.1f\n", 
                i+1,students[i].name, students[i].student_id, students[i].math, students[i].physics, students[i].english, students[i].average);
        }
    }
    printf("按下任意鍵返回主選單。\n");
    getchar(); // 清除緩衝區
    getchar(); // 等待使用者輸入
    clear_screen();
}

// 搜尋學生成績
void search_student_grades() {
    clear_screen();
    char search_name[50];
    printf("請輸入要搜尋的學生姓名: ");
    scanf("%s", search_name);
    int found = 0;
    int i;

    for ( i = 0; i < student_count; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均: %.1f\n", 
                students[i].name, students[i].student_id, students[i].math, students[i].physics, students[i].english, students[i].average);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("資料不存在。\n");
    }
    printf("按下任意鍵返回主選單。\n");
    getchar(); // 清除緩衝區
    getchar(); // 等待使用者輸入
    clear_screen();
}

// 成績排名
void grade_ranking() {
    clear_screen();
    int i,j;
    if (student_count == 0) {
        printf("目前沒有學生資料。\n");
    } else {
        // 排序
        for ( i = 0; i < student_count - 1; i++) {
            for ( j = 0; j < student_count - i - 1; j++) {
                if (students[j].average < students[j + 1].average) {
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
        for ( i = 0; i < student_count; i++) {
            printf("姓名: %s, 學號: %d, 平均: %.1f\n", students[i].name, students[i].student_id, students[i].average);
        }
    }
    printf("按下任意鍵返回主選單。\n");
    getchar(); // 清除緩衝區
    getchar(); // 等待使用者輸入
    clear_screen();
}

// 離開系統
int exit_system() {
    char confirm;
    while (1) {
        printf("確定離開？ (y/n): ");
        scanf(" %c", &confirm);
        if (confirm == 'y') {
            return 1;
        } else if (confirm == 'n') {
            clear_screen();
            return 0;
        } else {
            printf("請輸入'y'或'n'。\n");
        }
    }
}
//主程式 
int main() {
    clear_screen();
    //個人風格畫面 
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
    if (password_protection()) {
        main_menu();
    }
    return 0;
}

