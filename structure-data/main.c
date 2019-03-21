#include <stdio.h>
#include <stdlib.h>

//常量 预处理器定义常量形式
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

extern int extern_function();

void print_const() {
    printf("Const define1 is : %d\n", LENGTH * WIDTH);
    //常量  const自定义
    const int LENGHT2 = 3;
    const int WIDTH2 = 2;
    printf("Const int is : %d\n", LENGHT2*WIDTH2);
}

//函数 声明
int func();
//函数 实现
int func() {
    printf("My Function.\n");
    return 1;
}

void init_array() {
    int a[5];
    int b[3] = {1,2,3};
    int c [] = {1,2,3,4};
    for(int i = 0; i < 5 ; i++) {
        a[i] = i * 10;
    }
}

void print_array(int *param, int len) {
    int start = 0;
    while(start < len) {
        int temp = param[start];
        printf("The %d element is: %d\n",start,temp);
        start++;
    }
}

int * myFunction() {
    int r[5] = {2,3,4,5,6};
    printf("array address:%x\n",&r);
    printf("0 address:%x\n",&r[0]);
    printf("1 address:%x\n",&r[1]);

    return &r;
}

void point_array() {
    int  var[] = {10, 100, 200};
    int  i, *ptr;

    /* 指针中的数组地址 */
    ptr = var;
    for ( i = 0; i < 3; i++) {
        printf("Address of var[%d] = %x\n", i, ptr );
        printf("Value of var[%d] = %d\n", i, *ptr );
        /* 移动到下一个位置 */
        ptr++;
    }
    return 0;
}

int main() {
    printf("Hello world!\n");
    //函数 调用
    int fu = func();
    printf("Function is %d",fu);
    print_const();
    extern_function();
    init_array();
    int a[6] = {12,32,1,2,4,6};
    printf("size a:%d\n",sizeof(a));
    print_array(a,6);
    printf("f address:%x\n",&fu);
    printf("a address:%x\n",&a);
    int *p;
    p = myFunction();
    printf("return array:%x\n",&p);
    for ( int i = 0; i < 5; i++ ) {
       printf( "*(p + %d) : %d\n", i, *(p+i));
    }
    point_array();
    return 0;
}
