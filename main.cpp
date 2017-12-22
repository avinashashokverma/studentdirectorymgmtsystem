#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

void add_student();
void delete_student();
void modify_detail();
void search_student();
int main()
{
	system ("COLOR FC");

	system ("cls");

	for(int star = 0 ; star < 80 ; star++)
		cout << "_";
	cout << "" << setw(50) << "Welcome to The student directory :" << setw(29) << "";

	for(int star = 0 ; star < 80 ; star++)
		cout << "_";
		cout << endl;
int nPasswordAttempts = 0;
	int password;

	while(true) //While the user has not entered the correct password or gone over the limit of attempts
	{
		cout << "Enter the password to continue or 0 to quit: ";
		cin >> password;
		if(password == 4844509 || nPasswordAttempts == 3) break; //If those conditions have been satisfied
		cout << "Invalid password, please try again.\n";
		++nPasswordAttempts;
	}

	//Decision time:
	if(password == 4844509)
	{
	goto point1;
	}
	else if(nPasswordAttempts == 3)
	{
		cout << "Failed attempts limit exceeded: exiting...\n";
		exit(0);
	}
	point1:
	int choice_section;
	int choice_database;
	int choice_code;
	int id_stud;
	string pass_admin;
	string pass_stud;
	//CLEARING SCREEN
	system ("cls");
		for (int star = 0 ; star < 49 ; star++)
				cout<<"_";
	cout << endl;
	cout << "\tTo Access the Admin Section Press 1\t\n\tTo Access The Student section Press 2 \t\n\tTo Quit Program Press 3 \t\t" << endl;
	for (int star = 0 ; star < 49 ; star++)
				cout << "_";
	cout<<endl;

	cout << "Enter your choice(1, 2 or 3): ";
	cin >> choice_section;
	cin.ignore();

	//if (choice_section == 3)
		//goto end;

	if (choice_section == 1)
	{
		cout << "Enter the Admin Password ";
		cin >> pass_admin;
		cin.ignore();
		if (pass_admin == "admin")
		{
			system("cls");
			for (int star = 0 ; star < 65 ; star++)
				cout << "_";
				cout << endl;
			cout << "" << setw(35) << "Welcome" << setw(29) << "" << endl;
			cout << "\tTo Enter New student in Database press 1\t\t\t\n\tTo Modify Details of Student in Student Database Press 2\t\n\tTo Delete the student From Database press 3\t\t\t\n\tTo Go Back To The Previous Menu Press 4:\t\t" << endl;

			for (int star = 0 ; star < 65 ; star++)
				cout << "_";
			cout << endl;
			cout << "Enter your choice(1-4): ";
			cin >> choice_database;
			cin.ignore();

			system ("cls");

			if (choice_database == 1)
				{
					//add_student();     //CALLING FUNCTION ADD BOOK
				}

			else if (choice_database == 2)
			{
				//delete_student();     //CALLING FUNCTION delete STUDENT
			}

			else if (choice_database == 3)
			{
				//modify_detail();       //CALLING FUNCTION modify STUDENT
				/* displaying names of all students */

			}

			else if (choice_database == 4)

                     cout<<"choice 4";
					//goto top2;

			else
				cout << "Wrong Choice "<< endl;

			system ("cls");
			//	goto top2;
			}
				else
		{
			cout << "Wrong Password Entered ";
			system ("pause");
			system ("cls");
			//goto top2;
		}
	}
system ("cls");

	if (choice_section == 2)
	{
		cout << "Enter the student id ";
		cin >> id_stud;
		cout << "Enter the student password ";
		cin >> pass_stud;
		cin.ignore();
		if (pass_stud == "stud")
		{
			system("cls");
			for (int star = 0 ; star < 65 ; star++)
				cout << "_";
				cout << endl;
			cout << "" << setw(35) << "Welcome" << setw(29) << "" << endl;
			cout << "\tTo MCA Student directory Press 1\t\t\t\n\tTo CEVIL ENGENERING Student directory Press 3\t\t\t\n\tTo EXTC ENGENERING Student directory Press 4\t\t\t\n\tTo Go Back To The Previous Menu Press 5:\t\t" << endl;

			for (int star = 0 ; star < 65 ; star++)
				cout << "_";
			cout << endl;
			cout << "Enter your choice(1-5): ";
			cin >> choice_code;
			cin.ignore();

			system ("cls");

			if (choice_code == 1)
				{
					//add_student();     //CALLING FUNCTION ADD BOOK
				}

			else if (choice_code == 2)
			{
				//delete_student();     //CALLING FUNCTION delete STUDENT
			}

			else if (choice_code == 3)
			{
				//modify_detail();       //CALLING FUNCTION modify STUDENT
				/* displaying names of all students */

			}
            else if (choice_code == 4)
			{
				//modify_detail();       //CALLING FUNCTION modify STUDENT
				/* displaying names of all students */

			}
			else if (choice_code == 5)

                     cout<<"choice 4";
					//goto top2;

			else
				cout << "Wrong Choice "<< endl;

			system ("cls");
			//	goto top2;
			}
				else
		{
			cout << "Wrong Password Entered ";
			system ("pause");
			system ("cls");
			//goto top2;
		}
	}
return 0;
}

