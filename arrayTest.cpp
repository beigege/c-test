#include <stdio.h>
#include <malloc.h>

int main(void){
	int arr1[5]={1,2,3,4,5};
	int * arrp;
	int i;
	int len;

	printf("����arr1�ĵ�ַ����������ʽ��ȡ��%d\n",arr1);
	printf("����arr1�ĵ�ַ�������һ��Ԫ�ص�ַ��ȡ��%d\n",&arr1[0]);

	for(i=0;i<5;i++){
		printf("arr[i]��ʽ��ȡ����Ԫ��ֵ:%d\n",arr1[i]);
	}
	for(i=0;i<5;i++){
		printf("*(arr+i)��ʽ��ȡ����Ԫ��ֵ:%d\n",*(arr1+i));
	}

	arrp=arr1;
	printf("����arr1�ĵ�ַ��ָ�뷽ʽ��ȡ��%d\n",arrp);
	for(i=0;i<5;i++){
		printf("ָ�뷽ʽ��ȡ����Ԫ��ֵ:%d\n",*(arrp+i));
	}

	printf("�����붯̬����ĳ��ȣ�\n");
	scanf("%d",&len);
	arrp=(int *)malloc(4*len);
	for(i=0;i<len;i++){
		printf("�����붯̬�����Ԫ�أ�\n");
		scanf("%d",&arrp[i]);
	}
	for(i=0;i<len;i++){
		printf("ָ�뷽ʽ��ȡ����Ԫ��ֵ:%d\n",*(arrp+i));
	}

	return 0;
}