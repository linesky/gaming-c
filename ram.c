//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#define l 512
char i[l+2];
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


