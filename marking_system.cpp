/*

C application First semester

*/


#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include<cstdio>



using namespace std;
int le;


void menu();
void IT();

void IT_NEW();

void IT_Det();
void Marks();
void Get();

float mari;
string sel;
string dir="C:\\Users\\";
string name;


class Student
{
public:
    char Index[3];
    string Name;
    string NIC;
    string birthdate;
    int telephone_Number = 0;



};


class IT_Student :public Student
{
public:
    struct Mathematics
    {
        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;





    };


    struct  Programming_Fundamental
    {

        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;


    };


    struct English
    {

        float Listening;
        float Speaking;
        float Writing;


    };


    struct Introduction_ComputerScience
    {
        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;




    };

    struct DBMS
    {
        float Paper;
        float CW1;
        float CW2;
        float Practical;



    };

    struct  OOP
    {
        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;




    };


    struct  Computer_Architecture_Network
    {

        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;


    };

    struct Computer_Technology
    {

        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;



    };

    struct Web_Application
    {
        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;



    };

    struct ENTERPRISE_APPLICATION
    {
        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;



    };

    struct GUI_APPLICATION
    {
        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;



    };

    struct Operating_System
    {

        float Paper;
        float CW1;
        float CW2;
        float OnlineExam;


    };

    void addMaths()
    {

        Mathematics m1;
        cout << "  Maths Paper : ";
        string mar;


        cin >> mar;
        if (isdigit(mar[0]))

        {
            cout << "Digit";

            float  mari = stof(mar);
            if (mari >= 0 && mari <= 100)
                m1.Paper = mari;
        }
        else
        {
            cout << " Enter a Number between 0-100 : ";

            while (!(mari >= 0 && mari <= 100 && isdigit(mar[0])))
            {
                cin >> mar;
                if (isdigit(mar[0]))
                {
                    mari = stof(mar);
                    if (mari >= 0 && mari <= 100)
                    {
                        m1.Paper = mari;
                    }

                    else
                    {
                        cout << "   Enter a Number between 0 - 100 : ";

                    }
                }

                else
                {
                    cout << "   Enter a Number between 0 - 100 : ";


                }

            }


        }



        m1.Paper = mari;
    }







};
int main()




{

    menu();



}

void menu()
{
     system("color 6");

    cout << "  \n \t\t\t\t\t\t ## NIBM STUDENTS ## \n \t \t \t \t";
    cout << " \n \t\t\t\t\t\tPress 1 to Continue : ";


    cin >> sel;
    system("cls");

    if (sel == "1")
    {
        IT();
    }

    else
    {


        while (!(sel == "1"))
        {

            cout << "\n Please Enter 1  ";
            cin >> sel;

        }

        if (sel == "1")
            IT();




    }



}



void IT()
{

    cout << "\n \nTo Enter a new Student Press 1 :";

    cout << "\n \nTo Get Student Detail Press 2 :";
    cout << "\n  \nTo Enter Student Marks  Press 3 :";
    cout << "\n  \nTo Get Student Marks Press 4 :";
    cout << "\n  \nPress E to Exit :";
    cout << " \n  \n   Press 1,2,3,4 or E : ";


    cin >> sel;
    system("cls");

    if (sel == "E")
        exit(0);

    if ((sel == "1" || sel == "2" || sel=="3" || sel=="4"))
    {
        if (sel == "1")
        {
            IT_NEW();

        }

        else if (sel=="3")
        {
            Marks();
        }
        else if(sel=="2")
        {
            IT_Det();

        }

        else if (sel=="4")
        {
            Get();

        }
    }
    else {
        while (sel == "1" || sel == "2" || sel=="3")
        {
            cin >> sel;


        }
    }


}





