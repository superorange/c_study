#include<stdio.h>
void testPointer() {
    int i = 10;
    int* j = &i;
    printf("%d,%d", i, j);
}
int ascii(){
    for(int i = 0;i<99;i++){
        printf("ascii origin value: %c,the number of is %d\n",i,i);
    }
    return 0;
}
int main() {
	printf("hello world");
	testPointer();
    ascii();
	return 0;
}
