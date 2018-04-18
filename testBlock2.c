#include "stdio.h"
int main(){
    
    int a = 10;
	void (^block)(void) = ^{

        printf("%d",a);
		printf("test block\n");

	};
	block();
	return 0;
}
