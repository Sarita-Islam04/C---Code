
 
#include <iostream>
using namespace std;


int Factorial(int n)

{
    int factorial=1;

    for(int i=1;i<=n;i++)
    {
        factorial*=i;
        if(i>1)
        {
            cout<<" * ";
        }
       cout<<i;
    }


        cout<<" = ";

   return factorial;

}

int main()
{

      int n;
      cout<<" Factorial calculation : "<<endl;
      cout<<" ---------------------"<<endl;
      cout<<" Enter the positive integer = ";
      cin>>n;


      while(n<0)
      {
          cout<<" Invalid input ! Try the positive integer again = ";
          cin>>n;
      }

     cout<<" The factorial = "<<n<<"! "<<endl<<endl;
     cout<<" "<<Factorial(n)<<endl;
     cout<<endl<<endl;
     cout<<" A factorial is a mathematical function represented by an exclamation mark,"<<endl;
     cout<<" The symbol "<<n<<"! means to start with a positive integer,"<<endl;
     cout<<" "<<n<<" and multiply by each previous integer until reaching 1 ."<<endl;
     cout<<" It is denoted by "<<n<<"! and is used in permutations and combinations to count the number."<<endl;




    return 0;
}
