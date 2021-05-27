 #include<bits/stdc++.h>
using namespace std;
int main()
{
	int cap,flag=0;
	cin>>cap;
	int arr[cap];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x;
	cin>>x;
 for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            for(int j=i; j<n; j++)
                arr[j] = arr[j+1];
            flag++;
            i--;
            n--;
        }
    }
    if(flag==0)
        cout<<"Element doesn't found in the Array";
    else
        cout<<"Element Deleted Successfully";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
	}
}
