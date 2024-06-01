#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �w�q�ǥ͵��c��
typedef struct {
    char name[50];
    int student_id;
    int math;
    int physics;
    int english;
    float average;
} Student;

// �ǥ͸�ư}�C
Student students[10];
int student_count = 0;

// �K�X�O�@
int password_protection() {
    char correct_password[] = "2024";
    char password[5];
    int attempts = 0;

    while (attempts < 3) {
        printf("�п�J4�ӼƦr���K�X: ");
        scanf("%4s", password);

        if (strcmp(password, correct_password) == 0) {
            printf("�w��I\n");
            return 1;
        } else {
            attempts++;
            printf("�K�X���~�I�z�٦�%d�����|�C\n", 3 - attempts);
        }
    }
    printf("�K�X���~�W�L�T���A�{�������C\n");
    return 0;
}

// �M���ù�
void clear_screen() {
    system("cls");
}

// �D���
void main_menu();

void enter_student_grades();
void display_student_grades();
void search_student_grades();
void grade_ranking();
int exit_system();

// �p�⥭������
float calculate_average(int math, int physics, int english) {
    return (math + physics + english) / 3.0;
}

// �D���
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
        printf("�п�J�ﶵ: ");
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
                printf("�L�Ī��ﶵ�A�Э��s��J�C\n");
        }
    }
}

// ��J�ǥͦ��Z
void enter_student_grades() {
    clear_screen();
    int n,i;
    printf("�п�J�ǥͤH�ơ]5~10�^: ");
    while (1) {
        scanf("%d", &n);
        if (n >= 5 && n <= 10) {
            break;
        }
        printf("�п�J5��10���������: ");
    }

    for ( i = 0; i < n; i++) {
        printf("�п�J�ǥͩm�W: ");
        scanf("%s", students[student_count].name);

        while (1) {
            printf("�п�J6��ƪ��Ǹ�: ");
            scanf("%d", &students[student_count].student_id);
            if (students[student_count].student_id >= 100000 && students[student_count].student_id <= 999999) {
                break;
            }
        }

        while (1) {
            printf("�п�J�ƾǦ��Z�]0~100�^: ");
            scanf("%d", &students[student_count].math);
            if (students[student_count].math >= 0 && students[student_count].math <= 100) {
                break;
            }
            printf("�п�J0��100����������!!\n");
        }

        while (1) {
            printf("�п�J���z���Z�]0~100�^: ");
            scanf("%d", &students[student_count].physics);
            if (students[student_count].physics >= 0 && students[student_count].physics <= 100) {
                break;
            }
            printf("�п�J0��100����������!!\n");
        }

        while (1) {
            printf("�п�J�^�妨�Z�]0~100�^: ");
            scanf("%d", &students[student_count].english);
            if (students[student_count].english >= 0 && students[student_count].english <= 100) {
                break;
            }
            printf("�п�J0��100����������!!\n");
        }

        students[student_count].average = calculate_average(students[student_count].math, students[student_count].physics, students[student_count].english);
        student_count++;
    }
    clear_screen();
}

// ��ܾǥͦ��Z
void display_student_grades() {
    clear_screen();
    int i;
    if (student_count == 0) {
        printf("�ثe�S���ǥ͸�ơC\n");
    } else {
        for ( i = 0; i < student_count; i++) {
            printf("��%d�W�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, ����: %.1f\n", 
                i+1,students[i].name, students[i].student_id, students[i].math, students[i].physics, students[i].english, students[i].average);
        }
    }
    printf("���U���N���^�D���C\n");
    getchar(); // �M���w�İ�
    getchar(); // ���ݨϥΪ̿�J
    clear_screen();
}

// �j�M�ǥͦ��Z
void search_student_grades() {
    clear_screen();
    char search_name[50];
    printf("�п�J�n�j�M���ǥͩm�W: ");
    scanf("%s", search_name);
    int found = 0;
    int i;

    for ( i = 0; i < student_count; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, ����: %.1f\n", 
                students[i].name, students[i].student_id, students[i].math, students[i].physics, students[i].english, students[i].average);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("��Ƥ��s�b�C\n");
    }
    printf("���U���N���^�D���C\n");
    getchar(); // �M���w�İ�
    getchar(); // ���ݨϥΪ̿�J
    clear_screen();
}

// ���Z�ƦW
void grade_ranking() {
    clear_screen();
    int i,j;
    if (student_count == 0) {
        printf("�ثe�S���ǥ͸�ơC\n");
    } else {
        // �Ƨ�
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
            printf("�m�W: %s, �Ǹ�: %d, ����: %.1f\n", students[i].name, students[i].student_id, students[i].average);
        }
    }
    printf("���U���N���^�D���C\n");
    getchar(); // �M���w�İ�
    getchar(); // ���ݨϥΪ̿�J
    clear_screen();
}

// ���}�t��
int exit_system() {
    char confirm;
    while (1) {
        printf("�T�w���}�H (y/n): ");
        scanf(" %c", &confirm);
        if (confirm == 'y') {
            return 1;
        } else if (confirm == 'n') {
            clear_screen();
            return 0;
        } else {
            printf("�п�J'y'��'n'�C\n");
        }
    }
}
//�D�{�� 
int main() {
    clear_screen();
    //�ӤH����e�� 
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

