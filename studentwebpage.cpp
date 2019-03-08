#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
//void classes();
class a
{
	 public :
	 	int roll,marks,i;
	char name[20],subject[20],remarks[30];
	
	 	void get()
	 	{
	 		cout<<"enter the details of the student section1"<<endl;
	 		cout<<"enter the rollno:"<<endl;
	 		cin>>roll;
	 		cout<<"enter name"<<endl;
			 cin>>name;
			 for(i=0;i<3;i++)
			 {
			 	cout<<"enter subject"<<endl;
			 	cin>>subject;
			 	cout<<"enter the marks";
			 	cin>>marks;
			 }
			 
		 }
		 void display()
		 {
		cout<<" the details of the student section1"<<endl;
	 		cout<<" the rollno:"<<endl;
	 		cout<<roll<<endl;
	 		cout<<" name"<<endl;
			 cout<<name<<endl;
			 for(i=0;i<2;i++)
			 {
			 	cout<<" subject"<<endl;
			 	cout<<subject<<endl;
			 	cout<<" the marks"<<endl;
			 	cout<<marks<<endl;
			 }
			 	
		 }
		 	int dis()
	{
		return roll;
	}
      
 }s[3];
 class b
{
	 public :
	 	int roll,marks,i;
	char name[20],subject[20],remarks[20];
	
	 	void get()
	 	{
	 		cout<<"enter the details of the student section2"<<endl;
	 		cout<<"enter the rollno:"<<endl;
	 		cin>>roll;
	 		cout<<"enter name"<<endl;
			 cin>>name;
			 for(i=0;i<3;i++)
			 {
			 	cout<<"enter subject"<<endl;
			 	cin>>subject;
			 	cout<<"enter the marks";
			 	cin>>marks;
			 }
			 
		 }
		 void display()
		 {
		cout<<" the details of the student of the section2"<<endl;
	 		cout<<" the rollno:"<<endl;
	 		cout<<roll<<endl;
	 		cout<<" name"<<endl;
			 cout<<name<<endl;
			 for(i=0;i<2;i++)
			 {
			 	cout<<" subject"<<endl;
			 	cout<<subject<<endl;
			 	cout<<" the marks"<<endl;
			 	cout<<marks<<endl;
			 }
			 	
		 }
		 	int dis()
	{
		return roll;
	}
	
 }g[3];
 class c
{
	 public :
	 	int roll,marks,i;
	char name[20],subject[20],remarkes[20];
	
	 	void get()
	 	{
	 		cout<<"enter the details of the student of section3"<<endl;
	 		cout<<"enter the rollno:"<<endl;
	 		cin>>roll;
	 		cout<<"enter name"<<endl;
			 cin>>name;
			 for(i=0;i<3;i++)
			 {
			 	cout<<"enter subject"<<endl;
			 	cin>>subject;
			 	cout<<"enter the marks";
			 	cin>>marks;
			 }
			 
		 }
		 void display()
		 {
		cout<<" the details of the student of section 3"<<endl;
	 		cout<<" the rollno:"<<endl;
	 		cout<<roll<<endl;
	 		cout<<" name"<<endl;
			 cout<<name<<endl;
			 for(i=0;i<2;i++)
			 {
			 	cout<<" subject"<<endl;
			 	cout<<subject<<endl;
			 	cout<<" the marks"<<endl;
			 	cout<<marks<<endl;
			 }
			 	
		 }
	int dis()
	{
		return roll;
	}
	
 }h[3];
