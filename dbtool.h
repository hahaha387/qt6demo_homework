#ifndef DBTOOL_H
#define DBTOOL_H

#include <string>
#include <iostream>
#include <pqxx/pqxx>
#include "grade.h"
using std::string;
using namespace pqxx;

class DBtool{
public:
    DBtool(string name,string user,string password);
    ~DBtool();
    void creatTable();
    void initalValuesToTable(vector<Grade> g);
    void dropTable();
    void selectFromTable();
    void deleteOneFromTable();
    void deleteAllFromTable();
private:
    string m_dbname;
    string m_user;
    string m_password;
};
#endif // DBTOOL_H
