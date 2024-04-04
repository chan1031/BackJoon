#include <stdio.h>


int main() {
    //n번째 값을 받아옴
    int n;
    scanf("%d", &n);
    int k=1;
    
    //입력받은 값이 몇번쨰 행인지 검사
    while(1){
        if((k-1)*k/2 < n && n<= k*(k+1)/2){
            break;
        }
        k++;
    }

    int index = k*(k+1)/2;
    //몇번째 값에 위치하는가?
    
    //홀수 일경우
    if(k%2 != 0){
        printf("%d", index-n+1);
        printf("/");
        printf("%d", k-(index-n));

    }else{
        //짝수일경우
        printf("%d", k-(index-n));
        printf("/");
        printf("%d", index-n+1);
    }


return 0;
}