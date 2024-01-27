#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<string.h>
#include<cstring>
#include<stdio.h>
#include<fstream>
#include<conio.h>
using namespace std;

char un[20];
class Admin{
    char name[20];
    int totsub;
    char subject[10] [10];
    char mobile[15],mail[50],fname[20];
    char password[20],rpassword[20];
    public:
        char rollno[15]; //using to getstudent data from the admin portal---all recode entites are made by this method
        void getstdat(){
            cout<<"\nEnter the student Name : ";
            gets(name);
            cout<<"\nEnter the students Roll no. :";
            cin>>rollno;
            cout<<"\nEnter the students father name : ";
            gets(fname);
            cout<<"\nEnter the mobile number : ";
            gets(mobile);
            cout<<"\nEnter the mail-Id : ";
            gets(mail);
            cout<<"\nEnter the total subjects : ";
            cint>>totsub;
            for(int i=0;i<totsub;i++){
                cout<<"\nEnter the subject "<<i+1<<" Name :";
                cint>>subject[i];
            }
            cout<<"\nCreate your login password: ";
            cint>>password;
            cout<<"\nEnter the unique keyword to recover the password: ";
            cin>>rpassword;
            cout<<"\n\nPlease note your UserName is ID/RollNo.\n";
        }


    //this funtion authenticates the login of the both students and the faculties with their reference 
    //of their unique ID/PaSSWORD login provided

    int login(){
        if((strcmp(::un,rollno)) == 0){
            cout<<"\nEnter the login password: ";
            int len = 0;
            len = strlen(password);
            char inputpassswd[20];
            for(int i=0;i<0;i++){
                inputpassswd[i] = getch();
                cout<<"#";
            }
            inputpassswd[i] = NULL;
            cout<<"\nThe entered password is "<<inputpassswd;
            if(strmp(::un,rollno == 0) && (strcmp(password,inputpassswd) == 0))
            return 1;
            else
            return 0;
    
        }
        else return 0;
    }


    //this function help both the student and faculties to recover the password with 
    //the help of unique provided by the Admin

    int recover(){
        //cout<<"\Enter the I;nput username is " <<::un;
        char key[20];
        if(strmp(::un,rollno) == 0)
        {
            cout<<"\nEnter the unique Keyword(provided by the Admin): ";
            cin>>key;
            if((strcmp(key,rpassword) == 0))
            {
                cout<<"\nYou are valid user.";
                cout<<"\nYour password is "<<password;
                cout<<"\nPlease exit to login again";
                return 1;
            }
            else returm 0;
        }
        else return 0;
    }


    //This funtion return displays the faculty profile to the faculty at their respective portals
    int faprofile(){
        if(strmp(::un,rollno == 0) )
        {
            cout<<"\nFaculty Name                : "<<name;
            cout<<"\nFaculty father's Name       : "<<fname;
            cout<<"\nFaculty Mobile no.          : "<<mobile;
            cout<<"\nFaculty Email-ID            : "<<mail;

        }
        else return 0;
    }

    //This function displays the different subjects of the faculty at their respective portals
    int faprofile(){
        if(strmp(::un,rollno == 0) ){
            cout<<"\nFaculty Name                    : "<<name;
            cout<<"\nFaculty Father's Name           : "<<fname;
            cout<<"\nFaculty Mobile No.              : "<<mobile;
            cout<<"\nFaculty E-mail ID               : "<<mail;


        }
        else 
            return 0;
        
    }


    //This funtion displays the different subjects of the faculty at their respective portals
    int knowfasub(){
        if(strmp(::un,rollno == 0) ){
            cout<<"\nFaculty total subjects :- "<<totsub;
            for(int i=0;i<totsub;i++){
                cout<<"\n\tSubject "<<i+1<<" : "<<subject[i];
            }
            return 1;
        }
        else 
            return 0;
    }

    //this funtion helps a faculty to add a subject in their module.
    void addfasub(){
        if(strmp(::un,rollno == 0) ){
            cout<<"\nEnter the new subject : ";
            cin>>subject[totsub];
            totsub++;
            cout<<"\n\nNew subject added successfully...";
        }
    }

