#include <iostream>
#include <stdlib.h>
using namespace std;

void recMax_Min(int r[],int low_bou,int high_bou, int *max, int *min){
    int mid_bou,max1,max2,min1,min2;
if(high_bou-low_bou == 1){
        if(r[low_bou] > r[high_bou]){
*max = r[low_bou];
*min = r[high_bou];
}
else{
*max = r[high_bou];
*min = r[low_bou];
}
}
else if(low_bou == high_bou){
*min = *max = r[low_bou];
}
else if(low_bou<high_bou){ mid_bou=(low_bou+high_bou)/2;
recMax_Min(r,low_bou,mid_bou,&max1,&min1);
recMax_Min(r,mid_bou+1,high_bou,&max2,&min2);
if(max1 > max2)
*max = max1; else
*max = max2;
if(min1 < min2)
*min = min1; else
*min = min2;
}
}

int main( int argc, char **argv)
{ int arr[500000],num,iMax=0,iMin=0;
cout<<("\nEnter the size of the array\n");
cin>>num;
cout<<"\nEnter the elements of the array:\n";
for(int a=0;a<num;a++){
        cin>>arr[a]; recMax_Min(arr,0, num-1, &iMax, &iMin);
cout<<"\nMax Element = \n"<<iMax;
cout<<"\nMin Element = \n"<<iMin;
}
return 0;
}

