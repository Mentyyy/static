/*
The static variables in a class are shared by the objects. 
There can not be multiple copies of same static variables for different objects. 
Also because of this reason static variables can not be initialized using constructors.

In the program below we try to create multiple copies of the static variable `i` for multiple objects. But this won't happen.
*/
class Demo
{
   public:
     static int i;
      
     Demo()
     {
        // Do nothing
     };
};
  
int main()
{
  Demo obj1;
  Demo obj2;
  obj1.i =2;
  obj2.i = 3;
    
  // prints value of i
  cout << obj1.i<<" "<<obj2.i;   
}
// Output: undefined reference to `GfG::i'

/*
Static variable inside a class should be initialized explicitly by the user using the class name and scope resolution operator 
outside the class as shown below:
*/
class Demo
{
public:
    static int i;
      
    Demo()
    {
        // Do nothing
    };
};
  
int Demo::i = 1;
  
int main()
{
    Demo obj;
    // prints value of i
    cout << obj.i; 
}
// Output: 1
