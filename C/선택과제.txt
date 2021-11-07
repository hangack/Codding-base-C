#include<stdio.h>
FILE*fp;
main() {
	char *name[99][8];
	int *p[6];
	int i, j, k;
	int inter[99][4], sum[99], idummy;
	double  aver[99], fdummy;

	fp = fopen("dat.txt", "r");
	for (i = 0;; i++) {
		sum[i] = 0;
		fgets(name[i], 7, fp);
		printf(name[i]);
		fscanf(fp, "%d%d%d%d%*c", &inter[i][0], &inter[i][1], &inter[i][2], &inter[i][3]);
		if (inter[i][0] == 999) break;
		for (j = 0; j < 4; j++)	if (j > 0) sum[i] += inter[i][j];
		aver[i] = sum[i] / 3.0;
	}
	fclose(fp);

	for (k = 0;; k++) {
		if (inter[k + 1][0] == 999) break;
		for (i = 0;; i++) {
			if (sum[i] > sum[i + 1]) {
				if (inter[i + 1][0] == 999) break;
				*p = *name[i];
				*name[i] = *name[i + 1];
				*name[i + 1] = *p;
				printf("%s\n", p);
				printf(name[i]);
				printf(name[i + 1]);
				for (j = 0; j < 4; j++) {
					idummy = inter[i][j]; inter[i][j] = inter[i + 1][j];  inter[i + 1][j] = idummy;
				}
				idummy = sum[i]; sum[i] = sum[i + 1]; sum[i + 1] = idummy;
				fdummy = aver[i]; aver[i] = aver[i + 1]; aver[i + 1] = fdummy;
			}
		}
	}

	printf("		성적\n");
	printf("이름   학번 국어 영어 수학 합계   평균\n");
	printf("-------------------------------------------\n");
	for (i = 0;; i++) {
		if (inter[i][0] == 999) break;
		printf("%s", name[i]);
		for (j = 0; j < 4; j++)	printf("%5d", inter[i][j]);
		printf("%5d%7.2f\n", sum[i], aver[i]);
	}
	printf("-------------------------------------------\n");
}

