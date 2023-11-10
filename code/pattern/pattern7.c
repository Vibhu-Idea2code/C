int main()
{
    int i,j,k;
    for(i=0;i<=5;i++){
        k=1;
        for(j=1;j<=9;j++){
            
            if(j>=6-i && j<=4+i && k){
                printf("%d",j);
                k=0;
             }else{
                printf(" ");
                k=1;
             }
        }
        printf("\n");
    }
}
//    5    
//    4 6   
//   3 5 7  
//  2 4 6 8 
// 1 3 5 7 9