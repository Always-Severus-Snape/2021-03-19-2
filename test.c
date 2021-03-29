#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main(){
	int choice = 0;
	printf("你会认真写代码吗? 1 表示会,0 表示不会,2表示家里有矿: ");
	scanf("%d", &choice);
	if (choice == 1){
		printf("你会拿到好offer!\n");
	}
	else{
		printf("回家卖红薯吧!\n");
	}
	// 这个代码和 if 无关,if else如果没有{}的话只有一个语句
	//建议大家把{}加上
	
	printf("回家卖红薯吧!\n");
	    
	/*else if (choice == 2){
		printf("您老开心就好\n");
	}
	else{
		printf("您的输入有误!");
	}*/

	system("pause");
	return 0;
}