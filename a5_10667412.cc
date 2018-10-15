#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
struct Student
{
    int id[5];
    string name[5];
    int age[5];
    char gender[5];
    int score[5];
    char grade[5];
};
int main(){
   ofstream outfile;
   outfile.open("Studentfile.txt");
   outfile<<fixed<<showpoint;
   outfile<<setprecision(2);

    int males=0;
	int females=0;
double totalScore=0;
	double totalAge=0;
    double avgscore;
    int avgage;
    int StudentNo=5;
    Student Stud;

	for (int i=0; i<StudentNo; i++){
            	cout <<"Please enter the id of the student"<<i+1<<":";
		cin>>Stud.id[i];
		cout <<"Please enter the name of the student"<<i+1<<":";
		cin>>Stud.name[i];

		cout<<"Please enter the age of the student:";
        cin>> Stud.age[i];

		cout <<"Please enter the score of the student:";
		cin>>Stud.score[i];
        cout << "Please enter the letter for the gender of the student, m for male and f for female: ";
		cin>> Stud.gender[i];

		if(Stud.gender[i]=='f'){
			females++;
		}
		else{
                if(Stud.gender[i]=='m')
                {males++;
                }
		}


		 cout<<"Please enter the grade: ";
		 cin>>Stud.grade[i];
		 cout<<endl;
		 totalScore=totalScore+Stud.score[i];

		totalAge=totalAge+Stud.age[i];
	}




avgscore=totalScore/5;
avgage=totalAge/5;
outfile<<"ID                NAME                AGE             GENDER              SCORE               GRADE"<<endl;
outfile<<"***********************************************************************************************************************"<<endl;
for(int i=0; i<StudentNo;i++)
{
    outfile<<right;
    outfile<<Stud.id[i]<<"              "<<Stud.name[i]<<"              "<<Stud.age[i]<<"               "<<Stud.gender[i]<<"                "<<Stud.score[i]<<"             "<<Stud.grade[i]<<endl;
}
outfile<<"***********************************************************************************************************************"<<endl;
	outfile << "Average Score:"<< avgscore<< endl;
	outfile << "Average Age:"<< avgage<< endl;
	outfile << "Male Count:"<< males<< endl;
	outfile << "Female Count:"<< females<< endl;
outfile.close();
	return 0;
}
