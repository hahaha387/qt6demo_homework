#include "dbtool.h"
int main()
{
    vector<Grade> students;
    readGrades(students);
      for(int i=0;i<students.size();i++)
      {
          Grade g=students[i];
          cout<<g.getSno()<<" "<<g.getName()<<" "<<g.getMid()<<" "<<g.getFin()<<" "<<g.getHw()<<" "<<g.getFinal()<<endl;
      }
    DBtool dbtool("mydb","postgres","postgres");
    //menue
    while(1)
    {
        int flag;
        cout<<"There has some function to database: "<<endl;
        cout<<"1.插入所有数据 2.查询学生信息 3.删除学生信息 4.清空表 5.删除表 6.退出系统"<<endl;
        cout<<"Please select: ";
        cin>>flag;
        switch (flag) {
        case (1):dbtool.initalValuesToTable(students);
            break;
        case (2):dbtool.selectFromTable();
            break;
        case (3):dbtool.deleteOneFromTable();
            break;
        case (4):dbtool.deleteAllFromTable();
            break;
        case (5):dbtool.dropTable();
            break;
        case (6):flag==-1;
        default:
            break;
       }
        if(flag==-1)
            break;
    }
}