    //This funtion helps a faculty to delete the subject from their module.
    void delfasub(){
        knowfasub();
        int de =0;
        if(strmp(::un,rollno == 0) ){
            if(totsub == 0 || totsub<0){
                totsub = 0;
                cout<<"\nNone subject exist...";
                getch();
                exit(0);

            }
            cout<<"\nEnter the subject to be deleted: ";
            cin>>de;
            if(de == totsub){
                totsub--;
                strcpy(subject[totsub]," ");
            }
            else if (totsub == 1){
                totsub = 0;
                strcpy(subject[totsub]," ");
            }
            else {
                de--;
                strcpy(subject[totsub]," ");
                for(int p = de;p<totsub;p++){
                    strcpy(subject[p],subject[p+1]);
                }
                totsub--;
            }
            cout<<"\n Records updated successfully...";
        }
    }


    //This funtion help a faculty to modify his personal profile
    void modfaprofile(){
        if(strmp(::un,rollno == 0) ){
            cout<<"\nThe profile details are : ";
            cout<<"\n 1. Faculty E-mail : "<<mail;
            cout<<"\n 2. Facutly Mobile : "<<mobile;
            int g = -1;
            cout<<"\n\nEnter the detail no. to be modified : ";
            cin>>g;
            if(g == 1){
                char nmail[50];
                cout<<"\nEnter the new mail address : ";
                strcpy(mail,nmail);
                cout<<"\nRecords updated successfully...";
            }
            else if(g == 2){
                char nmobile[15];
                cout<<"\nEnter the new mobile No. : ";
                gets(nmobile);
                strcpy(mobile,nmobile);
                cout<<"\nRecords updates successfully...";
            }
            else
            cout<<"\nInvalid input provided...";
        }
    }


    //This funtion will display the student profile at the student portal.
    int stprofile(){
        if(strmp(::un,rollno == 0) ){
            cout<<"\nStudent Name                    : "<<name;
            cout<<"\nStudent Father's Name           : "<<fname;
            cout<<"\nStudent Mobile No.              : "<<mobile;
            cout<<"\nStudent E-mail ID               : "<<mail;
            return 1;

        }
        else 
            return 0;
        
    }

    //This funtion displays the different enrolled subjects of the respective students... according to their profile
    int knowstsub(){
        if(strmp(::un,rollno == 0) ){
            cout<<"\nStudent Total subject :- "<<totsub;
            for(int i=0;i<totsub;i++){
                cout<<"\n\tSubject "<<i+1<<" : "<<subject[i];
            }
            return 1;
        }

    }

    //This funtion allows the student to add the subject in total subjects of the student profile.
    void addsub(){
        if(strmp(::un,rollno == 0) ){
            cout<<"\nEnter the new subject :";
            cin>>subject[totsub];
            totsub++;
            cout<<"\n\nNew Subject added sucessfully.."
        }
    }


    //This funtion allows the student to delete the subject in total subjects of the student profile.
    void delsub(){
        knowstsub();
        int de = 0;
        if(strmp(::un,rollno == 0)){ 
            if(totsub == 0 || totsub < 0){
                totsub  = 0;
                cout<<"\nNonde subject exits...";
                getch();
                exit(0);
            }
            cout<<"\nEnter the Subject No. to be deleted: ";
            cin>>de;
            if(de == totsub){
                totsub --;
                strcpy(subject[totsub]," ");
            }
            else if (totsub == 1){
                totsub = 0;
                strcpy(subject[totsub]," ");
            }
            else{
                de --;
                strcpy(subject[totsub] , " ");
                for(int p=de;p<totsub;p++){
                    strcpy(subject[p] , subject[p+1]);
                }
                totsub --;
            }
            cout<<"\n Recordes updated successfully..";
        
        }
    }

    //this funtion allows the student to modify their personal profile details at the student portal.
    void modstprofile(){
        if((strcmp(:: un,rollno) == 0)){
            cout<<"\nThe profile details are : ";
            cout<<"\nStudent Mobile No.              : "<<mobile;
            cout<<"\nStudent E-mail ID               : "<<mail;
            int g = -1;
            cout<<"\nEnter the detail no. to be modified : ";
            cin>>g;
            if(g ==1){
                char nmail[50];
                cout<<"\nEnter the new mail ID: ";
                strcpy(mail,nmail);
                cout<<"\nRecords updated successfully...";

            }
            if(g == 2){
                char nmail[50];
                
                cout<<"\nEnter the new mobile number: ";
                gets(nmobile);
                strcpy(mobile,nmobile);
                cout<<"\nRecords updated successfully...";

            }
            else{
                cout<<"\nInvalid input... :(";
            }
        }
    }


