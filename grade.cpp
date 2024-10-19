


#include <iostream>
#include <string>
using namespace std;

void displayGrade(int marks,string &grade,double &gradepoint)
{
           if (marks>= 85 && marks<=100)
           {
              grade="A+";
              gradepoint=4.00;

           }
           else if (marks>=70 && marks<=84 )
           {
              grade="A";
              gradepoint=3.75;

           }
           else if (marks>=55 && marks<=69)
           {
              grade="B+";
              gradepoint=3.50;
           }
           else if (marks>=40 && marks<=54)
           {
              grade="B";
              gradepoint=3.00;
           }
           else
           {
              grade="F";
              gradepoint=0.00;
           }

}
    int main()
   {

    cout<<"Total subject of this semester = ";

    int subsize;
    cin>>subsize;
    int marks[subsize];
    string subject[subsize];

    for(int i=0;i<subsize;i++)
    {
        cout<<"Subject name = ";
        cin>>subject[i];

        cout<<subject[i]<<" marks "<<" = ";
        cin>>marks[i];

    }

     double totalgradepoint=0;

     for(int i=0;i<subsize;i++)
     {
              string grade;
              double gradepoint;

          displayGrade(marks[i],grade,gradepoint);

          totalgradepoint+=gradepoint;
          cout<<"------------------------"<<endl<<endl;
          cout<<"Subject = "<<subject[i]<<endl;
          cout<<"Marks   = "<<marks[i]<<endl;
          cout<<"Grade   = "<<grade<<endl;
          cout<<"Gradepoint   = "<<gradepoint<<endl;

     }

    double cgpa =totalgradepoint/subsize;

    cout<<endl<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Total grades : "<<endl;
    cout<<"--------------------------------"<<endl;

    cout<< "CGPA = "<<cgpa;

    return 0;
}



















