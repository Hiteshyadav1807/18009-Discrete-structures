#include<iostream>
using namespace std;
void SelectionSort(int[],int);
int main()
{
    int arr[50],num;
    cout<<"How many element do you want?";
    cin>>num;
    cout<<"\n Enter the element of array...:";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
        SelectionSort(arr,num);
        cout<<"\n\n The Sorted array is shown below...\n";
        for(int i=0;i<num;i++)
        {
            cout<<arr[i]<<" ";
        }
           cout<<endl;
            return 0;
}
void SelectionSort(int arr[],int num1)
        {
            int temp;
            int small,pos;
            for(int i=0;i<num1-1;++i)
            {
                small=arr[i];
                pos=i;
                for(int j=i+1;j<num1;++j)
                {
                    if(arr[j]<small)
                    {
                        small = arr[j];
                        pos=j;
                    }
                }
                temp=arr[i];
                arr[i]= arr[pos];
                arr[pos]=temp;

            }
        }