    //This funtion allows the ADMIN to make the new record entry for the different 
    //new faculties.. new faculty records are updated with the help of this funtion
    void getfadata(){
        cout<<"\nEnter the faculty data : ";
        gets(name);
        cout<<"\nEnter the Faculty Roll o. : ";
        cin>>rollno;
        cout<<"\nEnter the faculty father name: ";
        gets(fname);
        cout<<"\nEnter the mobile no. : ";
        gets(mobile);
        cout<<"\nEnter the E-mail ID : ";
        gets(mail);
        cout<<"\nEnter the total subjects: ";
        cin>>totsub;
        cout<<"\nThe subject choosen are : "<<totsub;
        for(int i=0;i<totsub;i++){
            cout<<"Enter the subject "<<i+1<<" Name : ";
            cin>>subject[i];
        }
        cout<<"\nCreate your login password : ";
        cin>>password;
        cout<<"\nEnter the unique Keyword to recover password";
        cin>>rpassword;
        cout<<"\n\nPlease note your UserName is ID/Rollno. \n";
    }

    //this funtion displays all the relevant information to the admin related to the 
    //student at the ADMIN portals
    void stdisplay(){
        cout<<"\nStudent Name                    : "<<name;
        cout<<"\nStudent ID/roll no.             : "<<rollno;
        cout<<"\nStudent Father's Name           : "<<fname;
        cout<<"\nStudent Mobile No.              : "<<mobile;
        cout<<"\nStudent E-mail ID               : "<<mail;
        cout<<"\nStudent subject                 : "<<totsub;
        for(int i=0;i<totsub;i++){
            cout<<"\n   Subject "<<i+1<<" : "<<subject[i];
        }
        if(totsub == 0){
            cout<<" (None subjects specified...)";
        }
    }

    //This funtion displays all the relavent information to the admin related to the faculty at the ADMIN portal
    void fadisplay(){
        cout<<"\nFaculty Name                    : "<<name;
        cout<<"\nfaculty ID/roll no.             : "<<rollno;
        cout<<"\nFaculty Father's Name           : "<<fname;
        cout<<"\nFaculty Mobile No.              : "<<mobile;
        cout<<"\nFaculty E-mail ID               : "<<mail;
        cout<<"\nFaculty subject                 : "<<totsub;
        for(int i=0;i<totsub;i++){
            cout<<"\n   Subject "<<i+1<<" : "<<subject[i];
        }
        if(totsub == 0){
            cout<<" (None subjects specified...)";
        }
    }

        
}a;

Admin f ; // a & f are the objects of the class admin


