#include<iostream>
using namespace std;
int main()
{
    int op,p,q;
    cout<<("Option 1: p and q"
    "\nOption 2: p or q?");
    cin>>op;
    cout<<"Do you want to NOT p(1-Yes 0-No)?";
    cin>>p;
    cout<<"Do you want to NOT q(1-Yes 0-No)?";
    cin>>q;
    cout<<"p|q|";
    cout<<"( ";
    cout<<(p==1?"~p":"p");
    cout<<(op==1?" ∧ ":" ∨ ");
    cout<<(q==1?"~q":"q");
    cout<<" )";
    cout<<endl;

    cout<<"-----------------";
    cout<<endl;
    for(int i=1; i>=0; i--){
        for(int j=1; j>=0; j--){
            cout<<(i==0?"F":"T")<<"|"<<(j==0?"F":"T");
            cout<<"|";
            if(op==1){
                cout<<(((p==1?!i:i) and (q==1?!j:j))==1?"T":"F");
            }
            else{
                cout<<(((p==1?!i:i) or (q==1?!j:j))==1?"T":"F");
            }
        cout<<endl;
        }
    }

return 0;
}

/* OUTPUT
 Option 1: p and q
 Option 2: p or q?1
 Do you want to negate p(1-Yes 0-No)?1
 Do you want to negate q(1-Yes 0-No)?1
 p|q|( ~p ∧ ~q )
 -----------------
 T|T|F
 T|F|F
 F|T|F
 F|F|T
 Option 1: p and q
 Option 2: p or q?2
 Do you want to NOT p(1-Yes 0-No)?1
 Do you want to NOT q(1-Yes 0-No)?1
 p|q|( ~p ∨ ~q )
 -----------------
 T|T|F
 T|F|T
 F|T|T
 F|F|T
 */
