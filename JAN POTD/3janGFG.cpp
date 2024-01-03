//Decreasing Sequence
// Example 1:

// Input:
// N = 4, K = 5
// A[] = {1, 1, 2, 3}
// Output:
// 3
// Explanation:
// One operation is required to change a[2] = 2
// into -3 and two opertations are required to
// change a[3] = 3 into -7. The resulting
// sequence will be 1 1 -3 -7. Hence, in
// total 3 operations are required.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= N <= 106
// 1 <= K <= 100
// -10^6 <= a[] <= 10^6
int minMoves(int a[], int n, int k)
{
    int sum=0;
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i]){
            int b=(a[i]-a[i-1])/k;
            if((a[i]-a[i-1])%k!=0) b++;
            a[i]-=b*k;
            sum+=b;
            sum=sum%1000000007;// important...
        }
    }
    return sum;
}