int main()
{
	
	a t;
	b l;
	c o;
	char z[20],ch,b[20]="rama123",a[20];
	int i,j,k;
cout<<"**************************************************************************************************************************************************************************************************************";
cout<<"**************************** WELCOME TO ABC SCHOOL WEB PAGE************************************************************************";
cout<<"***********************************************************************************************************************************************************************";
cout<<"_____________________________________________________________________________________________________________________________________________________________________________";
homepage:
cout<<"                              kindly enter your login id and password to  move furthur"<<endl;
cout<<"ENTER YOUR NAME:"<<endl;
cin>>	z;	
cout<<"ENTER YOUR PASSWORD:"<<endl;
while('1')
{
	ch=getch();
	if(ch=='.')
	break;
	cout<<"*";
	a[i]=ch;
	i++;
}

cout<<endl;
if(strcmp(a,b)==0)
cout<<"you have successfully logined."<<endl;
else
{
	cout<<"password or user name is wrong"<<endl;
	goto homepage;
}
ofstream outfile;
	 outfile.open("section1.txt",ios::out);
	 for(i=0;i<3;i++)
	 {
	 	s[i].get();
	 	outfile.write((char*)&s[i],sizeof(s[i]));
	 }
	  outfile.close();
 ofstream outfile1;
	 outfile1.open("section2.txt",ios::out);
	 for(i=0;i<3;i++)
	 {
	 	g[i].get();
	 	outfile1.write((char*)&g[i],sizeof(g[i]));
	 }
	  outfile1.close();
ofstream outfile2;
	 outfile.open("section3.txt",ios::out);
	 for(i=0;i<3;i++)
	 {
	 	h[i].get();
	 	outfile2.write((char*)&h[i],sizeof(h[i]));
	 }
	  outfile2.close();	  
cout<<"\n";
cout<<"\n";
hi:
 cout<<"                                             THESE ARE THE MTE RESULTS OF THE 10TH CLASS                  "<<endl;
	    cout<<"                                     S.NO            TABLE"<<endl;
	    cout<<"                                      1              MARKS OF EACH CLASS "<<endl;
	    cout<<"                                      2              ACCORDING TO ROLLNO "<<endl;
	    cout<<"                                      3              Any changes"<<endl;
	   // cout<<"                                      4              REMARKS"<<endl;
	    cout<<"                                      4              exit"<<endl;
         cout<<"\n";
        cout<<"\n";
		cout<<"\n";
		cout<<"ENTER 1 TO VIEW THE MARKS OF THE STUDENTS OF EACH CLASS "<<endl;
		cout<<"ENTER 2 TO VIEW ACCORDING TO ROLLNO"<<endl;
        cout<<"ENTER 3 TO VIEW THE AVERAGE OF ALL THE STUDENTS IN MTE EXAM "<<endl;
       // cout<<"ENTER 4 TO WRITE THE REMARKS TO THE TEACHER ABOUT THE MTE EXAM "<<endl;
        cout<<"ENTER 4 TO EXIT"<<endl;
        int c,d;
        cout<<"ENTER YOUR CHOICE "<<endl;
        cin>>c;
        int f,y,q;
    
        switch(c)
       {
    	case(1):
    		{
    			cout<<"\n_________________________________________________________________________________________________________________________________________________________________________"<<endl;
	            cout<<"***************************************************************************************************************************************************************************"<<endl;
    			cout<<"                             THE STUDENT OF EACH CLASS MARKS"<<endl;
    			cout<<"                      S.NO        TEACHER NAME         SECTION "<<endl;
    			cout<<"                       1            KIRTI               A"<<endl;
    			cout<<"                       2             KAUR                C   "<<endl;
    		    cout<<"                       3         NAHITA PATHANIA          D "<<endl;
    			cout<<"                       4           return                 "<<endl;
				cout<<"\n";
    			
    			cout<<"ENTER THE CLASS SECTION "<<endl;
    		cin>>f;
    		if(f==1||f==2||f==3||f==4)

{
			   		   goto section;}
}


		case(2):
    		{
    			cout<<"\n_________________________________________________________________________________________________________________________________________________________________________"<<endl;
	            cout<<"***************************************************************************************************************************************************************************"<<endl;
    			cout<<"                            STUDENTS ACCORDING TO ROLLNO"<<endl;
    			cout<<"                      S.NO        TEACHER NAME         SECTION "<<endl;
    			cout<<"                       1            KIRTHI               A"<<endl;
    			cout<<"                       2             KAUR                C   "<<endl;
    		    cout<<"                       3         NAHITHA PATANI          D "<<endl;
    			cout<<"                       4           return                 "<<endl;
				cout<<"\n";
    			
    			cout<<"ENTER THE CLASS SECTION "<<endl;
    			
    		cin>>y;
    		if(y==1||y==2||y==3||y==4)

{
			   		   goto rollno;}
}

    		

		case(3):
    		{
    			cout<<"\n_________________________________________________________________________________________________________________________________________________________________________"<<endl;
	            cout<<"***************************************************************************************************************************************************************************"<<endl;
    			cout<<"                          SELECT THE CLASS IN WHICH YOU HAVE TO MODIFY"<<endl;
    			cout<<"                      S.NO        TEACHER NAME         SECTION "<<endl;
    			cout<<"                       1            KIRTHI               A"<<endl;
    			cout<<"                       2             KAUR                C   "<<endl;
    		    cout<<"                       3         NAHITHA PATANI          D "<<endl;
    			
				cout<<"                       4           return                 "<<endl;
							cout<<"\n";
    			cout<<"ENTER THE SUBJECT "<<endl;
    			
    		cin>>q;
    		if(q==1||q==2||q==3||q==4)

{
			   		   goto average;}
}

				
		case(4):
				{   
					break;
				}
	   

	   section:
	   	switch(f)
	   	{
	   	case(1):
	   		{
	   			//cout<<"fgdf";
	   			ifstream outfile;
				   outfile.open("section1.txt");
				   
	   			while(!outfile.eof())
	   			{
				 
			 	   for(i=0;i<3;i++)
    			{
    				outfile.read((char*)&s[i],sizeof(s[i]));
    				    					cout<<"THE DETAILS OF THE STUDENT OF SECTION A";
    					cout<<"COMPANY NAME     SIZE      PRICE\n";
    				s[i].display();
    					goto hi;
    				//	break;
		        }
			   }
			   outfile.close();
		}  
		case(2):
	   		{
	   			ifstream outfile1;
				  outfile1.open("section2.txt");
				while(!outfile1.eof())
	   			{
				  for(i=0;i<3;i++)
    			{
    				outfile1.read((char*)&g[i],sizeof(g[i]));
    			cout<<"THE DETAILS OF THE STUDENT OF SECTION A";
    			g[i].display();
    			goto hi;
    				//	break;
		        }
			   }
			   outfile1.close();
		}
		case(3):
	   		{
	   			ifstream outfile2;
				outfile2.open("section1.txt");
				while(!outfile2.eof())
	   			{
				  for(i=0;i<3;i++)
    			{
    				outfile2.read((char*)&h[i],sizeof(h[i]));
    				cout<<"THE DETAILS OF THE STUDENT OF SECTION A";
    			h[i].display();
    			goto hi;
    				//	break;
		        }
			   }
			   outfile2.close();
			}
					case(4):
				{   
					goto hi;
				}

	}
	rollno:
	   	switch(y)
	   	{
	   	case(1):
	   		{
	   			
	   			ifstream outfile;
				   outfile.open("section1.txt");
				   
	   			while(!outfile.eof())
	   			{
				 
			 	   for(i=0;i<5;i++)
    			{
    				outfile.read((char*)&s[i],sizeof(s[i]));
    			}
    			for(i=0;i<3;i++)
{
	for(j=i+1;j<3;j++)
	{
		if(s[i].dis()>s[j].dis())
		{
		t=s[i];
		s[i]=s[j];
		s[j]=t;	
		}
	
	}
}
for(i=0;i<3;i++)
{
	s[i].display();
}

    				
    					goto hi;
    				//	break;
		        
			   }
			   outfile.close();
		}
		case(2):
	   		{
	   			
	   			ifstream outfile1;
				   outfile.open("section2.txt");
				   
	   			while(!outfile1.eof())
	   			{
				 
			 	   for(i=0;i<3;i++)
    			{
    				outfile1.read((char*)&g[i],sizeof(g[i]));
    			}
    			for(i=0;i<3;i++)
{
	for(j=i+1;j<3;j++)
	{
		if(g[i].dis()>g[j].dis())
		{
		l=g[i];
		g[i]=g[j];
		g[j]=l;	
		}
	
	}
}
for(i=0;i<3;i++)
{
	g[i].display();
}

    				
    					goto hi;
    				//	break;
		        
			   }
			   outfile1.close();
		}    
		case(3):
	   		{
	   			
	   			ifstream outfile2;
				   outfile2.open("section3.txt");
				   
	   			while(!outfile2.eof())
	   			{
				 
			 	   for(i=0;i<3;i++)
    			{
    				outfile2.read((char*)&h[i],sizeof(h[i]));
    			}
    			for(i=0;i<3;i++)
{
	for(j=i+1;j<3;j++)
	{
		if(h[i].dis()>h[j].dis())
		{
		o=h[i];
		h[i]=h[j];
		h[j]=o;	
		}
	
	}
}
for(i=0;i<3;i++)
{
	h[i].display();
}

    				
    					goto hi;
    				//	break;
		        
			   }
			   outfile2.close();
		}  
		case(4):
				{   
					goto hi;
				}
}
average:
switch(q)
	   	{
	   	case(1):
	   		{
	   			int u;
	   			cout<<"enter the rollno u want to modify"<<endl;
	   			cin>>u;
	   			ifstream outfile;
				   outfile.open("section1.txt");
				   
	   			while(!outfile.eof())
	   			{
				 
			 	   for(i=0;i<3;i++)
    			{
    				outfile.read((char*)&s[i],sizeof(s[i]));
    			}
    			for(i=0;i<3;i++)
{

		if(u==s[i].dis())
		{
		s[i].get();
	
	}
}

    				
    					goto hi;
    				//	break;
		        
			   }
			   outfile.close();
		}
		case(2):
	   		{
	   			int u;
	   			cout<<"enter the rollno u want to modify"<<endl;
	   			cin>>u;
	   			
	   			ifstream outfile1;
				   outfile.open("section2.txt");
				   
	   			while(!outfile1.eof())
	   			{
				 
			 	   for(i=0;i<3;i++)
    			{
    				outfile1.read((char*)&g[i],sizeof(g[i]));
    			}
    			for(i=0;i<3;i++)
{
		if(u==g[i].dis())
		{
	g[i].get();
	}
	
	
}

    				
    					goto hi;
    				//	break;
		        
			   }
			   outfile1.close();
		}    
		case(3):
	   		{
	   			int u;
	   			cout<<"enter the rollno u want to modify"<<endl;
	   			cin>>u;
	   			
	   			
	   			ifstream outfile2;
				   outfile2.open("section3.txt");
				   
	   			while(!outfile2.eof())
	   			{
				 
			 	   for(i=0;i<3;i++)
    			{
    				outfile2.read((char*)&h[i],sizeof(h[i]));
    			}
    			for(i=0;i<3;i++)
{
	if(u==h[i].dis())
	h[i].get();
}


    				
    					goto hi;
    				//	break;
		        
			   }
			   outfile2.close();
		}  
		case(4):
				{   
					goto hi;
				}
}
}
cout<<"the end";
		getch();
}
