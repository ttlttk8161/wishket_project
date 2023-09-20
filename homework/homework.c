#include <stdio.h>
#include "homework.h"
#include <stdlib.h>

void main(){
    int N; // 물품의 수 (1<= N <= 100)
    int K; // 버틸수있는 무게 (1<=K<=100,000)
    int W; // (1 <= W<= 100,000)
    int V; // (0 <= V <= 1,000)
    int TDA[100000][2];
    check_N_K(&N,&K);
    // N =5 일떄, 총 개의 줄에 거러쳐 5개의 물품이 
    take_Value(&N,TDA);

    caculate_Max(TDA, K);
}

void check_N_K(int* N, int* K){
    scanf(" %d %d", N, K);
    if((*N < 1 || *N > 100) || (*K < 1 || *K > 100000))
        check_N_K( N, K);
}

void take_Value(int* LN, int (*TDA)[2]){
    int j = 0;
    for(; j < *LN; j++){
        int temp_a = 0;
        int temp_b = 0;
        scanf(" %d %d", &temp_a, &temp_b);
        TDA[j][0] = temp_a; //무게
        TDA[j][1] = temp_b; // 가치
        if((TDA[j][0] < 1 || TDA[j][0] > 100000)  || (TDA[j][1] < 0 || TDA[j][1] > 1000))
           take_Value( LN, TDA);
    }
}

void caculate_Max(int (*TDA)[2], int PossApplyWei ){
    // apply Knapsack Algorithm and Dynamic Programming
    // 1순위: 무게랑 수용가능무게만 고려 
    // 2순위: 가치를 비교
    // TDA[0][0], TDA[1][0], TDA[2][0], TDA[3][0]
    // 

}