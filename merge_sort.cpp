#include<iostream>
using namespace std;

void merge(int A[],int low,int mid,int up)
{
    int Left[mid-low+1],Right[up-mid],i,j,k;
    for(i=0;i<mid-low+1;i++)
        Left[i]=A[low+i];
    for(j=0;j<up-mid;j++)
        Right[j]=A[mid+1+j];
    for(k=low,i=0,j=0;i<mid-low+1 && j<up-mid;k++)
    {
        if(Left[i]<Right[j])
        {
            A[k]=Left[i];
            i++;
        }
        else
        {
            A[k]=Right[j];
            j++;
        }
    }
    while(i<mid-low+1)
    {
        A[k]=Left[i];
        i++;
        k++;
    }
    while(j<up-mid)
    {
        A[k]=Right[j];
        j++;
        k++;
    }
}
void merge_sort(int A[],int low,int up)
{
    int mid;
    if(low<up)
    {
        mid=(low+up)/2;
        merge_sort(A,low,mid);
        merge_sort(A,mid+1,up);
        merge(A,low,mid,up);
    }
}
int main()
{
    int i,a[40],size;
    cout<<"Enter the size of array..."<<endl;
    cin>>size;
    cout<<"Enter the elements of array..."<<endl;
    for(i=0;i<size;i++)
    {
    	 cin>>a[i];
	}
       
    merge_sort(a,0,size-1);
    
    for(i=0;i<size;i++)
    {
    	cout<<"  "<<a[i];
	}
        
    return 0;
}
