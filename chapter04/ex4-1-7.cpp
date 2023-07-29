﻿#include <stdio.h>

int main(void) {
	int n;
	printf("整数を入力してください \n");
	scanf("%d", &n);
	n = 1 << n;
	printf("2^nは%dです \n", n);
	return 0;
}

// シフト演算子は2進数で表記された値を指定ビット桁移動させることができる
// (7行目) n = 1 << n; は1をnビット左へ移動させる
// (例) 0001をn(1)ビット左に移動させると0010(厳密には00010)になる
//      n(1)の場合は0010で2, n(2)の場合は0100で4, n(3)の場合は1000で8