void IT_NEW()
{

    IT_Student ist;


    string fname;
    string sname;
    string index;
    string NIC;
    string BD;

    cout << "\nEnter Index Number : ";
    cin >> index;



    cout << "\nEnter Student's First Name : ";
    cin >> fname;


    cout << "\nEnter Student's Second Name : ";
    cin >> sname;

    cout << "\nEnter Student NIC : ";
    cin >> NIC;


    cout << "\nEnter BirthDate :";
    cin >> BD;

    ofstream  myfile(dir+index+".txt", ios::app);




    myfile << index;
    myfile << "\t";
    myfile << fname;
    myfile << "\t";

    myfile << sname;








    myfile << "\t";

    myfile << NIC;


    myfile << "\t";
    myfile << BD;

    myfile << "\n";

    myfile << "Mathematics";

    myfile << "\n";

    myfile << "Programming";
    myfile.close();

    IT();
}


void IT_Det()

{
    string IND;
    cout << "\nEnter Student Index Number ";
    cin >> IND;

    string line;



    ifstream is(dir+IND+".txt");


    if (!is)
    {
        cout << "\n  Wrong Index Number";

    }


    (getline(is, line));

    cout << "\n \n   Index Number    First Name    Second Name    NIC     BirthDate \n";
    cout << line;



    is.close();
}



