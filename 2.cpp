#include<iostream>
#include<string.h>
#include<fstream>
#include<math.h>
using namespace std;

class college{
	string clg;
	public:
	void cseBranch(int);
	void iseBranch(int);
	void mechBranch(int);
	void eceBranch(int);
	void openFile(string);
	};
	

void college::cseBranch(int rank)
{
cout<<"\t\t\t\t\t\tSorted college on the basis CSE"<<endl;
if(rank>=1 && rank<=500){
	cout<<"RVCE\n"<<"PES\n"<<"BMSCE\n"<<"MSRIT\n"<<"BIT\n"<<"MVIT\n"<<
	"DSCE\n"<<"BMSIT\n"<<"NMIT\n\n";
	
	cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	openFile(clg);
	}
if(rank>500 && rank<=1000){
	cout<<"PES\nBMSCE\nMSRIT\nBIT\nMVIT\nDSCE\nBMSIT\nNMIT\n\n";
	abc :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto abc;
		}
	openFile(clg);
	}
if(rank>1000 && rank<=2000){
	cout<<"1)MSRIT\n2)BIT\n3)MVIT\n4)DSCE\n5)BMSIT\n6)NMIT\n\n";
	def :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BMSCE") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto def;
		}
	openFile(clg);
	}
if(rank>2000 && rank<=3000){
	cout<<"1)BIT\n2)MVIT\n3)DSCE\n4)BMSIT\n5)NMIT\n\n";
	ghi :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg == "RVCE"||clg=="PES"||clg=="BMSCE"||clg=="MSRIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n";
		goto ghi;
		}
	openFile(clg);
	}
if(rank>3000 && rank<=4000){
	cout<<"1)DSCE\n2)BMSIT\n3)NMIT\n\n";
	jkl :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg == "RVCE"||clg=="PES"||clg=="BMSCE"||clg=="MSRIT"||clg=="BIT"||clg=="MVIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto jkl;
		}
	openFile(clg);
	}
if(rank>4000 && rank<=5000){
	cout<<"1)BMSIT\n2)NMIT\n\n";
	mno :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{
	if(clg == "RVCE"||clg=="PES"||clg=="BMSCE"||clg=="MSRIT"||clg=="BIT"||clg=="MVIT"||clg=="DSCE") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto mno;
		}
	openFile(clg);
	}
if(rank>5000)
	cout<<"Sorry,better to appear for next year's exam\n\n";		  		
}


void college::iseBranch(int rank)
{
cout<<"\t\t\t\t\t\tSorted college on the basis ISE"<<endl;
if(rank>=1 && rank<=800){
	cout<<"1)RVCE\n"<<"2)PES\n"<<"3)BMSCE\n"<<"4)BIT\n"<<"5)MSRIT\n"<<"6)MVIT\n"<<
	"7)DSCE\n"<<"8)BMSIT\n"<<"9)NMIT\n\n";
	
	cout<<"Enter your choice: ";
	cin>>clg;
	openFile(clg);
	}
if(rank>800 && rank<=1700){
	cout<<"1)PES\n2)BMSCE\n3)BIT\n4)MSRIT\n5)MVIT\n6)DSCE\n7)BMSIT\n8)NMIT\n\n";
	a :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto a;
		}
	openFile(clg);
	}
if(rank>1700 && rank<=3000){
	cout<<"1)BIT\n2)MSRIT\n3)MVIT\n4)DSCE\n5)BMSIT\n6)NMIT\n\n";
	b :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{
	if(clg=="RVCE"||clg=="PES"||clg=="BMSCE") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto b;
		}
	openFile(clg);
	}		  		
if(rank>3000 && rank<=4500){
	cout<<"1)MVIT\n2)DSCE\n3)BMSIT\n4)NMIT\n\n";
	c :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BMSCE"||clg=="BIT"||clg=="MSRIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto c;
		}
	openFile(clg);
	}
if(rank>4500 && rank<=6000){
	cout<<"1)DSCE\n2)BMSIT\n3)NMIT\n\n";
	d :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BMSCE"||clg=="BIT"||clg=="MSRIT"||clg=="MVIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto d;
		}
	openFile(clg);
	}
if(rank>6000 && rank<=7000){
	cout<<"1)BMSIT\n2)NMIT\n\n";
	e:   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BMSCE"||clg=="BIT"||clg=="MSRIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto e;
		}
	openFile(clg);
	}
