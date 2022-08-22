//https://wasdk.github.io/WasmFiddle/
#include<string.h>
int eeppromX(int a){ 
  int ii=0;
  int l=0;
  char i[]={"hello world...\n"};
  l=strlen(i);
  if(a>0 && a<l+1){
	  ii=(int)i[a-1];
  }else{if(a==0){
			ii=(int)l;
		}else{ii=0;}
		}
	
	
  return ii;
}