void Marks()
{
    string CW1M;
    string CW2M;
    string OE;


    string index;
    cout << "\n  Enter Index Number ";
    cin >> index;


    char sn;
    cout << "  Press 1 for Mathematics : ";

    cout << "  Press 2 for Programming Fundamental :\n \n";

    cout << "        Enter Subject Number  : ";
    cin >> sn;


    if (sn == '1')
    {
        string SPM;
        char selIn;
        string PM;
        int MathLen;

        ifstream  myfile(dir + index + ".txt", ios::in);

        string fline;
        getline(myfile, fline);

        le = fline.length();


        string MathLine;
        getline(myfile, MathLine);

        string ProLine;
        getline(myfile,ProLine);

        myfile.close();

        if (MathLine.length() == 11)
        {

            cout << "\n   Paper Marks ";
            cin >> PM;

            MathLine = MathLine + "\t";
            MathLine = MathLine + PM;

            cout << "\n Course Work 1 Marks :";

            cin >> PM;

            MathLine = MathLine + "\t";
            MathLine = MathLine + PM;



            cout << "\n Course Work 2 Marks :";

            cin >> PM;

            MathLine = MathLine + "\t";
            MathLine = MathLine + PM;
            cout << "\n Online Exam Marks :";

            cin >> PM;

            MathLine = MathLine + "\t";
            MathLine = MathLine + PM;


            string h = dir + index + ".txt";

            remove(h.c_str());



            ofstream file(dir + index + ".txt", ios::app);
            file << fline;
            file << "\n";
            file << MathLine;
            file << "\n";
            file << ProLine;


        }

        else
        {

            cout << "Enter 1 for Paper \n";
            cout << "Enter 2 for CW1 \n ";
            cout << "Enter 3 for CW2 \n";
            cout << "Enter 4 Online Exam \n";
            cout << "Enter E to Exit \n ";

            cout << "Enter 1,2,3 Or 4 Or E ";
            cin >> selIn;


            if (selIn == '1')

            {



                string MathLine = "";
                cout << "\n Paper Marks ";


                cout << "\n Press A if Absent ";

                cin >> PM;
                string ab = "AB";

                cin >> ab;
                ifstream  myfile(dir + index + ".txt", ios::in);

                string fline;
                getline(myfile, fline);

                le = fline.length();



                getline(myfile, MathLine);





                string SPM;





                int i = 12;
                while (MathLine[i] != '\t')
                {

                    SPM = SPM + MathLine[i];
                    ++i;
                }





                if (SPM == "AB")
                    MathLine.erase(12, 2);

                else
                {
                    MathLine.erase(12, SPM.length());

                }

                MathLine.insert(12, PM);


                cout << MathLine;
                myfile.close();

                string h = dir + index + ".txt";

                remove(h.c_str());

                ofstream mf(dir + index + ".txt", ios::out);
                mf << fline;
                mf << "\n";
                mf << MathLine;



                mf.close();
            }




            if (selIn == '2')
            {

                ifstream  myfile(dir + index + ".txt", ios::in);

                string fline;
                getline(myfile, fline);

                int le = fline.length();

                string MathLine;

                getline(myfile, MathLine);

                myfile.close();
                int i;
                int j = 0;

                for ( i= 0; i < MathLine.length(); i++)
                {


                    if (MathLine[i] == '\t')
                    ++j;

                    if (j == 2)
                        break;



                }

                cout << i;
                cout << "\n";
                int k = i-1;

                cout << k;
                while (i>0)
                {


                    if (MathLine[i] == '\t')
                        break;

                    --i;

                }

                cout << "\n";
                cout << i;


                string sub = MathLine.substr(i+1,2);




                MathLine.erase(i+1,2);

                string NM;

                cout << "\n \n      Enter new Marks ";

                cin >> NM;

                MathLine.insert(i+1,NM);



                string f = dir + index + ".txt";
                myfile.close();
                remove(f.c_str());

                ofstream file(dir+index+".txt",ios::app);

                file << fline;
                file << "\n";
                file << MathLine;

                file.close();

            }



            if (selIn == '3')
            {

                ifstream  myfile(dir + index + ".txt", ios::in);

                string fline;
                getline(myfile, fline);

                int le = fline.length();

                string MathLine;

                getline(myfile, MathLine);


                int i;
                int j = 0;

                for (i = 0; i < MathLine.length(); i++)
                {


                    if (MathLine[i] == '\t')
                        ++j;

                    if (j == 3)
                        break;



                }


                int k = i - 1;

                cout << k;
                while (i > 0)
                {

                    if (MathLine[i] == '\t')
                        break;

                    --i;

                }



                string sub = MathLine.substr(i + 1, k-i);




                MathLine.erase(i + 1, 2);

                string NM;

                cout << "\n \n      Enter new Marks ";

                cin >> NM;

                MathLine.insert(i + 1, NM);


                string f = dir + index + ".txt";
                myfile.close();
                remove(f.c_str());

                ofstream file(dir + index + ".txt", ios::app);

                file << fline;
                file << "\n";
                file << MathLine;

                file.close();


            }



            if (selIn == '4')
            {

                ifstream  myfile(dir + index + ".txt", ios::in);

                string fline;
                getline(myfile, fline);

                int le = fline.length();

                string MathLine;

                getline(myfile, MathLine);


                int k = MathLine.length()-1;

                int j = k;

                while (k>0)
                {
                    if (MathLine[k] == '\t')
                    {

                        break;

                    }
                    --k;
                }

                string sub = MathLine.substr(k + 1, 2 );




                MathLine.erase( k+ 1, 2);

                string NM;

                cout << "\n \n      Enter new Marks ";

                cin >> NM;

                MathLine.insert( k + 1, NM);


                string f = dir + index + ".txt";
                myfile.close();
                remove(f.c_str());

                ofstream file(dir + index + ".txt", ios::app);

                file << fline;
                file << "\n";
                file << MathLine;

                file.close();


            }






        }




    }

    if (sn == '2')
    {
        string SPM;
        char selIn;
        string PM;
        int ProLen;

        ifstream  myfile(dir + index + ".txt", ios::in);

        string fline;
        getline(myfile, fline);

        le = fline.length();


        string ProLine;
        string MathLine;
        getline(myfile, MathLine);
        getline(myfile, ProLine);
        myfile.close();

        if (ProLine.length() == 11)
        {

            ofstream  myofile(dir + index + ".txt", ios::app);

            cout << "\n   Paper Marks ";
            cin >> PM;

            myofile << "\t";
            myofile << PM;

            cout << "\n Course Work 1 Marks :";

            cin >> PM;

            myofile << "\t";
            myofile << PM;

            cout << "\n Course Work 2 Marks :";

            cin >> PM;

            myofile << "\t";
            myofile << PM;

            cout << "\n Online Exam Marks :";

            cin >> PM;

            myofile << "\t";
            myofile << PM;


            myofile.close();
        }

        else
        {

            cout << "Enter 1 for Paper \n";
            cout << "Enter 2 for CW1 \n ";
            cout << "Enter 3 for CW2 \n";
            cout << "Enter 4 Online Exam \n";
            cout << "Enter E to Exit \n ";

            cout << "Enter 1,2,3 Or 4 Or E ";
            cin >> selIn;


            if (selIn == '1')

            {



                string ProLine = "";
                cout << "\n Paper Marks ";


                cout << "\n Press A if Absent ";

                cin >> PM;
                string ab = "AB";

                cin >> ab;
                ifstream  myfile(dir + index + ".txt", ios::in);

                string fline;
                getline(myfile, fline);

                le = fline.length();



                getline(myfile, ProLine);
                getline(myfile, ProLine);




                string SPM;





                int i = 12;
                while (ProLine[i] != '\t')
                {

                    SPM = SPM + ProLine[i];
                    ++i;
                }





                if (SPM == "AB")
                    ProLine.erase(12, 2);

                else
                {
                    ProLine.erase(12, SPM.length());

                }

                ProLine.insert(12, PM);



                myfile.close();

                string h = dir + index + ".txt";

                remove(h.c_str());

                ofstream mf(dir + index + ".txt", ios::out);
                mf << fline;
                mf << "\n";
                mf <<ProLine;



                mf.close();
            }




            if (selIn == '2')
            {

                ifstream  myfile(dir + index + ".txt", ios::in);

                string fline;
                getline(myfile, fline);

                int le = fline.length();

                string ProLine;

                getline(myfile, ProLine);
                getline(myfile,ProLine);
                myfile.close();
                int i;
                int j = 0;

                for (i = 0; i < ProLine.length(); i++)
                {


                    if (ProLine[i] == '\t')
                        ++j;

                    if (j == 2)
                        break;



                }

                cout << i;
                cout << "\n";
                int k = i - 1;

                cout << k;
                while (i > 0)
                {


                    if (ProLine[i] == '\t')
                        break;

                    --i;

                }

                cout << "\n";
                cout << i;


                string sub = ProLine.substr(i + 1, 2);




                ProLine.erase(i + 1, 2);

                string NM;

                cout << "\n \n      Enter new Marks ";

                cin >> NM;

                ProLine.insert(i + 1, NM);



                string f = dir + index + ".txt";
                myfile.close();
                remove(f.c_str());

                ofstream file(dir + index + ".txt", ios::app);

                file << fline;
                file << "\n";
                file << ProLine;

                file.close();

            }



            if (selIn == '3')
            {

                ifstream  myfile(dir + index + ".txt", ios::in);

                string fline;
                getline(myfile, fline);

                int le = fline.length();

                string ProLine;

                getline(myfile, ProLine);
                getline(myfile, ProLine);

                int i;
                int j = 0;

                for (i = 0; i <ProLine.length(); i++)
                {


                    if (ProLine[i] == '\t')
                        ++j;

                    if (j == 3)
                        break;



                }


                int k = i - 1;

                cout << k;
                while (i > 0)
                {

                    if (ProLine[i] == '\t')
                        break;

                    --i;

                }



                string sub = ProLine.substr(i + 1, k - i);




                ProLine.erase(i + 1, 2);

                string NM;

                cout << "\n \n      Enter new Marks ";

                cin >> NM;

                ProLine.insert(i + 1, NM);


                string f = dir + index + ".txt";
                myfile.close();
                remove(f.c_str());

                ofstream file(dir + index + ".txt", ios::app);

                file << fline;
                file << "\n";
                file << ProLine;

                file.close();


            }



            if (selIn == '4')
            {

                ifstream  myfile(dir + index + ".txt", ios::in);

                string fline;
                getline(myfile, fline);

                int le = fline.length();

                string ProLine;

                getline(myfile, ProLine);
                getline(myfile,ProLine);

                int k = ProLine.length() - 1;

                int j = k;

                while (k > 0)
                {
                    if (ProLine[k] == '\t')
                    {

                        break;

                    }
                    --k;
                }

                string sub = ProLine.substr(k + 1, 2);




                ProLine.erase(k + 1, 2);

                string NM;

                cout << "\n \n      Enter new Marks :";

                cin >> NM;

               ProLine.insert(k + 1, NM);


                string f = dir + index + ".txt";
                myfile.close();
                remove(f.c_str());

                ofstream file(dir + index + ".txt", ios::app);

                file << fline;
                file << "\n";
                file << ProLine;

                file.close();


            }






        }




    }




}


