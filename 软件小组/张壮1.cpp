#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i1,j1,k1,i2,j2,k2,i3,j3,k3,i4,j4,k4,m4,n4;
	printf("\n");
	for(i1=1;i1<6;i1++)   /*��������ǵ�����һ����*/
 	 {for(j1=1;j1<19-i1;j1++)/*���ǿո�*/
	    printf(" ");
	  for(k1=1;k1<=2*i1-1;k1++) /*���ǡ�*��*/
	    printf("*");
	    printf("\n");
	 }
	 
    for(i2=1;i2<5;i2++) /*��������ǵ��м�������*/
     { for(j2=1;j2<3*i2-3;j2++)
          printf(" ");
       for(k2=1;k2<=42-6*i2;k2++)
           printf("*");
           printf("\n");
     }
     
    for(i3=1;i3<3;i3++) /*�����м����²���ӵĲ���*/
     { for(j3=1;j3<12-i3;j3++)
         printf(" ");
       for(k3=1;k3<=12+2*i3;k3++)
       printf("*");
       printf("\n");
      }
      
     for(i4=1;i4<5;i4++) /*��������ǵ�����������*/
      { for(j4=1;j4<10-i4;j4++)
        printf(" ");
        for(k4=1;k4<=10-2*i4;k4++)
        printf("*");
          for(m4=1;m4<6*i4-3;m4++)
          printf(" ");
         for(n4=1;n4<=10-2*i4;n4++)
         printf("*");
         printf("\n");
     }
printf("����һ�������\n");
getchar(); 

}
