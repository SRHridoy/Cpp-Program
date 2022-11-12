//Count the number of triplets whose sum is equal to the given value x...

#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int array[] ={3,1,2,4,0,6};
    int size = 6;
    int targetSum = 0;

    int triplets = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (array[i]+array[j]+array[k] == targetSum)
                {
                    triplets++;
                }
                
            }
            
        }
        
    }
    
cout << triplets << nl;

    return 0;
}