void Get()
{

    cout << "Hello";

    string dir="C:\\Users\\VIRAJ\\Desktop\\";
    string index;

    cout << "\n";
    cout << "  Enter Index : ";
    cin >> index;
    ifstream ifile(dir+index+".txt",ios::in);
    if (!ifile)
    {
        cout << "Wrong Index ";

    }

    else


    {
        cout << "\n Enter Subject Number :";


        string in;
        cout << "\n\n   Enter 1 for Paper : ";
        cout << "\n     Enter 2 for CW1 :";
        cout << "\n     Enter 3 for CW2 :";
        cout << "\n     Enter 4 for Online Exam :";

        cout << "\n\n   Enter 1,2,3 or 4 :";
        cin >> in;



        string PM;
        string MathLine;

        if (in=="1")
        {
            getline(ifile,MathLine);
            getline(ifile,MathLine);


            int i = 0;
            int j = 0;
            while(i<MathLine.length()){

                if (MathLine[i] == '\t')
                {
                    ++j;
                }

                if (j == 2)
                {
                    break;

                }
                ++i;
            }

            int k = i;
            --i;

            while (i>0)
            {

                if (MathLine[i] == '\t')
                    break;
                --i;
            }

            ++i;
            string h;
            h = MathLine.substr(i,k-i);

            cout << "Paper Marks    ";
            cout << h;



        }


        if (in == "2")
        {
            getline(ifile, MathLine);
            getline(ifile, MathLine);


            int i = 0;
            int j = 0;
            while (i < MathLine.length()) {

                if (MathLine[i] == '\t')
                {
                    ++j;
                }

                if (j == 3)
                {
                    break;

                }
                ++i;
            }

            int k = --i;

            while (i > 0)
            {
                if (MathLine[i] == '\t')
                    break;
                --i;
            }

            ++i;
            string h;
            h = MathLine.substr(i, k-i);

            cout << "CW1 Marks    " ;
            cout << h;




        }


        if (in == "3")
        {
            getline(ifile, MathLine);
            getline(ifile, MathLine);


            int i = 0;
            int j = 0;
            while (i < MathLine.length()) {

                if (MathLine[i] == '\t')
                {
                    ++j;
                }

                if (j == 4)
                {
                    break;

                }
                ++i;
            }

            int k = i;

            while (i > 0)
            {
                if (MathLine[i] == '\t')
                    break;
                --i;
            }

            ++i;
            string h;
            h = MathLine.substr(i, k-i);

            cout << "CW2    " ;
            cout << h;




        }


        if (in == "4")
        {
            getline(ifile, MathLine);
            getline(ifile, MathLine);


            int i = MathLine.length()-1;
            int k = i;

            while (i>0) {
                if (MathLine[i] == '\t')
                    break;
                --i;


            }


            string h;
            h = MathLine.substr(i+1, k - i+1);

            cout << "Online Exam  ";
            cout << h;


        }


    }

}

