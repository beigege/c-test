#include <stdio.h>
#include <malloc.h>

struct Student{
	char name[10];
	int age;
	int score;
};

int main(void){
	int i;
	int len;

	printf("����������struct Student����ĸ�����\n");
	scanf("%d",&len);
	//��̬��������
	struct Student * sp = (struct Student *)malloc(len * sizeof(struct Student));
	
	for(i=0;i<len;i++){
		printf("������name:\n");
		scanf("%s",sp[i].name);//name�����飬�������������ǵ�ַ�����ü�ȡ��ַ��&
		printf("������age:\n");
		scanf("%d",&sp[i].age);//Ҫ��ȡ��ַ��&
		printf("������score:\n");
		scanf("%d",&sp[i].score);
	}
	printf("����ṹ�������������:\n");
	for(i=0;i<len;i++){
		printf("name:  %s\n",sp[i].name);
		printf("age:   %d\n",sp[i].age);
		printf("score: %d\n",sp[i].score);
	}

	return 0;
}