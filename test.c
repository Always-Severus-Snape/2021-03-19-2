#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main(){
	int choice = 0;
	printf("�������д������? 1 ��ʾ��,0 ��ʾ����,2��ʾ�����п�: ");
	scanf("%d", &choice);
	if (choice == 1){
		printf("����õ���offer!\n");
	}
	else{
		printf("�ؼ��������!\n");
	}
	// �������� if �޹�,if else���û��{}�Ļ�ֻ��һ�����
	//�����Ұ�{}����
	
	printf("�ؼ��������!\n");
	    
	/*else if (choice == 2){
		printf("���Ͽ��ľͺ�\n");
	}
	else{
		printf("������������!");
	}*/

	system("pause");
	return 0;
}