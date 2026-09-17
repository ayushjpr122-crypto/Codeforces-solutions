#include <stdio.h>
 
int main() {
        int n;
        scanf("%d",&n);
        int x,y,z;
        int count=0;
        for(int i=0;i<n;i++){
            scanf("%d %d %d",&x,&y,&z);
            if(x+y+z>1){
                count++;
            }
        }
        
        printf("%d",count);
        
}
 