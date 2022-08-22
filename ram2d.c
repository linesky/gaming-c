//https://wasdk.github.io/WasmFiddle/
#include<string.h>
  #define xx 8
  #define yy 8
  int i[xx*yy+2];
int ram2d(int x,int y,int writes,int value){ 
  int ii=0;
  int l=xx*yy;
  int indexs=0;
  indexs=x+(y*xx);
  if(indexs>1 && indexs<l+2){
	  if(writes!=0)i[indexs-2]=value;

	  ii=(int)i[indexs-2];
  }else{if(indexs==0){
			ii=xx;
		}else{
			if(indexs==1){
			ii=yy;
				
			}
		}}
	
	
  return ii;
}


