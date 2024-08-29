#include <iostream>
#include <unistd.h>

int main(){
	int i = 0;
	while(1){
		std::cout << "main: " << i <<std::endl ;
		i++;
		sleep(1);
	}
	return 0;
}
