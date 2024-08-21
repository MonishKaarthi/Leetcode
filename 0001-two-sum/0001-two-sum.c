
int* twoSum(int* a, int n, int ts, int* rs) {
    int *res =(int *)malloc(sizeof(int)*2);
    *rs=2;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==ts){
                res[0]=i;
                res[1]=j;
                return res;
            }
        }
    }
    return res;
}