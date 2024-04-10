//https://wasdk.github.io/WasmFiddle/
#include<stdio.h>
int max(int a,int b){ 
	int c=a;
	if(b>a)c=b;
	return c;
}


int main(){
	int x=0;
	int xx=0;
	printf("\033[43;37m\n");
	xx=10;
	//if x < screenIn; x=screenIn
	for(x=0;x<xx*2;x++)printf("%d\n",max(x,xx));
	return 0;
}
