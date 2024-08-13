int *bubble(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }  
        }
    }
   return a;
}
    int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    int *c=bubble(seats,seatsSize);
    int *d=bubble(students,studentsSize);
    int total=0;
    for(int i=0;i<seatsSize;i++)
    {
        total+=abs(c[i]-d[i]);
    }
  return total;
}