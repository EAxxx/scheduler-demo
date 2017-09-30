#include <stdio.h>

int main()
{
	int a[5];
	int n;

	scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

	for (int i = 1; i <= n; i++)
	{
		int exec_task = 0;
		for (int task = 0; task < 5; task++)
		{
			if ((i % a[task]) == 0)
			{
				exec_task = 1;
				printf("%d", task);
			}
		}
		if (exec_task)
		{
			printf("\n");
		}
		else
		{
			printf("-\n");
		}
	}
	return 0;
}
