#include <stdio.h>

int main(int argc, char* argv[]) {
	int cur = 0;
	while (argc - ++cur) { // iterate through the args
		printf("%s",argv[cur]); // print next arg
		if (argc - cur - 1) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
