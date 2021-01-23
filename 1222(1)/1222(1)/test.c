#include <stdio.h>
#include <string.h>
#define MAX 40
struct S{
	int Id;
	char Name[MAX];
	int score;
};

int main(void)
{
	struct S s = { 0 };
	FILE * pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	fscanf(pf, "%d %s %d", &s.Id, s.Name, &s.score);
	printf("%d %10s %4d", s.Id, s.Name, s.score);
	printf("\n");
	fscanf(pf, "%d %s %d", &s.Id, s.Name, &s.score);
	printf("%d %10s %4d", s.Id, s.Name, s.score);

	fclose(pf);
	pf = NULL;
	return 0;
}