void main(){
    int ch;
    clrscr();
    cout<<"\n\n\n\t\t\tWelcome to the knight database portal ";
    cout<<"\n\n\n\t\t\tEnter to continue";
    getch();
    clrscr();
    cout<<"\n\n\n\t\t\tPress 1 for Admin portal";
    cout<<"\n\t\t\tPress 2 for faculty portal";
    cout<<"\n\t\t\tPress 3 for strudent portal";
    cout<<"\n\n\t\tEnter your choice";
    cin>>ch;
    clrscr();
    if(ch == 1){
        char adminuser[20] , adminpass[20];
        cout<<"\n\t\t\tWelcome to the admin login portal ";
        cout<<"\n\nEnter the Username: ";
        cin>>adminuser;
        cout<<"\nEnter the password: ";
        int k;
        for(k = 0 ;k<8;k++){
            adminpass[k] = getch();
            cout<<"*";
        }
        getch();
        adminpass[k] = NULL;
        if((strcmp(adminuser, "admin") == 0) && (strcmp(adminpass,"Password") == 0)){
            clrscr();
        }
        else{
            cout<<"\n\n\t\t\t   Invalid access to portal ";
            cout<<"\n\n\t\t\t\tThank you!!!";
            getch();
            exit(0);
        }
        char opera = 'y';
        do {
            int tmp;
            cout<<"\n\t\t\t\tWelcome to admin panel";
            cout<<"\n\nPress 1 to add faculty record";
            cout<<"\nPress 2 to add multiple record of faculty";
            cout<<"\nPress 3 to view all the records of the faculty";
            cout<<"\nPress 4 to delete the faculty record";
            cout<<"\nPress 5 to add a Student record ";
            cout<<"\nPress 6 to Add multiple record of student";
            cout<<"\nPress 7 to view all records of student";
            cout<<"\nPress 8 to delete the student record";
            cout<<"\nPress 9 to exit";
            cout<<"\n\n\tEnter your choice: ";
            cin>>tmp;
            clrscr();
            if(tmp == 1) // For inserting d single faculty records
            {
                cout<<"\nEnter the details : ";
                fstream fs;
                fs.open("Fainfo.txt" , ios::in|ios::out|ios::ate);
                a.getfadata();
                fs.write((char *) &a , sizeof(Admin));
                fs.close();
                cout<<"\nRecords Entered Successfully..";
            } // for inserting d single faculty records

            if(tmp == 2) // for inserting d multiple faculty records
            {
                int m  = 0;
                fstream fs;
                fs.open("Fainfo.txt" , ios::in|ios::out|ios::ate);
                do {
                    cout<<"\nEnter the details : ";
                    a.getfadata();
                    fs.write((char *) &a , sizeof(Admin));
                    cout<<"\nPress 0 if you want Enter More records: ";
                    cin>>m;
                }while( m == 0);
                fs.close();
                cout<<"\nRecords Entered Successfully..";  
            }
            if(tmp == 3){
                fstream fs;
                fs.open("fanifo.txt" ,ios::in);
                fs.seekg(0);
                while (!fs.eof())
                {
                    fs.read((char *) &a , sizeof(Admin));
                    a.fadisplay();
                } fs.close();
                
            }
            if(tmp == 4){
                char tmpfaid[15];
                int de = 0 , result =  -1;
                cout<<"\nEnter the faculty ID/Roll no. : ";
                cin>>tmpfaid;
                fstream fs;
                fs.open("fainfo.txt",ios::in);
                fstream fs1;
                fs1.open("Fanewinfo.txt", ios::out|ios::ate);
                while(!fs.eof()){
                    fs.read((char *) &a ,sizeof(Admin));
                    result = strcmp(tmpfaid,a.rollno);
                    if(result == 0){
                        de = 1;
                    } else{
                        fs1.write((char *) &a,sizeof(Admin));
                    }
                    if(de == -1){
                        cout<<"\nRecord Deleted successfully..";
                    } else{
                        cout<<"\nRecord not found...";

                    }
                    fs.close();
                    fs1.close();
                    remove("fainfo.txt");
                    rename("fanewinfo.txt" , "fainfo.txt");
                }

                if(tmp == 5){
                    cout<<"\nEnter the details : ";
                    fstream fs;
                    fs.open("stinfo.txt",ios::in|ios::out|ios::ate);
                    a.getfadata();
                    fs.write((char * ) &a,sizeof(Admin));
                    fs.close();
                    cout<<"\nRecords entered successfully...";
                }
                if(tmp == 6){
                    int m=0;
                    fstream fs;
                    fs.open("stinfo.txt",ios::in|ios::out|ios::ate);
                    do {
                        cout<<"\nEnter the  details : ";
                        a.getfadata();
                        fs.write((char * ) &a,sizeof(Admin));
                        cout<<"\nPress 0 if you want Enter More records: ";
                        cin>>m;
                    } while(m == 0);
                }
                if(tmp == 7){
                    fstream fs ;
                    fs.open("stinfo.txt",ios::in);
                    fs.seekg(0);
                    while(!fs.eof()){
                        fs.read((char * )&a,sizeof(Admin));
                        a.stdisplay();
                    }
                    fs.close();

                }

                if(tmp == 8){
                    char tmpstid[15];
                    int de = 0 ,result =-1;
                    cout<<"\nEnter the Student ID/Roll no. : ";
                    cin>>tmpstid;
                    fstream fs;
                    fs.open("stinfo.txt",ios::in);
                    fstream fs1;
                    fs1.open("stnewinfo.txt" , ios::out|ios::ate);
                    while(!fs.eof()){
                        fs.read((char *)&a,sizeof(Admin));
                        result = strcmp(tmpstid,a.rollno);
                        if(result ==  0){
                            de = 1;
                        } else{
                            fs1.write((char *)&a ,sizeof(Admin));
                        }
                    }

                    if (de == 1){
                        cout<<"\nRecord deleted successfully...";
                    } else {
                        cout<<"\nRecord not found...";
                    }
                    fs.close();
                    fs1.close();
                    remove("stinfo.txt");
                    remove("stinewinfo.txt","st info.txt");
                }

                if(tmp == 9){
                    cout<<"\n\n\n\n\t\t\t\tThank You !!!!";
                    getch();
                    exit(0);
                }
                if(tmp <1 || tmp >9){
                    clrscr();
                }
                getch();
                cout<<"\n\nPress y; for More operations otherwise n : ";
                cin>>opera;
                if(opera != 'y'){
                    getch();
                    clrscr();
                    cout<<"\n\n\n\n\n\t\t\t\t\tThank you !!!";
                    getch();
                } // closing thank you
            } while(opera == 'Y' || opera == 'y');
        }//closing of admin login


        if(ch == 2) // start of the faculty view portal {

        }


    }
}