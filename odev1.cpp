#include <iostream>
#include <stdlib.h>
#include <process.h>

using namespace std;

void duzUcgen(int n){
        int i;
        if(n>15||n<3|| n%2==0){
            for(i=0;i<3;i++){
                cout<<"15 ve 3 arasinda olmali : ";
                cin>>n;
                if(n<=15&&n>=3&&n%2==1){
                    break;
                }
                i++;
                if(i==3){
                    exit(0);
                }
            }
        }
        int space,row,star,k,m;
        k=(n-1)/2;
        m=1;
        for(row=0;row<(n+1)/2;row++){
            for(space=0;space<k;space++){
                cout<<" ";
            }
            k--;


        for(star=0;star<m;star++){
            cout<<"*";
        }
            m+=2;
            cout<<endl;
        }


    }
void tersUcgen(int n){
    int i;
        if(n>15||n<3|| n%2==0){
            for(i=0;i<3;i++){
                cout<<"15 ve 3 arasinda olmali : ";
                cin>>n;
                if(n<=15&&n>=3&&n%2==1){
                    break;
                }
                i++;
                if(i==3){
                    exit(0);
                }
            }
        }

    int space,row,star,m,k;
    row=(n+1)/2;
    star=0;
    k=n;
    m=0;
    space=0;

    while(row>0){
        while(space<m){
            cout<<" ";
            space++;
        }
        while(star<k){
            cout<<"*";
            star++;
        }
        m+=1;
        star=0;
        k-=2;
        space=0;
        row--;
        cout<<endl;

    }
}

void diamond(int n){
    int i;
        if(n>15||n<3|| n%2==0){
            for(i=0;i<3;i++){
                cout<<"15 ve 3 arasinda olmali : ";
                cin>>n;
                if(n<=15&&n>=3&&n%2==1){
                    break;
                }
                i++;
                if(i==3){
                    exit(0);
                }
            }
        }
    duzUcgen(n);
    tersUcgen(n);

}
int main()
{
    int s,n;

    cout<<"duz ucgen cizmek icin 1'e basiniz: "<<endl;
    cout<<"ters ucgen cizmek icin 2'e basiniz: "<<endl;
    cout<<"elmas cizmek icin 3'e basiniz: "<<endl;

    cin>>n;

    if(n>0&&n<4){
        cout<<"hangi boyuta cizmek isterseniz: ";
    }

    cin>>s;

    switch(n){
    case 1:
        duzUcgen(s);
        break;
    case 2:
        tersUcgen(s);
        break;
    case 3:
        diamond(s);
        break;
    default:
        cout<<"1-3 arasinda girmelisiniz!";




    }

    return 0;
}
