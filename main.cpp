#include <iostream>
#include <string.h>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
/*Declaration of the student structure with it is elements*/
struct student
{
	int facnumber;
	char name[26];
	int marks[10];
};
/*Create a function to input data for students structure*/
void input_data(student students_array[],int n1)
{
	for(int i=0;i<n1;i++)
	{
		cout<<"Enter faculty number:";
		cin>>students_array[i].facnumber;	
		cin.ignore();
		cout<<"Enter First and Second name:";
		cin.getline(students_array[i].name,26);
		cout<<"Enter 10 grades:";
		for(int j=0;j<10;j++)
		{
		    cin>>students_array[i].marks[j];
		}
	}
}
/*Create output function for students strcture*/
void output_data(student students_array[],int n1)
{
	int sum;
	for(int i=0;i<n1;i++)
	{
		sum=0;
        for(int j=0;j<10;j++)
              sum=sum+students_array[i].marks[j];
        if((sum/10.0)>=5)
		{   
			cout<< setw(5) <<students_array[i].facnumber<<" ";
			cout<< setw(25) <<students_array[i].name<<" ";
			for(int j=0;j<10;j++)
			{
            	cout<<students_array[i].marks[j]<<" ";
            }
			cout<<" sreden uspeh: "<<sum/10.0;
		}
		cout<<endl;
	}
}




int main(int argc, char** argv) {
	student students[15];
	int n;
	cout<<"input broi zapisi";
	cin>>n;
	cin.ignore();
	/*Call the functions*/
	input_data(students,n);
	output_data(students,n);

	return 0;
}
