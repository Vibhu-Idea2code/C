int main()
{
    int i,j,k;
    for(i=0;i<=5;i++){
        k=1;
        for(j=1;j<=9;j++){
            
            if(j>=6-i && j<=4+i && k){
                printf("%d",i);
                k=0;
             }else{
                printf(" ");
                k=1;
             }
        }
        printf("\n");
    }
}
         
//     1    
//    2 2   
//   3 3 3  
//  4 4 4 4 
// 5 5 5 5 5