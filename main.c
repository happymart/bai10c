/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on February 20, 2019, 9:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a, b ,c;
    printf("\n Nhập độ dài các cạnh : ");
    printf("a= "); scanf("%f", a);
    printf("b= "); scanf("%f", b);
    printf("c= "); scanf("%f", c);
    if(a<0||b<0||c<0){ printf("không hợp lệ\n");
    }
    if(a+b>c||a+c>b||b+c>a)
    {
        if(a==b && a=c){printf("tam giác đều\n");}
        else if(a==b && a!=c||a==c && a!=b||b==c && b!=a)
        {
            if(a*a+b*=c*c || a*a+c*c=b*b || c*c+b*b=a*a)
            {    printf("tam giác vuông cân\n");}
            else printf("tam giác cân\n");                
        }
        else
        {
            if (a*a+b*=c*c || a*a+c*c=b*b || c*c+b*b=a*a 
            && !(a==b && a!=c || a==c && a!=b || b==c && b!=a))
                printf("tam giác vuông thường");
            else printf("tam giác thường");
        }
    }
    else printf("ko tạo tam giác");

    return (EXIT_SUCCESS);
}

