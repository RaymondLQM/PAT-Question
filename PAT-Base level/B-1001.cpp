/*
PAT B-1001的答案, 语言：C
查看解析可以前往：www.xiaolangming.cn
*/
#include <stdio.h>
int main(void){
	int num, count;
	count = 0;
	scanf("%d", &num);
	while(num != 1){
		if(num%2 == 0)num = num / 2;
		else num = (3 * num + 1) / 2;
		count++;
	}
	printf("%d", count);
	return 0;
}
