class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n=nums1.length;
        int m=nums2.length;
        float res=0;
        int [] temp=new int [m+n];
        System.arraycopy(nums1,0,temp,0,nums1.length);
        System.arraycopy(nums2,0,temp,nums1.length,nums2.length);
        Arrays.sort(temp);
        if(temp.length%2!=0){
            res=temp[((temp.length+1)/2)-1];
        }
        if(temp.length%2==0){
            res=(temp[(temp.length/2)-1]+temp[(temp.length/2)])/2.0f;
        }
        if(temp.length==1){
            res=temp[0];
        }
        return res;
    }
}