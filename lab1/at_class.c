#include<stdio.h>
#include<math.h>
int main (){
    // ex1
    printf("Hello C programming language \n");

    //ex2
    int y = 2018;
    int m = 2;
    int d = 5;
    
    printf("Unuudur %d onii %d sariin %dnii udur\n", y, m, d);

    //ex3
    int myy = 2004;
    int mym = 12;
    int myd = 03;
    
    printf("Minii tursun udur %d onii %d sariin %dnii udur\n", myy, mym, myd);

    //ex4
    int y1;
    int m1;
    int d1;
    printf("jil = ");
    scanf("%d", &y1);
    printf("sar = ");
    scanf("%d", &m1);
    printf("jil = ");
    scanf("%d", &d1);

    
    printf("Unuudur %d onii %d sariin %dnii udur\n", y1, m1, d1);

    //ex5
    float a1,b1;
    printf("a = ");
    scanf("%f", &a1);
    printf("b = ");
    scanf("%f", &b1);

    float huvaah = a1/b1;
    float urjih = a1*b1;
    float nemeh = a1+b1;
    float hasah = a1-b1;

    printf("huvaah =%.2f\nurjih=%.2f\nnemeh =%.2f\nhasah =%.2f\n", huvaah,urjih,nemeh,hasah);

    //ex6
    int a0,b0,c0,d0;
    printf("a = ");
    scanf("%d", &a0);
    printf("b = ");
    scanf("%d", &b0);
    printf("c = ");
    scanf("%d", &c0);
    printf("d = ");
    scanf("%d", &d0);
    float tegshitgel = ((a0+b0)*(a0+b0)+d0)/c0;
    printf("tegshitgeliin hariu = %f", tegshitgel);

}

