#include <iostream>

using namespace std;

int lin_Search(int [], int, int);
int lin_Search(int arr[], int k_y, int iN)
{
if( iN ==0) return -1;
else if( k_y == arr[iN-1]) return iN;
else
return lin_Search(arr,k_y,iN-1);
}

int main(void)
{
    int arr[20],num,i_ey,pos_tio=0;
cout<<"\nEnter the size of the array\n";
cin>>num;
cout<<"\nEnter the elements of the array:\n";
for(int a=0;a<num;a++){
        cin>>arr[a];
cout<<"\nenter the key element\n";
cin>>i_ey;
pos_tio=lin_Search(arr,i_ey,num);
if(pos_tio==-1)
cout<<"\nElement not found\n";
else cout<<"\nElement found at position"<<pos_tio;
}
return 0;
}

