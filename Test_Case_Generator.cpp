#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int n,m,j;
    n=((rand()*rand())%1000000)+1;
    m=(rand()%20)+1;
    vector<int>  v((1<<m)-1,0);
    v[0]=rand()%1001;
    for(j=1;j<((1<<m)-1);j++)
    {
        if(v[(j-1)/2]==(-1))
        v[j]=-1;
        else if(rand()%25)
        v[j]=rand()%1001;
        else
        v[j]=-1;
    }
    vector<pair<int,int>> queries;
    for(j=0;j<n;j++)
    {
        int temp;
        temp=rand()%((1<<m)-1);
        if(temp==0)
        queries.push_back(make_pair(0,0));
        else
        queries.push_back(make_pair((rand()%temp)+1,temp));
    }
    cout<<n<<" "<<m<<"\n";
    vector<int>::iterator itr;
    vector<pair<int,int>>::iterator itr1;
    for(itr=v.begin();itr!=v.end();itr++)
    cout<<*itr<<" ";
    cout<<"\n";
    for(itr1=queries.begin();itr1!=queries.end();itr1++)
    cout<<(*itr1).first<<" "<<(*itr1).second<<"\n";
    return 0;
}