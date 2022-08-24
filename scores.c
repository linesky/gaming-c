//https://wasdk.github.io/WasmFiddle/
#include <stdio.h>
int sscore=0;
int scores(int a){ 
  sscore=sscore+a;
  return sscore;
}
int main(){
	int x=0;
	int xx=16;
	int xxx=0;
	int readss=0;
	printf("\033[42;30m\n");
	for(x=0;x<xx;x++){
		xxx=scores(200);
		printf("%d\n",scores(readss));
	}
	return 0;
}
