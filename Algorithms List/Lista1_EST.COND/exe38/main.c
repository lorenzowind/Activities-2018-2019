#include <stdio.h>
#include <stdlib.h>

main()
{
    int N, A=0, B=0, C=0, D=0, E=0, F=0;

    printf("Informe um numero de ate 6 digitos: ");
    scanf("%d", &N);

    if(N>10&&N<100)
    {
        A = (N/10);
        B = (N%10);
    }
    if(N>100&&N<1000)
    {
        A = (N/100);
        B = (N%100)%10;
    }
    if(N>1000&&N<10000)
    {
        A = (N/1000);
        C = (N-((N/1000)*1000))/100;
        D = ((N-((N/1000)*1000))%100)/10;
        B = ((N-((N/1000)*1000))%100)%10;
    }
    if(N>10000&&N<100000)
    {
        A = (N/10000);
        C = (N-((N/10000)*10000))/1000;
        D = (((N-((N/10000)*10000))%1000)%100)/10;
        B = (((N-((N/10000)*10000))%1000)%100)%10;
    }
    if(N>100000&&N<1000000)
    {
        A = (N/100000);
        C = (N-((N/100000)*100000))/10000;
        E = ((N-((N/100000)*100000))%10000)/1000;
        F = (((N-((N/100000)*100000))%10000)%1000)/100;
        D = ((((N-((N/100000)*100000))%10000)%1000)%100)/10;
        B = ((((N-((N/100000)*100000))%10000)%1000)%100)%10;
    }
    if(A==B&&C==D&&E==F)
    {
        printf("Esse numero e capicua!");
    }
    if(A!=B||C!=D||E!=F)
    {
        printf("Esse numero nao e capicua!");
    }
}
