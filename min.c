//https://wasdk.github.io/WasmFiddle/
#include <stdio.h>
int min(int a,int b){ 
	int c=a;
	if(b<a)c=b;
	return c;
}

int main(){
	int x=0;
	int xx=0;
	printf("\033[42;30m\n");
	xx=10;
	//if x > screenIn; x=screenIn
	for(x=0;x<xx*2;x++)printf("%d\n",min(x,xx));
	return 0;

}
