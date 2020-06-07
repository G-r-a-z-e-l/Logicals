#include<iostream>
#include<vector>
using namespace std;
void input(vector<vector<int>>& arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            cin>>arr[i][j];
        }
    }
}
void display(vector<vector<int>>& arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

vector<int> convert(vector<vector<int>> mat)
{
    int n =mat.size()*mat[0].size();
    vector<int> arr(n,0);
    int i=0;
    while(i!=n)
    {
        int r = i/mat[0].size();
        int c = i%mat[0].size();

        arr[i] = mat[r][c];
        i++;
    }
    return arr;
}



int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c,0));
    vector<vector<bool>> box(r,vector<bool>(c,false));
    input(arr);
    vector<int> arr2 = convert(arr);
    
    for(int i=0;i<arr2.size();i++)
    {
        cout<<arr2[i];
    }
    return 0;
    
}