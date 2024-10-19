

#include <iostream>

using namespace std;

int findMin(int goals[],int size)
        {
           int min =goals[0];

            for(int i=1;i<size;i++)
            {
                if(goals[i]<min)
                {
                    min=goals[i];
                }
            }
       return min;

        }


int findMax(int goals[],int size)
        {
         int max =goals[0];

        for(int i=1;i<size;i++)
            {
                if(goals[i]>max)
               {
                max=goals[i];
               }
            }
    return max;

        }
int main ()
{

       int goal[10];


       cout<<"Sports analytics App"<<endl;
       cout<<"----------------------"<<endl;

       for(int i=0;i<10;i++)
       {
           cout<<"Number of goal score "<<i+1<<" = ";
           cin>>goal[i];
       }


       //smallest goal

       cout<<"The smallest number of goal = "<<findMin(goal,10)<<endl;

      //Largest goal

       cout<<"The largest number of goal = "<<findMax(goal,10)<<endl;

       return 0;
        }
