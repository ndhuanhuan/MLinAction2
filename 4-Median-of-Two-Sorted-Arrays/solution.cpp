class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        const int n1 = nums1.size();
        const int n2 = nums2.size();
        int total =n1+n2;
        if(total&0x1)
        {
            return find_kth(nums1.begin(),n1,nums2.begin(),n2, total/2+1);
        }
        else
        {
            return (find_kth(nums1.begin(),n1,nums2.begin(),n2, total/2+1)+find_kth(nums1.begin(),n1,nums2.begin(),n2, total/2))/2.0;
        }
    }
    
    int find_kth(vector<int>::const_iterator A,int n1, vector<int>::const_iterator B, int n2, int k)
    {
        if(n1>n2)
        {
            return find_kth(B,n2, A, n1,k);
        }
        if(n1==0) return *(B+k-1);
        int ia = min(n1,k/2);
        int ib = k-ia;
        if(*(A+ia-1)<*(B+ib-1))
        {
            return find_kth(A+ia,n1-ia,B,n2,k-ia);
        }
        else if(*(A+ia-1)<*(B+ib-1))
        {
            return find_kth(A, m, B + ib, n - ib, k - ib);
        }
        else
            return A[ia-1]; 
    }
};