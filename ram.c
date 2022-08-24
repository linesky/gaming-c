//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
#define l 512
int i[l+2];
int ram(int a,int writes,int value){ 
  int ii=0;
  if(a>0 && a<l+1){
	  if(writes!=0)i[a-1]=value;
	  ii=(int)i[a-1];
  }else{if(a==0){
			ii=(int)l;
		}else{ii=0;}
		}
	
	
  return ii;
}

int main(){
	int d=0;
	int v=0;
	int sizes=ram(0,0,0);
	printf("\033[42;30m\n");
	for(d=0;d<sizes;d++)ram(d+1,1,d);
	for(d=0;d<sizes;d++){
		v=ram(d+1,0,0);
		if(v!=d)puts("error--------------");
		printf("%d=%d\n",d,v);
	}
	
}
