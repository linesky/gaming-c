//https://wasdk.github.io/WasmFiddle/
#include <stdio.h>
int add(int a,int b){ 
  return a+b;
}
int main(){
	int x=0;
	int xx=16;
	int xxx=0;
	printf("\033[43;37m\n");
	for(x=0;x<xx;x++){
		xxx=add(xxx,8);
		printf("%d\n",xxx);
	}
	return 0;
}
