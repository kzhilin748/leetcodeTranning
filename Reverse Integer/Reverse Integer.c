int reverse(int x) {
    
    
    int sign=1;
    long rev=0;
    if(x<0){
        sign=-1;
        x*=-1;
    }
    while(x>0){
       
        int temp=x%10;
        x/=10;
        rev=rev*10+temp;
    }
    
    rev*=sign;
    
    return fabs(rev)>INT_MAX?0:rev;
}
