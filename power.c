//https://wasdk.github.io/WasmFiddle/
#include<stdio.h>
int power(int a,int b){ 
	int c;
	int d;
	c=a;
	if(b>0){
		for(d=0;d<b-1;d++){
			c=c*a;
		}
	}else{c=1;}
  return c;
}

int main(){
	int x=0;
	int xx=16;
	printf("\033[43;37m\n");
	for(x=0;x<xx;x++)printf("%d^2=%d\n",x,power(2,x));
	return 0;
}

