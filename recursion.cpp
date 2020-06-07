#include<iostream>
#include<vector>
using namespace std;

int decreasing(int n)
{
    if(n<=0)
    {
        cout<<"Base ->"<<n<<endl;
        return 1;
    }
    int count =0;
    int count2=0;
    cout<<"HI ->"<<n<<endl;
    //for(int i=0;i<n;i++)
        count+=decreasing(n-1);
    cout<<"Bye ->"<<n<<endl;
    count2+=decreasing(n-2);
    return count+count2;
}

void oodEven(int n)
{
    if(n==0)
    {
        cout<<"Base ->"<<n<<endl;
        return;
    }

    if((n&1)==0)
    cout<<"Even ->"<<n<<endl;

    oodEven(n-1);
     if((n&1)!=0)
     cout<<"Odd ->"<<n<<endl;
}

int power_bad(int a,int b)
{
    if(b==1)
    return a;

    int ans = power_bad(a,b-1);

    cout<<ans<<endl;
    return ans*a;
}

int power_better(int a,int b)
{
    if(b==1)
    return a;

    int ans = power_better(a,b/2);
    ans = ans*ans;
    return (b%2)!=0?ans*a:ans;
}

int a;
int b;
int euler(int n,int level)
{
    if(n<=1)
    {
        cout<<"Base ->"<<n<<"@"<<level<<endl;
        return n;
    }

    cout<<"Pre ->"<<n<<"@ "<<level<<endl;
    a = euler(n-1,level+1);

    cout<<"In ->"<<n<<"@"<<level<<endl;

    b = euler(n-2,level+1);
    cout<<"Post ->"<<n<<"@"<<level<<endl;
    
    return a+b;    
}

int euler2(int n,int level)
{

}

string removeHi(string str)
{
    if (str.length() == 0)
        return "";

    char ch = str[0];
    if (str.length() > 1 && str[0] == 'h' && str[1] == 'i')
        return removeHi(str.substr(2));
    else
        return ch + removeHi(str.substr(1));
}

int sum_arrray(vector<int>& arr,int n)
{
    if(n<=0)
    return 0;

    int sum = sum_arrray(arr,n-1)+arr[n-1];

    return sum; 
}


int main()
 {
    string s;
    cin>>s;
    int n;
    cin>>n;
    // vector<int> arr(n,0);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<sum_arrray(arr,n);
    // cout<<decreasing(5);
    //oodEven(6);
    // cout<<euler(3,0);
    // cout<<endl<<a<<endl<<b;

    cout<<s.substr(s.length());
    return 0;
}