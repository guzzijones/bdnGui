#ifndef PROTOCOLBASECLIENT_H
#define PROTOCOLBASECLIENT_H
#include <stdexcept>
#include "protoService.h"
#include <bitset>
class protocolBaseClient{
private:
   std::string _totalMessage;
   wxSocketClient  _sock;
protected:

public:
   protocolBaseClient(){};
   protocolBaseClient(const wxSocketClient & sock);
   //creates socket and sets two fields to be send
   //uses protoService::DoWrite to send both field
   void DoRead();
   void DoWrite(const std::string & in);
   //uses protoService::DoRead to read
   std::string getTotalMessage()const{return _totalMessage;};
   wxSocketClient getSock()const{return _sock;};
   void setMessage(const std::string & in){_totalMessage=in;};

};
#endif
