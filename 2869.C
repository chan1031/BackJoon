/*
#include <stdio.h>


int main() {
    int A,B,V;
    int h = 0;
    int day =0;

    scanf("%d %d %d" , &A, &B, &V); 

    while(1){
        h += A;
        day++;
        if(h >= V){
            break;
        }
        h -= B;
        
    }
    printf("%d\n",day);

return 0;
}
해당 코드로 실행하면 시간초과가 일어남
*/


/*
수학적 공식을 사용
총 V-B만큼 올라가야하므로 (V-B+1)/(A-B)+1이라는 공식이 나오게 된다.
*/


#include <stdio.h>
 
int main(){
  
  int a,b,v,d;
  scanf("%d %d %d",&a,&b,&v);

  d = ( v - b - 1) / ( a - b) +1;
  printf("%d",d);
  

return 0; 
}