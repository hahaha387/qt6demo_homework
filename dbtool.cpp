#include "dbtool.h"
#include <string>
#include <iostream>
#include <pqxx/pqxx>
#include "grade.h"
using std::string;
using namespace pqxx;
DBtool::DBtool(string name,string user,string password)
    :m_dbname{name},m_user{user},m_password{password}{}

DBtool::~DBtool()
{}
//insert values
void DBtool::initalValuesToTable(vector<Grade> students)
{    string address ="dbname = " + m_dbname + " user=" + m_user + " password="+m_password+" hostaddr=127.0.0.1 port=5432";
     connection C(address);
     for(auto i{0};i < students.size();i++)
     {
         Grade g=students[i];
         string name = g.getName();
         string sno=g.getSno();
         string sql = "insert into grade(m_sno,m_name,m_mid,m_fin,m_hm,m_finalgrade) values('" + sno +"','"+name+"',";
         sql=sql+to_string(g.getMid())+","+to_string(g.getFin())+","+to_string(g.getHw())+","+to_string(g.getFinal())+")";
         work W(C);
         W.exec( sql );
         W.commit();
         cout << "insert "<<students[i].getName()<<"'s informations successfully" << endl;
     }
     cout<<"---------------------------------------"<<endl;

 }
//drop table
void DBtool::dropTable()
{
    string address ="dbname = " + m_dbname + " user=" + m_user + " password="+m_password+" hostaddr=127.0.0.1 port=5432";
    connection C(address);
    work W(C);
    string sql;
    string name;
    cout<<"input the table's name which you want to drop: ";
    cin>>name;
    sql = "drop table " + name;
    W.exec( sql );
    W.commit();
    cout << "select successfully" << endl;
}

//select information for you want
void DBtool::selectFromTable()
{
    string address ="dbname = " + m_dbname + " user=" + m_user + " password="+m_password+" hostaddr=127.0.0.1 port=5432";
    connection C(address);
    string sql;
    string tablename;
    cout<<"table name: ";
    cin>>tablename;
    string name1;
    cout<<"student's name(input '*' will output all students's informations): ";
    cin>>name1;

    if(name1 == "*") {
        sql =  "select * from grade";
    }else {
        sql = "select * from " + tablename;
        sql = sql + " where m_name = '" + name1 + "'";
    }
    nontransaction ntx(C);
    result r (ntx.exec(sql));
    for(result::const_iterator i = r.begin();i != r.end();i++) {
        cout<<"sno: "<<i[0].as<string>()<<endl;
        cout<<"name: "<<i[1].as<string>()<<endl;
        cout<<"midgrade: "<<i[2].as<double>()<<endl;
        cout<<"fingrade: "<<i[3].as<double>()<<endl;
        cout<<"hmdrade: "<<i[4].as<double>()<<endl;
        cout<<"score: "<<i[5].as<double>()<<endl;
    }
}

void DBtool::deleteOneFromTable()
{
    string address ="dbname = " + m_dbname + " user=" + m_user + " password="+m_password+" hostaddr=127.0.0.1 port=5432";
    connection C(address);
    work W(C);
    string sql;
    string tablename;
    cout<<"table name: ";
    cin>>tablename;
    string name;
    cout<<"student's name:";
    cin>>name;
     sql="delete from grade where m_name = '"+ name+ "'";
     W.exec(sql);
     W.commit();
}
//
void DBtool::deleteAllFromTable()
{
    string address ="dbname = " + m_dbname + " user=" + m_user + " password="+m_password+" hostaddr=127.0.0.1 port=5432";
    connection C(address);
    work W(C);
    string tablename;
    cout<<"input the table name which you want to delete: ";
    cin>>tablename;
    string sql = "delete from " + tablename;
    W.exec( sql );
    W.commit();
    cout << "delete successfully" << endl;
}

