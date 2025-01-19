
#include<stdio.h>
int main(){
int arr[5][5],i,j,c=0;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        scanf("%d",&arr[i][j]);
        if(arr[i][j]==1){
            if(i>2)
                c=i-2;
            else
                c=2-i;
            if(j>2)
                c+=j-2;
            else
                c+=2-j;
        }
    }
}
printf("%d",c);
}
