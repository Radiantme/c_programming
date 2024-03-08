#include<stdio.h>


int main()
{
	int a = 5, b = 7;
	printf("a: %d\tb: %d\n",a,b); 

	/********USING TEMP. VARIABLE*********/

	int temp;
	temp =a;
	a = b;
	b = temp;
	printf("a: %d\tb: %d\n",a,b);

	/************** (METHOD_1_using_+/-) ***********************
	  a += b;printf("a:%d\t",a);

	  b = a-b;printf("b:%d\t",b);

	  a = a - b;printf("a:%d\n",b);

	  printf("a: %d\tb: %d\n",a,b); 
	 *************** (METHOD_2_using_*&/)************************
	 a *= b;
	 b = a/b;
	 a /= b;
	 printf("a: %d\tb: %d\n",a,b); 	  
	 *************** (METHOD_3_using_^_operator)***************

	//a = 5 = 0101,  b = 7 = 0111

	a = a ^ b;printf("a:%d\t",a);	//2 ---> 0010
	b = a ^ b;printf("a:%d\t",b);	//5 ---> 0101
	a = a ^ b;printf("a:%d\n",a);	//7 ---. 0111

	printf("a: %d\tb: %d\n",a,b); 	  
	 */

}
