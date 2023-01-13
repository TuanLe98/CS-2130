#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    bool p=false, q=false, res;
    int option;
    do{
        cout<<("Which operation do you want to perform?"
               "\nQuestion 1- Do you want to use And or Or?"
               "\nQuestion 2- Do you want to NOT p?"
               "\nQuestion 3- Do you want to NOT q?"
               "\n************************************************"
               "\n*               1. AND                         *"
               "\n*               2. OR                          *"
               "\n*               3. NOT p                       *"
               "\n*               4. NOT q                       *"
               "\n*               5. Quit                        *"
               "\n************************************************\n")<<endl;
        cout<<("Enter an integer for option + ENTER: ");
        cin>>option;
        switch (option) {
            case 1:
                cout<<"p q pAq"<<endl;
                cout<<"------------------"<<endl;
                res = p & q;
                cout<<p<<" "<<q<<" "<<res<<endl;
                q = true;
                res = p & q;
                cout<<p<<" "<<q<<" "<<res<<endl;
                p = true;
                q = false;
                res = p & q;
                cout<<p<<" "<<q<<" "<<res<<endl;
                q = true;
                res = p & q;
                cout<<p<<" "<<q<<" "<<res<<endl;
                break;
            case 2:
                cout<<"p q pVq"<<endl;
                cout<<"------------------"<<endl;
                res = p | q;
                cout<<p<<" "<<q<<" "<<res<<endl;
                q = true;
                res = p | q;
                cout<<p<<" "<<q<<" "<<res<<endl;
                p = true;
                q = false;
                res = p | q;
                cout<<p<<" "<<q<<" "<<res<<endl;
                q = true;
                res = p | q;
                cout<<p<<" "<<q<<" "<<res<<endl;
                break;
            case 3:
                cout<<"p ~p"<<endl;
                cout<<"------"<<endl;
                cout<<p<<" "<<!p<<endl;
                p = !p;
                cout<<p<<" "<<!p<<endl;;
                break;
            case 4:
                cout<<"q ~q"<<endl;
                cout<<"------"<<endl;
                cout<<q<<" "<<!q<<endl;
                q = !q;
                cout<<q<<" "<<!q<<endl;;
                break;
            default:
                cout<<"Not a valid choice!!"<<endl;
                break;
        }
    }while(option!=5);
    return 0;
}


/* OUTPUT
 
 Which operation do you want to perform?
 Question 1- Do you want to use And or Or?
 Question 2- Do you want to NOT p?
 Question 3- Do you want to NOT q?
 ************************************************
 *               1. AND                         *
 *               2. OR                          *
 *               3. NOT p                       *
 *               4. NOT q                       *
 *               5. Quit                        *
 ************************************************

 Enter an integer for option + ENTER: 1
 p q pAq
 ------------------
 0 0 0
 0 1 0
 1 0 0
 1 1 1
 Which operation do you want to perform?
 Question 1- Do you want to use And or Or?
 Question 2- Do you want to NOT p?
 Question 3- Do you want to NOT q?
 ************************************************
 *               1. AND                         *
 *               2. OR                          *
 *               3. NOT p                       *
 *               4. NOT q                       *
 *               5. Quit                        *
 ************************************************

 Enter an integer for option + ENTER: 2
 p q pVq
 ------------------
 1 1 1
 1 1 1
 1 0 1
 1 1 1
 Which operation do you want to perform?
 Question 1- Do you want to use And or Or?
 Question 2- Do you want to NOT p?
 Question 3- Do you want to NOT q?
 ************************************************
 *               1. AND                         *
 *               2. OR                          *
 *               3. NOT p                       *
 *               4. NOT q                       *
 *               5. Quit                        *
 ************************************************

 Enter an integer for option + ENTER: 3
 p ~p
 ------
 1 0
 0 1
 Which operation do you want to perform?
 Question 1- Do you want to use And or Or?
 Question 2- Do you want to NOT p?
 Question 3- Do you want to NOT q?
 ************************************************
 *               1. AND                         *
 *               2. OR                          *
 *               3. NOT p                       *
 *               4. NOT q                       *
 *               5. Quit                        *
 ************************************************

 Enter an integer for option + ENTER: 4
 q ~q
 ------
 1 0
 0 1
 Which operation do you want to perform?
 Question 1- Do you want to use And or Or?
 Question 2- Do you want to NOT p?
 Question 3- Do you want to NOT q?
 ************************************************
 *               1. AND                         *
 *               2. OR                          *
 *               3. NOT p                       *
 *               4. NOT q                       *
 *               5. Quit                        *
 ************************************************

 Enter an integer for option + ENTER: 5
 Not a valid choice!!
 */
