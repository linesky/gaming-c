//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
#define l 512
int i[l+2];
int stackPoint=0;
int stacks(int value,int pushPopRead){ 
  int ii=0;
if(pushPopRead==0){
	if(stackPoint<l){
		i[stackPoint]=value;
		stackPoint++;
		ii=value;
	}else{
		ii=-1;
	}
}else{
	if(pushPopRead==1){
			if(stackPoint>0){
				stackPoint--;
			ii=i[stackPoint];
	}else{
		ii=-1;
	}
}else{
	if(pushPopRead==2){
		ii=i[stackPoint];
	}
}
	
}	
  return ii;

}

int main(){
	int d=0;
	int v=0;
	int pushs=0;
	int pops=1;
	int read=2;
	int sizes=255;
	printf("\033[44;37m\n");
	for(d=0;d<sizes;d++)stacks(d,pushs);
	for(d=0;d<sizes;d++){
		v=stacks(d,pops);
		if(v!=254-d)puts("error--------------");
		printf("%d\n",v);
	}
	
}