if(rank>7000)
	cout<<"Sorry,better to appear for next year's exam\n\n";
}


void college::eceBranch(int rank)
{
cout<<"\t\t\t\t\t\tSorted college on the basis ECE"<<endl;
if(rank>=1 && rank<=2000){
	cout<<"1)RVCE\n"<<"2)BMSCE\n"<<"3)PES\n"<<"4)BIT\n"<<"5)MSRIT\n"<<"6)MVIT\n"<<
	"7)DSCE\n"<<"8)NMIT\n"<<"9)BMSIT\n\n";
	cout<<"Enter your choice: ";
	cin>>clg;
	openFile(clg);
	}
if(rank>2000 && rank<=4000){	  		
	cout<<"1)PES\n"<<"2)MSRIT\n"<<"3)BIT\n"<<"4)MVIT\n"<<
	"5)BMSIT\n"<<"6)DSCE\n"<<"7)NMIT\n\n";
	ij :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="BMSCE") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto ij;
		}
	openFile(clg);
	}
if(rank>4000 && rank<=6000){
	cout<<"1)BIT\n"<<"2)MVIT\n"<<"3)BMSIT\n"<<"4)DSCE\n"<<"5)NMIT\n\n";
	kl:   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BMSCE"||clg=="MSRIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto kl;
		}
	openFile(clg);
	}
if(rank>6000 && rank<=8000){
	cout<<"1)BMSIT\n"<<"2)DSCE\n"<<"3)NMIT\n\n";
	mn :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BMSCE"||clg=="BIT"||clg=="MSRIT"||clg=="MVIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto mn;
		}
	openFile(clg);
	}
if(rank>8000 && rank<=1300){
	cout<<"1)DSCE\n"<<"2)NMIT\n\n";
	op :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BMSCE"||clg=="BIT"||clg=="MSRIT"||clg=="MVIT"||clg=="BMSIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto op;
		}
	openFile(clg);
	}
if(rank>13000)
	cout<<"Sorry, better to appear in next year's exam\n\n";
}


void college::mechBranch(int rank)
{
cout<<"\t\t\t\t\t\tSorted college on the basis MECH"<<endl;
if(rank>=1 && rank<=1300){
	cout<<"1)RVCE\n"<<"2)BMSCE\n"<<"3)PES\n"<<"4)BIT\n"<<"5)MSRIT\n"<<"6)MVIT\n"<<
	"7)DSCE\n"<<"8)NMIT\n"<<"9)BMSIT\n\n";
	cout<<"Enter your choice: ";
	cin>>clg;
	openFile(clg);
	}
if(rank>1300 && rank<=2600){
	cout<<"1)PES\n2)BIT\n3)MSRIT\n4)MVIT\n5)DSCE\n6)NMIT\n7)BMSIT\n\n";
	ab :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto ab;
		}
	openFile(clg);
	}
if(rank>2600 && rank<=4000){
	cout<<"1)MSRIT\n2)MVIT\n3)DSCE\n4)NMIT\n5)BMSIT\n\n";
	cd :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto cd;
		}
	openFile(clg);
	}
if(rank>4000 && rank<=5500){
	cout<<"1)DSCE\n2)NMIT\n3)BMSIT\n\n";
	ef :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BIT"||clg=="MSRIT"||clg=="MVIT") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto ef;
		}
	openFile(clg);
	}
if(rank>5500 && rank<=9000){
	cout<<"1)NMIT\n2)BMSIT\n\n";
	gh :   cout<<"\nEnter your choice(in caps): ";
	cin>>clg;
	try{

	if(clg=="RVCE"||clg=="PES"||clg=="BIT"||clg=="MSRIT"||clg=="MVIT"||clg=="DSCE") throw 1;	
		}
	catch (int x){
		cout<<"\nOption not available\n\n";
		goto gh;
		}
	openFile(clg);
	}
if(rank>9000)
	cout<<"Sorry, better to appear in next year's exam\n\n";
}


