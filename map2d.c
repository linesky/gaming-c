//https://wasdk.github.io/WasmFiddle/
#include<string.h>
#include<stdio.h>
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


int main(){
	int x=0;
	int y=0;
	int dx=0;
	int dy=0;
	x=map2d(0,0);
	y=map2d(0+1,0);
	printf("\033[43;37m\n");
		for(dy=0;dy<y;dy++){
			for(dx=0;dx<x;dx++){
				putc(map2d(dx+2,dy),stdout);
			}
		}
}
