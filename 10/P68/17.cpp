#include <stdio.h>
#include <stdlib.h>

struct student
{
	char a[20];
	char b[20];
	int c;
};
// кто не понял, тот поймет
int compare(const void * a, const void * b) {
	student a1 = *(student*)a;
	student b1 = *(student*)b;
	return b1.c - a1.c;
}

void main() {
	FILE *in, *out;
	int i, n = 0, k = 1;
	student l[100];
	in = fopen("I.txt", "r");
	out = fopen("O.txt", "w");
	if (in) {
		while (!feof(in) && n < 100) {
			fscanf(in, "%s %s %d", l[n].a, l[n].b, &l[n].c);
			n++;
		}
		qsort(l, n, sizeof(student), compare);
		for (i = 0; i < n; i++) {
			if (l[i].c > 80)
				fprintf(out, "%d %c. %s %d\n", k++, l[i].b[0], l[i].a, l[i].c);
		}
	}
	else
		printf("error");
}