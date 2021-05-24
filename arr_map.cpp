#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	map<int,int>freq;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		freq[arr[i]]++;
	}
	int ind,max=0;
	 for(auto it:freq)
		 if(max < it.second)
		{
			max=it.second;
			ind=it.first;
		}
	cout<<"customer with id:"<<ind<<"most visited"<<max;
	return 0;
}
