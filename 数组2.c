#include<stdio.h>
#include<string.h>
int main()
{
	//数组类型-数组名-数组长度 - 数组元素
	//  int     arr    [10]    ={1,2,3};//不完全初始化，剩下的元素默认初始化为零
	//char arr2[10]={'a','b','c'};
	//char arr3[10]="abc";//不完全初始化，内存中存放的结果为：'a','b','c','\0','0','0','0','0','0','0'
	//char arr4[] = "abcdef";
	//printf("%d  ", sizeof(arr4));
	//sizeof计算arr4所占的空间大小
	//7个元素'a','b','c','d','e','f','\0' 在'\0'后停止计数--char类型占一个字节--一共占7*1=7个字节
	//printf("%d\n", strlen(arr4));
	//strlen()函数求字符串的长度--'\0'之前的字符个数

	char arr5[] = "abc";			//arr5:'a','b','c','\0'
	char arr6[] = { 'a','b','c' };	//arr6:'a','b','c'
	int arr7[] = {1234};
	int arr8[] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%d  ", sizeof(arr5));//正确答案：4
	printf("%d  ", sizeof(arr6));//正确答案：3
	printf("%d  ", sizeof(arr7));//正确答案：4
	printf("%d\n", sizeof(arr8));//正确答案：40

	printf("%d  ", strlen(arr5));//正确答案：3
	printf("%d  ", strlen(arr6));//正确答案：随机值  **strlen在\0前停止计数**
	printf("%d  ", strlen(arr7));//正确答案：无 语法错误
	printf("%d\n", strlen(arr8));//正确答案：无 语法错误

	return 0;
}


//1.strlen和sizeof没有什么关联
//2.strlen 是求字符串长度的 - 只能针对字符串求长度 - 是库函数,使用需要引头文件
//3.sizeof 计算变量、数组、类型的大小 - 单位是字节 - 是操作符


// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char arr[]="abcdef";
// 	int i;
// 	for(i=0;i<strlen(arr);i++)
// 	{
// 		printf("&arr[%d]=%p\n",i,&arr[i] );//打印每个元素的地址, %p 后面的参数要加 & 取地址符
// 	}
//  	return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	int i,j;
// 	int arr1[3][4]={{1,2,3},{4,5}};//3行4列的一个二维数组
// 	int arr2[3][4]={1,2,3,0,4,5,0,0,0,0,0,0};//等价于上面的数组
//  //二维数组的 行 可以省略，列 千万不能省略！
// 	// 1 2 3 0
// 	// 4 5 0 0
// 	// 0 0 0 0
// 	for(i=0;i<3;i++)
// 	{
// 		for(j=0;j<4;j++)
// 		{
// 			printf("%d ", arr1[i][j]);
// 		}	
// 		printf("\n");
// 	}
// 	printf("\n");
// 	for(i=0;i<3;i++)
// 	{
// 		for(j=0;j<4;j++)
// 		{
// 			printf("%d ", arr2[i][j]);
// 		}	
// 		printf("\n");
// 	}
// 	return 0;
// }



// #include<stdio.h>
// int main()
// {
// 	int arr[]={1,2,3,4,5,6,7};
// 	printf("%p\n", arr);		//数组名其实就是首元素的地址
// 	printf("%p\n", &arr[0]);	// %p 取地址的时候，后面变量要加上 & 取地址符
// 	//printf("%p\n", arr[0]);		//千万别打错了！
// 	printf("%d\n", *arr);
// 	return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	int arr[]={1,2,3,4,5,6,7};

// 	printf("%p\n", arr);//两个地址相差4
// 	printf("%p\n", arr+1);

// 	printf("%p\n", &arr[0]);//两个地址相差4
// 	printf("%p\n", &arr[0]+1);

// 	printf("%p\n", &arr);//两个地址相差28，跳过了整个数组
// 	printf("%p\n", &arr+1);
// 	//除了👆 👇这两种情况外,其他所有数组名都是表示数组首元素--sizeof(arr)和&arr中的数组名表示整个数组
// 	printf("%d\n", sizeof(arr) );//一个数组总字长28字节


// 	return 0;
// }