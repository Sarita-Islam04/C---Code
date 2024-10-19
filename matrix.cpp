


#include <iostream>
using namespace std;

int main()
{

   int r,c;

   cout<<"Enter the row and column for matrix = ";
   cin>>r>>c;

   cout<<"Matrix 1st :"<<endl;
   cout<<"-------------"<<endl;



   int matrix1 [r][c];

   for (int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           cin>>matrix1[i][j];
       }
       cout<<endl;
   }

   cout<<"Matrix 2nd : "<<endl;
   cout<<"------------"<<endl;

   int matrix2[r][c];

      for (int i=0;i<r;i++)
      {
          for(int j=0;j<c;j++)
         {
           cin>>matrix2[i][j];
         }
          cout<<endl;
      }

      cout<<endl;
      cout<<"1st matrix : "<<endl;
      cout<<"-------------"<<endl<<endl;
   for (int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           cout<<matrix1[i][j]<<" ";
       }
       cout<<endl;
   }

    cout<<endl;
   cout<<"2nd matrix:"<<endl;
   cout<<"-------------"<<endl<<endl;
   for (int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           cout<<matrix2[i][j]<<" ";
       }
       cout<<endl;
   }





   int addition[r][c];

    cout<<endl;
    cout<<"Addition : "<<endl;
    cout<<"-----------"<<endl;
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           addition[i][j]= matrix1[i][j]+matrix2[i][j];
       }

   }

   cout<<endl;


   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           cout<<addition[i][j]<<" ";
       }
       cout<<endl;
   }

   cout<<endl;
   int subtraction[r][c];
   cout<<"Subtraction : "<<endl;
   cout<<"--------------"<<endl;

   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           subtraction[i][j]= matrix1[i][j]-matrix2[i][j];
       }
   }

   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           cout<<subtraction[i][j]<<" ";
       }
       cout<<endl;
   }


   cout<<endl;
   int multiplication[r][c];
   cout<<"Multiplication : "<<endl;
   cout<<"------------------"<<endl;

   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
          int multi=0;

           for(int k=0;k<c;k++)
             {

               multi+=matrix1[i][k]*matrix2[k][j];

             }
            multiplication[i][j]=multi;
       }

   }


    for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           cout<<multiplication[i][j]<<" ";
       }
       cout<<endl;
   }

return 0;
}

