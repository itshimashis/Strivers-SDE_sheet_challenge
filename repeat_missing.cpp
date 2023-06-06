#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	n=(long long int)n;
	long long int s1=0,s2=0,s3=0,s4=0;
	//normal sum 
	s2=n*(n+1)/2;
	//normal squared sum
	s4=n*(n+1)*(2*n+1)/6;
	for(auto &it:arr){
		it=(long long int)it;
		s1+=(long long)it;
		s3+=(long long)it*(long long)it;
	}
	//the value of s2-s1
    long long val1=s2-s1;
	long long val2=	s4-s3;
	long long val3=val2/val1;
	return {(val3+val1)/2,(val3+val1)/2-val1};
}
