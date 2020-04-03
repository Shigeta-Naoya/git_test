// hello.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include<stdio.h>

int main()
{
	int i, sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += i + 1;
	}
	printf("sum = %d\n",sum);

    return 0;
}

