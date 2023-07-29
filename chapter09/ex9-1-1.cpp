/*while文の使い方1 
#include <stdio.h>
int main(void)
{
	int i = 0;
	while (i < 10) {
		printf("この文字列は10回表示されます\n");
		printf("これは%d回目の表示です\n", i + 1);
		i++;
	}
	return 0;
}*//*do while文の使い方 */
#include <stdio.h>
int main(void)
{
	int i = 0;
	/* do-while は必ず1回(do)は実行される。whileは条件式必須 */
	do {
		printf("この文字列は10回表示されます\n");
		printf("これは%d回目の表示です\n", i + 1);
		i++;
	} while (i < 10);
	return 0;
}

