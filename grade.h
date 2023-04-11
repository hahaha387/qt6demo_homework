#ifndef GRADE_H
#define GRADE_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <limits>
using std::vector;
using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::cerr;
using std::cin;
class Grade{
    friend void readGrades(vector<Grade> &students);
    friend void calclulateGrade(vector<Grade> &students);
public:
    Grade(string sno,string name, double mid, double fin, std::vector<double> hw);
    ~Grade();
    string getName();
    string getSno();
    double getMid();
    double getFin();
    double getHw();
    double getFinal();
private:
    string m_sno;
    string m_name;
    double m_mid;
    double m_fin;
    vector<double> m_homework;
    double m_finalgrade;
};
 //catch students grades and information
    //direct catch information from file
void readGrades(vector<Grade> &students);
void calclulateGrade(vector<Grade> &students);
#endif
