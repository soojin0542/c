#include <Windows.h>
#include <stdio.h>

/*
int main() {

    // 샘플 문제1)  9의 배수중  일의 자리가 6인 첫번째 배수 출력
    // 답 : 36

   //  샘플 정답1)
    int  i = 0;
    while (i < 1000) {
        if (i % 10 == 6 && i % 9 == 0) {
            printf("%d", i);
            i = 1000;

        }
        i += 1;
    }


    return 0;
}
*/

int main() {
    // 문제2)  9의 배수중 십의 자리가 6인 첫번째 배수 출력 
/*
    //답 : 63
    int  i = 0;
    while (i < 1000) {
        if (i / 10 == 6 && i % 9 == 0) {
            printf("%d", i);
            i = 1000;

        }
        i += 1;
    }
*/

// 문제3) 8로 나누면 5가 남는수 중 150보다 작으면서
// 150에 가장 가까운수를 구하세요.
/*
    // 답 149
    int a = 0;
    int su = 0;
    while (a <= 150) {
        if (a % 8 == 5 && a <= 150) {
            su = a;
        }
        a += 1;
    }
    printf("%d", su);
*/


// 문제4) 50에서 100까지 자연수중에서 9의 배수는 모두 몇개입니까?
/*
// 답 6 (54, 63, 72, 81, 90, 99)
    int b = 50;
    int su1 = 0;
    while (50 <= b && b <= 100) {
        if (b % 9 == 0) {
            su1 += 1;
        }
        b += 1;
    }
    printf("%d개", su1);
*/


    // 문제5) 28의 배수 중에서 가장 큰 세자리 수를 구하시오.
/*
    // 답 980
    int c = 0;
    int su2;
    while (c < 1000) {
        if (c % 28 == 0) {
            su2 = c;
        }
        c += 1;
    }
    printf("%c", su2);
*/


//문제6) 8의 배수를 작은수부터 5개 출력

    // 답 : 0, 8, 16, 24, 32
    int d = 0;
    int su3 = 0;
    while (0 <= d && d < 100) {
        if (d % 8 == 0) {
            su3 += 1;
            printf("%d", d); printf("\n");
        }
        if (su3 == 5) {
            break;
        }
        d += 1;
    }

}