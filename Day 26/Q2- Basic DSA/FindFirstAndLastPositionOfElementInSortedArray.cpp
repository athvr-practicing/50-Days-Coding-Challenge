int firstOcc(int arr[],int size, int key){
    int left = 0;
    int right = size-1;
    int store= -1;

    while(left<=right){
        int mid = (left + right)/2;
        if(arr[mid]==key){
            store = mid;
            right = mid - 1;
        } else if(arr[mid]<key){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

    return store;
}

int lastOcc(int arr[],int size, int key){
    int left = 0;
    int right = size-1;
    int store= -1;

    while(left<=right){
        int mid = (left + right)/2;
        if(arr[mid]==key){
            store = mid;
            left = mid + 1;
        } else if(arr[mid]<key){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

    return store;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>vec;
        int first = firstOcc(nums.data(), nums.size(), target);
        int last = lastOcc(nums.data(), nums.size(), target);
        vec.push_back(first);
        vec.push_back(last);
        return vec;
    }
};