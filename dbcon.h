#ifndef DBCON_H
#define DBCON_H

#include <pqxx/pqxx>
#include <iostream>
#include <string>
#include <iostream>
#include <sstream>
#include <wx/msgdlg.h>
#include <wx/choice.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>

using namespace std;
using namespace pqxx;
class dbcon
{
    connection*  C;

    public:

    //explicitly declare constructor
    dbcon();
    ~dbcon();

    int SetConnection(){
         std::stringstream connect_string_stream;

    std::string ip;
    std::string port;
    std::string user;
    std::string password;
    std::string db;

    db="distdata";
    ip = "192.168.1.104";
    port = "5432";
    user = "redmine";
    password = "gopackgo";

    connect_string_stream << "dbname=" << db <<" user=" << user <<" password=" <<password <<" hostaddr=" << ip
    <<" port=" << port;
        std::string connect_string = connect_string_stream.str();
        std::string result_text;
       C= new pqxx::connection(connect_string);
      if (C->is_open()) {
         result_text = "Opened database successfully: ";
         return 0;
      } else {
         result_text = "Can't open database";
         return 1;
      }

    }

   pqxx::result querry(std::string strSQL){
        //SetConnection();

        pqxx::work trans(*C,"trans");
        pqxx::result res;

        res=trans.exec(strSQL);


        trans.commit();
        return res;


    }

    void Disconnect(){

          C->disconnect ();
         // delete C;


    }
    //


};


#endif // DBCON_H
