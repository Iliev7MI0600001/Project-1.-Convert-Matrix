#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;
bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false){
   
      return false;
  }
      return true;
}
int main(){
	const int MAX_LENGTH=5;
	int choice;
	fstream myFile;
	ofstream fout;
	string strTemp;
	string strReplace;
	string strNew;
	do
	{
		cout<<"Please choose one of the following:"<<endl;
		cout<<"0. Quit"<<endl;	
		cout<<"1. Review The Entry Data;"<<endl;
		cout<<"2. Change One Number"<<endl;
		cout<<"3. Review The Entry Functions;"<<endl;
		cout<<"4. Change One Entry Function;"<<endl;
		cout<<"5. Commit A Matrix Calculation;"<<endl;
		cout<<"6. Choose A Carry Mode"<<endl;
		cout<<"7. Save"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 0:
				return 0;
			case 1:
				myFile.open("numbers.txt", ios::in);
				if(myFile.is_open())
				{
					string line;
					while(getline(myFile,line))
					{
						cout<<line<<endl;
					}
					myFile.close();
				}
				break;
			case 2:
				{
					cout<<"Please Enter The Number You Want To Enter:"<<endl;
					string line;
					fout.open("numbers.txt", ios::app);
					while(fout)
					{
						getline(cin,line);
				        while(check_number(line)==false)
				        {
				        	cout<<"Please enter integer"<<endl;
				        	getline(cin,line);

				        	break;
						}
				         
						fout << line << endl;
				        fout.close();
				    }
					myFile.open("numbers.txt", ios::in);
				if(myFile.is_open())
				{
					string line;
					while(getline(myFile,line))
					{
						cout<<line<<endl;
					}
					myFile.close();
				}
				
					
					
					
				}
				break;
			case 3:
				myFile.open("functions.txt", ios::in);
				if(myFile.is_open())
				{
					string line;
					while(getline(myFile,line))
					{
						cout<<line<<endl;
					}
					myFile.close();
				}
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
		}	
	}
	while (choice!=0);
	return 0;
}
