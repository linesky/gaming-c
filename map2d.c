//https://wasdk.github.io/WasmFiddle/
#include<string.h>
int map2d(int x,int y){ 
  int ii=0;
  int l=0;
  int indexs=0;
  int xx=8;
  int yy=8;
  //       0        1        2        3        4        5        6         7         
  //      "01234567 01234567 01234567 01234567 01234567 01234567 012345670 01234567
  char *i="   ..  \n  .  . \n  .  . \n  .  . \n  .  . \n  .... \n  .  . \n  .  . \n";
  l=strlen(i);
  indexs=x+(y*xx);
  if(indexs>1 && indexs<l+2){
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



