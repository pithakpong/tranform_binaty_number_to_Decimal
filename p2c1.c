#include <stdio.h> 
int main(){ 
    int i,j;   
    unsigned long input;
    int k=0,check; 
    int tran,sum=0;  
    int two = 1;
    printf("Enter number: "); 
    scanf("%d",&input); 
   tran = input;  
    while(input !=0){ 
       input = input/10; 
       k++; 
    }  
     for(i=1;i<=k;i++){ 
        check = input%10; 
        if(check <=1) { 
            continue;
        }else{ 
            printf("this value was wrong"); 
            break;
        } 
        input = input/10;


    } 
    for(i=0;i<k;i++){  
        check = tran%10;
        sum += check*two;
        tran = tran/10; 
        two *= 2;


    }  
    printf("%d",sum);
   
}