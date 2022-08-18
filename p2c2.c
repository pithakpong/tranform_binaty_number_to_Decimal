#include <stdio.h> 
int main(){ 
    int i,input,check;
    int two =1,sum=0; 
    printf("Enter number: "); 
    scanf("%d",&input);
    while(input !=0){ 
        check = input%10;
        if(check <=1){ 
            sum += check*two;
        }
        else{ 
            printf("Wrong value input please key type of range (0-1)");
            break;
        }
        input = input/10;
        two *= 2;
    } 
    if(check <= 1){ 
        printf("%d",sum);
    }
}