#include <stdio.h>
int main(){

    /*
        숫자가 1일때는 distacne 1
        숫자가 1< n <= 7 이면 distacne 2
        숫자가 7< n <= 19 이면 distacne 3
        숫자가 19< n <= 37 이면 distacne 4
        
        최대값 1,7,19,37의 규칙은 합이 6씩증가하는 형태이다.
        그러니 입력받은 값 n이 어떤 distance에 속하는지를 알면 된다.

        i=1 부터 시작해서,
        i=7,
        i=19 이런식으로 증가하게 되는데 i<n이 되는 순간 반복문을 빠져나와서 distacne를 출력한다.
        즉, i < n이라는 것은 해당되는 distacne 바깥에 위치한다는 뜻인 것이다.
    */


    int n,i , size =0, distance =1;
    scanf("%d", &n);

    for(int i=1;i<n;i+=size){

        distance ++;
        size += 6;
    }
    
    printf("%d\n", distance);

    return 0;
}