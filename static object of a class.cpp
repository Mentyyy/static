/*
Just like variables, objects also when declared as static have a scope till the lifetime of program.

In the program below the object is declared inside the `if` block as non-static. So, the scope of variable is inside the `if` block only. 
So when the object is created the constructor is invoked and soon as the control of `if` gets over it invokes destructor.
*/
#include <iostream>
using namespace std;
  
class Demo
{
    public:
        Demo()
        {
            cout << "Inside Constructor\n";
        }
        ~Demo()
        {
            cout << "Inside Destructor\n";
        }
};
  
int main()
{
    int x = 0;
    if( x == 0 )
    {
        Demo obj;
    }
    cout << "End of main\n";
}
/*
Output: 
      Inside Constructor
      Inside Destructor
      End of main       
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _      
      
Now the destructor will be invoked after the end of main. 
This will happene because the scope of static object is throughout the life time of program.      
*/
class Demo
{
    int i = 0;
      
    public:
    Demo()
    {
        i = 0;
        cout << "Inside Constructor\n";
    }
      
    ~Demo()
    {
        cout << "Inside Destructor\n";
    }
};
  
int main()
{
    int x = 0;
    if( x == 0 )
    {
        static Demo obj;
    }
    cout << "End of main\n";
}
/*
Output: 
      Inside Constructor
      End of main
      Inside Destructor 
*/
