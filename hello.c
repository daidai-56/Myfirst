#include <stdio.h>

int main() {
    int number1, number2, sum;

    // 获取用户输入的两个整数
    printf("请输入两个整数：");
    scanf("%d %d", &number1, &number2);

    // 计算和
    sum = number1 + number2;

    // 打印结果
    printf("两个数的和是：%d\n", sum);

    return 0;
}