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

    system("cls");// �M���ù�����ܥD���
    
    
    printf("--------------------------\n");
    printf("->  a. �e�X�����T����   \n");
    printf("->  b. ��ܭ��k��       \n");
    printf("->  c. ����             \n");
    printf("--------------------------\n");
    
    char choice;
    char In;
    scanf("%c", &choice);//Ū�J�ҿ�J���ﶵ 
    
    if (choice == 'a' || choice == 'A') {
        system("cls");//�Y��Ja��A 
        
        printf("�п�J�r���b'a'��'n'����: \n");//�n�D��J�@�ӡ�a���졥n�����r��
        scanf("%c", &In);
        
        if (In< 'a'||In> 'n') {
            printf("���~,�п�J'a'��'n'����\n");
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
        }                             //�L�X�����T����
        
        printf("���U���N����i�^��D���\n");
        getch(); // ���ݨϥΪ̫��U���N��
        system("cls");
        
        printf("--------------------------\n");
        printf("->  a. �e�X�����T����   \n");
        printf("->  b. ��ܭ��k��       \n");
        printf("->  c. ����             \n");
        printf("--------------------------\n");

}else if (choice == 'b' || choice == 'B') {
        system("cls");//�Y��Jb��B
		
		int n;
        printf("�п�J1��9���������:\n");
        scanf("%d",&n);
		
		if (n < 1 || n > 9) {
            printf("��J���~,�п�J1��9���������\n");
            return 0;
        }
		
		for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                printf("%3d ", i * j);
            }
            printf("\n");
        }//�L�Xn*n�����k�� 
		
		printf("\n���U���N����i�^��D���\n");
        getch(); // ���ݨϥΪ̫��U���N��
        system("cls");
		
		printf("--------------------------\n");
        printf("->  a. �e�X�����T����   \n");
        printf("->  b. ��ܭ��k��       \n");
        printf("->  c. ����             \n");
        printf("--------------------------\n");
	}else if (choice == 'c' || choice == 'C') {
            printf("Continue? (y/n)\n");//�L�X�T�w�O�_�~�� 
            scanf("%c", &chara);
            
            if (chara == 'y' || chara == 'Y') {
                continue; // �^��D���
            } else if (charInput == 'n' || charInput == 'N') {
                printf("�ǳƵ����{��...\n");
                break; // �����{��
            } else {
                printf("��J���~,�п�J'y'��'n'\n");
            }
        }
        return 0;
    }
