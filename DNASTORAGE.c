#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        char b[a];
        int i;
        scanf("%s",b);
        for(i=0;i<a;i+=2){
            if(b[i]=='0' && b[i+1]=='0'){
                printf("A");
            
            }
            else if(b[i]=='0' && b[i+1]=='1'){
                printf("T");
                
                
            }
            else if(b[i]='1' && b[i+1]=='0'){
                printf("C");
                
            }
            else{
                printf("G");
            }
            
            
        }
         printf("\n");
    }
   return 0; 
}
