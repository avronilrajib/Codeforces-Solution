#include<bits/stdc++.h>

using namespace std;

// Function to return the minimum
// value of x from the given array q
int Get_Minimum(vector<int> q)
{
    int minimum = 0;
    int sum = 0;
    for(int i = 0; i < q.size() - 1; i++)
    {
        sum += q[i];
        if (sum < minimum)
            minimum = sum;
    }
    return minimum;
}

// Function to return the required permutation
vector<int> Find_Permutation(vector<int> q, int n)
{
    vector<int> p(n, 0);
    int min_value = Get_Minimum(q);

    // Set the value of p[0] i.e. x = p[0]
    p[0] = 1 - min_value;

    // Iterate over array q[]
    for (int i = 0; i < n - 1; i++)
        p[i + 1] = p[i] + q[i];

    bool okay = true;

    // Check if formed permutation
    // is correct or not
    for (int i = 0; i < n; i++)
    {
        if (p[i] < 1 or p[i] > n)
            okay = false;
        set<int> w(p.begin(), p.end());
        if (w.size() != n)
            okay = false;
    }

    // Return the permutation p
    if (okay)
        return p;
    else
        return {-1};
}

// Driver code
int main()
{
    vector<int> q;
    int z;
    cin>>z;

    int n = q.size() + 1;
    cout << "[ ";
    for (int i:Find_Permutation(q, n))
        cout << i << " ";
    cout << "]";
}
