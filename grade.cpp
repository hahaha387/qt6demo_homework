#include "grade.h"

Grade::Grade(string sno,string name,double mid, double fin, vector<double> hw):m_sno(sno),m_name{name},m_mid{mid},m_fin{fin},m_homework{hw}
{
    m_finalgrade=0;
}
Grade::~Grade()
{}
string Grade::getName()
{return m_name;}
string Grade::getSno()
{return m_sno;}
double Grade::getMid()
{
   return m_mid;
}
double Grade::getFin()
{return m_fin;}
double Grade::getHw()
{
    int sz=this->m_homework.size();
    if (sz % 2 == 0) {
         return (this->m_homework[sz /2 -1] + this->m_homework[sz /2]) / 2;
    }else {
         return this->m_homework[sz / 2];
    }
    return 0;
}
double Grade::getFinal()
{
    return  0.2 *this->m_mid + 0.4 * this->m_fin + 0.4 * getMid();
}
//read student grades
void readGrades(vector<Grade> &students)
{
    ifstream ifs("/root/qt/student/GRADE/grades.dat");
    if(ifs.is_open()==1)
        cout<<"successfully open"<<endl;
    else
        cout<<"unsuccessfully open"<<endl;
    int i{0};
    while(ifs)
    {
        double mid,fin;
        string name;
        string sno;
        ifs>>sno>>name>>mid>>fin;
        vector<double> hw;
        if(ifs)
        {
            double x;
            hw.clear();
            while(ifs >> x)
            {
                hw.push_back(x);
            }
         ifs.clear();
         Grade student(sno,name,mid,fin,hw);
         students.push_back(student);
        }
    }
    ifs.close();
}
