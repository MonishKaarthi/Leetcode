int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int start=0;
    int mid=n;
    int* shuf=(int*)malloc(2*n*sizeof(int));
    int a=0;
    int i=0;
    while(i<n){
        shuf[a++]=nums[i++];
        shuf[a++]=nums[mid++];
    }
    *returnSize=a;
    return shuf;
}