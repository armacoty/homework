#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

void gen(char * alpha, char *alr, int size)
{
	if (strlen(alr) == size)
    {
        int c = 0;
        for(int i = 0; i < size; i++)
            if(alr[i] == 'Y')
                c++;
        if(c > 1)
		    printf("%s\n", alr);
    }
	else
		for (unsigned int i = 0; i < strlen(alpha); i++)
        {
			char buf[256] = "";
			strcpy(buf, alr);
			strncat(buf, &alpha[i], 1);
			gen(alpha, buf, size);
		}
}

int main()
{
	printf("{ 'Y' }\nsynopsis:<size>\n");
	char alpha[256] = "YSCO";
	int size;
	scanf("%d", &size);
	gen(alpha, "", size);
	getchar();
	getchar();
	return 0;
}