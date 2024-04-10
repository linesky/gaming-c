//https://wasdk.github.io/WasmFiddle/
#include<stdio.h>
int encodeX(int a){ 
  int size=16;
  int ii=-1;
  int i[]={5,7,9,3,71,10,10,12,4,12,2,1,2,3,15,16};
  if(a>-1 && a<size){
	  ii=i[a];
  }else{ii=-1;}
  return ii;
}

int main(){
	int d=0;
	int e=0;
	printf("\033[43;37m\n");
	e=16;
	for(d=0;d<e;d++)printf("%d=%d\n",d,encodeX(d));
	return 0;
}
