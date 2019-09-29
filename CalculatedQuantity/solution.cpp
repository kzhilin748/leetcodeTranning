#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator calculate(vector<int>::iterator cur,vector<int>::iterator bef,int curlen,int N){
    if(N<0)
        return bef;
    int carry=0;
    for(int i=1;i<=curlen;i++){
        *(cur+i)=*(bef+i)+*(bef+(i-1))+carry;
        carry=*(cur+i)/10;
        *(cur+i)%=10;
    }
    curlen++;
    N--;
    return calculate(bef,cur,curlen,N);
}
void printnum(int N,vector<int>::iterator ptr){
    for(int i=N;i>=0;i--)
        cout<<*(ptr+i);
    cout<<endl;
}

int Onecounter(int N,vector<int>::iterator ptr){
    int cnt=0;
    for(int i=0;i<=N;i++)
        if(*(ptr+i)==1)
            cnt++;
    return cnt;
}
int solution(int N){
    vector<int> curlist(N,0),beflist(N,0);
    curlist[0]=1;beflist[0]=1;
    vector<int>::iterator ans=calculate(curlist.begin(),beflist.begin(),0,N);

    printnum(N,ans);

    return Onecounter(N,ans);

}


int main(int argc, char const *argv[])
{
    cout<<solution(1000)<<endl;
    return 0;
}
