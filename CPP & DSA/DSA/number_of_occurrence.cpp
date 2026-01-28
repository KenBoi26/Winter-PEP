#include<bits/stdc++.h>
using namespace std;

int first(vector<int>&nums, int target){
	int start = 0;
	int end = nums.size()-1;
	int ans=-1;
	while(start <= end){
	    int mid = (start+end)/2;
	    if(nums[mid] == target){
	        ans = mid;
	        end = mid-1;
	    }else if(nums[mid] > target){
	        end = mid-1;
	    }else{
	        start = mid+1;
	    }
	}
	
	return ans;
}

int last(vector<int>&nums, int target){
	int start = 0;
	int end = nums.size()-1;
	int ans=-1;
	while(start <= end){
	    int mid = (start+end)/2;
	    if(nums[mid] == target){
	        ans = mid;
	        start = mid+1;
	    }else if(nums[mid] > target){
	        end = mid-1;
	    }else{
	        start = mid+1;
	    }
	}

	return ans;
}

int countFreq(vector<int>& nums, int target) {
	int start = 0;
	int end = nums.size()-1;
	while(start <= end){
	    int mid = (start+end)/2;
	    if(nums[mid] == target){
	        
	        return {last(nums,target)-first(nums,target)+1};
	    }else if(nums[mid] < target){
	        start = mid+1;
	    }else{
	        end = mid-1;
	    }
	}
	
	return 0;
}


int main(){


    return 0;
}