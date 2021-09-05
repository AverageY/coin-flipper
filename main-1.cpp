#include <iostream>

using namespace std;

int main()
{
    int x;
    for(int j=0;j<1;++j){
            cout<<"Please press 1 and enter"<<endl;
        cin>>x;
    if(x==1){

            for(int i=0;i<10;++i){

                int y = rand()%2;

                if(y==0){
                    cout<<"Heads"<<endl;

        }
            else{
                cout<<"Tails"<<endl;
        }



        }
    }
        else if(x!=1){
            cout<<"program will end"<<endl;
        }







    }




    system("pause>0");
    return 0;
}
