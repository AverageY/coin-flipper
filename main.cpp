#include <iostream>

using namespace std;
string flip();
int x;


int main()
{
    for(int i=0;i<10;++i){
    cout<<"Press 1 and enter"<<endl;
    cin>>x;
    if(isalpha(x)==true){
            cout<<"int pls"<<endl;


    }
    else if(x==1){
        flip();
        cout<<"flipped"<<endl;


    }

    else if(x!=1){
        cout<<"try again"<<endl;
    }


    }
    system("pause>0");
    return 0;

}
string flip(){
    string ans;
    int y=rand()%2;
    if(y==0){
        string ans = "Heads";
            cout<<ans<<endl;
    }
    else{
       string ans = "Tails";
     cout<<ans<<endl;
    }

    return ans;

}

