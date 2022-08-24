//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
#define l 512
#define rr 2
int i[l*rr+2];
int ram2value(int a,int writes,int value,int registers){ 
  int ii=0;
  int aa=a*rr+registers;
  if(aa>0 && aa<l*rr+2){
	  if(writes!=0)i[aa-1]=value;
	  ii=(int)i[aa-1];
  }else{if(aa==0){
			ii=(int)l;
		}else{ii=0;}
		}
	
	
  return ii;
}

int main(){
	int d=0;
	int v=0;
	int dd=0;
	int sizes=ram2value(0,0,0,0);
	printf("\033[42;30m\n");
	printf("%d\n",sizes);
	
	for(d=0;d<sizes;d++)for(dd=0;dd<2;dd++)ram2value(d+1,1,d*2+dd,dd);

	for(d=0;d<sizes;d++){
		for(dd=0;dd<2;dd++){
			v=ram2value(d+1,0,0,dd);
			if(v!=d*2+dd)puts("error--------------");
			printf("%d,%d=%d\n",d,dd,v);
		}
	}

}
