Bài 1.1. Viết một chương trình C nhập vào 3 số nguyên. 
    Thiết lập một con trỏ để lần lượt trỏ tới từng số nguyên và hiển thị kết quả giá trị tham chiếu ngược của con trỏ.
    Lưu ý: Phép toán & trả về địa chỉ của biến.
For example:
Input	Result
3 4 5 
  
Enter three integers:
The three integers are:
x = 3
y = 4
z = 5
  
.......................................................................................................................
.......................................................................................................................
Bai 1.1:
#include<stdio.h>
int main(){
	int x,y,z;
	int *ptr;
	printf("Enter three integers: ");
	scanf("%d %d %d", &x, &y,&z);
	printf("\nThe three integers are: \n");
	ptr = &x;
	printf("x = %d\n",*ptr);
	ptr = &y;
	printf("y = %d\n",*ptr);
	ptr = &z;
	printf("z = %d\n",*ptr);
	
	return 0;
}
