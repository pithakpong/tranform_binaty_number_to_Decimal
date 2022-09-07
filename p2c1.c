#include <stdio.h> 
int main(){ 
    int i,j;   
    int check2 =0;
    unsigned long input;
    int k=0,check; 
    int tran,sum=0;  
    int two = 1;
    printf("Enter number: "); 
    scanf("%d",&input); 
   tran = input;  
   int tran2 = input;
    while(input !=0){ 
       input = input/10; 
       k++; 
    }  
     for(i=1;i<=k;i++){ 
        check = tran2%10; 
        if(check <=1) { 
            continue;
        }else{ 
            printf("Wrong value input please key type of range (0-1)"); 
            check2 = 1;
            break;
        } 
        tran2 = tran2/10;


    }  
    for(i=0;i<k;i++){  
        check = tran%10;
        sum += check*two;
        tran = tran/10; 
        two *= 2;


    }  
    if(check2 == 0) 
    { 
    printf("%d",sum);
    }
    
   
}