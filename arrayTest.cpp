#include <stdio.h>
#include <malloc.h>

int main(void){
	int arr1[5]={1,2,3,4,5};
	int * arrp;
	int i;
	int len;

	printf("数组arr1的地址，数组名方式获取：%d\n",arr1);
	printf("数组arr1的地址，数组第一个元素地址获取：%d\n",&arr1[0]);

	for(i=0;i<5;i++){
		printf("arr[i]方式获取数组元素值:%d\n",arr1[i]);
	}
	for(i=0;i<5;i++){
		printf("*(arr+i)方式获取数组元素值:%d\n",*(arr1+i));
	}

	arrp=arr1;
	printf("数组arr1的地址，指针方式获取：%d\n",arrp);
	for(i=0;i<5;i++){
		printf("指针方式获取数组元素值:%d\n",*(arrp+i));
	}

	printf("请输入动态数组的长度：\n");
	scanf("%d",&len);
	arrp=(int *)malloc(4*len);
	for(i=0;i<len;i++){
		printf("请输入动态数组的元素：\n");
		scanf("%d",&arrp[i]);
	}
	for(i=0;i<len;i++){
		printf("指针方式获取数组元素值:%d\n",*(arrp+i));
	}

	return 0;
}