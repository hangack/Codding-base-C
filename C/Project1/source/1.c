#include<stdio.h>
main() {
	struct sungjug {
		int no;
		char* name;
		int total;
		float avg;
	};

	struct sungjug student[] = { {10, "±èÇÏ³ª",250,83.3} };		
	//no + name + total + avg = 2int + 1string + 1float 
	//= 12byte + xbyte(string)

	printf("%d", student[0].no);
	printf("%10s", student[0].name);
	printf("%8d", student[0].total);
	printf("%10.1f\n", student[0].avg);
}