void college::openFile(string clg)
{
string line;
if(clg=="RVCE"){
	cout<<"\t\t\t\t\t\tCollege details of RVCE"<<endl;
	cout<<"\nBASIC DETAILS:\n\n";
	ifstream in;
	in.open("rvceb.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tFACILITIES:\n\n";
	in.open("rvcef.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tPLACEMENT RECORD:\n\n";
	in.open("rvcep.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tCONTACT INFO:\n\n";
	in.open("rvcec.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	}

if(clg=="PES"){
	cout<<"\t\t\t\t\t\tCollege details of PES"<<endl;
	cout<<"\n\t\t\t\t\t\t\tBASIC DETAILS:\n\n";
	ifstream in;
	in.open("pesb.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tFACILITIES:\n\n";
	in.open("pesf.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tPLACEMENT RECORD:\n\n";
	in.open("pesp.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tCONTACT INFO:\n\n";
	in.open("pesc.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	}

if(clg=="BIT"){
	cout<<"\t\t\t\t\t\tCollege details of BIT"<<endl;
	cout<<"\n\t\t\t\t\t\t\tBASIC DETAILS:\n\n";
	ifstream in;
	in.open("bitb.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tFACILITIES:\n\n";
	in.open("bitf.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tPLACEMENT RECORD:\n\n";
	in.open("bitp.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tCONTACT INFO:\n\n";
	in.open("bitc.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	}

if(clg=="MSRIT"){
	cout<<"\t\t\t\t\t\tCollege details of MSRIT"<<endl;
	cout<<"\n\t\t\t\t\t\t\tBASIC DETAILS:\n\n";
	ifstream in;
	in.open("msritb.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tFACILITIES:\n\n";
	in.open("msritf.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tPLACEMENT RECORD:\n\n";
	in.open("msritp.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tCONTACT INFO:\n\n";
	in.open("msritc.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	}


if(clg=="MVIT"){
	cout<<"\t\t\t\t\t\tCollege details of MVIT"<<endl;
	cout<<"\n\t\t\t\t\t\t\tBASIC DETAILS:\n\n";
	ifstream in;
	in.open("smvitb.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tFACILITIES:\n\n";
	in.open("smvitf.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tPLACEMENT RECORD:\n\n";
	in.open("smvitp.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tCONTACT INFO:\n\n";
	in.open("smvitc.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	}


if(clg=="BMSIT"){
	cout<<"\t\t\t\t\t\tCollege details of BMSIT"<<endl;
	cout<<"\n\t\t\t\t\t\t\tBASIC DETAILS:\n\n";
	ifstream in;
	in.open("bmsitb.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tFACILITIES:\n\n";
	in.open("bmsitf.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tPLACEMENT RECORD:\n\n";
	in.open("bmsitp.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tCONTACT INFO:\n\n";
	in.open("bmsitc.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	}

if(clg=="DSCE"){
	cout<<"\t\t\t\t\t\tCollege details of DSCE"<<endl;
	cout<<"\n\t\t\t\t\t\t\tBASIC DETAILS:\n\n";
	ifstream in;
	in.open("dsceb.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tFACILITIES:\n\n";
	in.open("dscef.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tPLACEMENT RECORD:\n\n";
	in.open("dscep.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tCONTACT INFO:\n\n";
	in.open("dscec.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	}

if(clg=="NMIT"){
	cout<<"\t\t\t\t\t\tCollege details of NMIT"<<endl;
	cout<<"\n\t\t\t\t\t\t\tBASIC DETAILS:\n\n";
	ifstream in;
	in.open("nmitb.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tFACILITIES:\n\n";
	in.open("nmitf.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tPLACEMENT RECORD:\n\n";
	in.open("nmitp.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tCONTACT INFO:\n\n";
	in.open("nmitc.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	}

if(clg=="BMSCE"){
	cout<<"\t\t\t\t\t\tCollege details of BMSCE"<<endl;
	cout<<"\n\t\t\t\t\t\t\tBASIC DETAILS:\n\n";
	ifstream in;
	in.open("bmsceb.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tFACILITIES:\n\n";
	in.open("bmscef.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tPLACEMENT RECORD:\n\n";
	in.open("bmscep.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	cout<<"\n\t\t\t\t\t\t\tCONTACT INFO:\n\n";
	in.open("bmscec.txt");
	while(getline(in,line))
	{
		cout<<line<<endl;
	}
	in.close();
	}
}


	

int main()
{

college c;	//class object

int rank;
char pref1;
char choice;
int pref2;
string clg;
cout<<"\t\t\t\t\t\t##############WELCOME#################"<<endl<<endl<<endl;
cout<<"Please enter your COMEDK rank:  ";
cin>>rank;
if(rank<1){
	cout<<"Invalid Rank"<<endl;
	return 0;
	}
cout<<"\n\nWhat's your preference:\na)Branch \nb)College\n\n";
cin>>pref1;
switch(pref1){
	case 'a':{
		  cout<<"Select your preferred branch:\n1)CSE\n2)ISE\n3)MECH\n4)ECE\n\n";
		  cin>>pref2;
		  switch(pref2){
		  	case 1: {
		  		c.cseBranch(rank);
		  		break;
				}
		  	
		  	case 2: {
		  		c.iseBranch(rank);
		  		break;
		  		}
		  	
		  	case 3: {
		  		 c.mechBranch(rank);		  			
		  		 break;
		  		 }
		  		 
		  	case 4: {
		  		c.eceBranch(rank);		  		
		  		break;
		  		}
		  	default: cout<<"Please enter a valid choice\n";
		  	}
		  	
		   break;
		   }
		  	
	case 'b':{
		  cout<<"\t\t\t\t\tBest available colleges for you:"<<endl;
		  if(rank>=1 && rank<=2000){
		  	cout<<"RVCE\n"<<"PES\n"<<"BMSCE\n"<<"MSRIT\n"<<"BIT\n"<<"MVIT\n"<<
		  	"DSCE\n"<<"BMSIT\n"<<"NMIT\n\n";
		  	cout<<"Enter your college choice: ";
		  	cin>>clg;
		  	c.openFile(clg);		  	
		  	}
		  	
		  if(rank>2000 && rank<=4000){
		  	cout<<"1)PES -- MECH, ECE\n2)BMSCE -- ISE, MECH, ECE\n3)MSRIT\n4)BIT\n5)MVIT\n6)DSCE\n7)BMSIT\n8)NMIT\n\n";
			i :   cout<<"\nEnter your choice(in caps): ";
			 	cin>>clg;
			try{

			if(clg=="RVCE") throw 1;	
			}
			catch (int x){
				cout<<"\nOption not available\n\n";
				goto i;
			}
			c.openFile(clg);
		  	}
		  if(rank>4000 && rank<=6000){
		  	cout<<"1)MSRIT -- ECE\n2)BIT -- ECE\n3)MVIT -- ISE,MECH,ECE\n4)DSCE\n5)BMSIT\n6)NMIT\n\n";
			J :   cout<<"\nEnter your choice(in caps): ";
			 	cin>>clg;
			try{

			if(clg=="RVCE"||clg=="PES"||clg=="BMSCE") throw 1;	
			}
			catch (int x){
				cout<<"\nOption not available\n\n";
				goto J;
			}
			c.openFile(clg);
		  	}
		  if(rank>6000 && rank<=8000){
		  	cout<<"1)BIT -- ECE\n2)MVIT -- MECH,ECE\n3)DSCE -- MECH,ECE\n4)BMSIT\n5)NMIT\n\n";
			k :   cout<<"\nEnter your choice(in caps): ";
			 	cin>>clg;
			try{

			if(clg=="RVCE"||clg=="PES"||clg=="BMSCE"||clg=="MSRIT") throw 1;	
			}
			catch (int x){
				cout<<"\nOption not available\n\n";
				goto k;
			}
			c.openFile(clg);
		  	}	
		  if(rank>8000 && rank<=13000){
		  	cout<<"1)DSCE -- ECE\n2)BMSIT -- MECH,ECE\n3)NMIT -- ECE\n\n";
		  	L :   cout<<"\nEnter your choice(in caps): ";
			 	cin>>clg;
			try{

			if(clg=="RVCE"||clg=="PES"||clg=="BMSCE"||clg=="MSRIT"||clg=="BIT"||clg=="MVIT") throw 1;	
			}
			catch (int x){
				cout<<"\nOption not available\n\n";
				goto L;
			}
			c.openFile(clg);
		  	}
		  if(rank>13000)
		  	cout<<"Sorry, better to appear in next year's exam\n\n";
		  	break;
		  	}
	default: cout<<"Please enter a valid choice\n"<<endl;
		 }
return 0;
}
