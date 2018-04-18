#include "stdio.h"
int main(){

	void (^block)(void) = ^{

		printf("test block\n");

	};
	block();
	return 0;
}
