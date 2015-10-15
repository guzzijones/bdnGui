#ifndef PROTOSERVICE_H
#define PROTOSERVICE_H
#include <wx/socket.h>
template <class T>

class protoService{
private:

protected:

public:
    static void DoWrite(const wxSocketClient & in, void * data, T size){
        T bytesWrite = 0;

        std::cout << "Size to write: " << size << std::endl;
        while(bytesWrite!=size){
            T WriteThisTime;
            do{
                WriteThisTime=send(sock,data+bytesWrite,size-bytesWrite,0); // send the message length
                }while((WriteThisTime == -1) && (errno == EINTR));
                if(WriteThisTime<0){
                std::cout << "Write failure" << std::endl;
                throw std::runtime_error("DoWrite Error");
            }
        }
    };
    static void DoRead(const wxSocketClient & in, void * data, T size){
      T bytesRead=0;
      while(bytesRead!=size){
          T readThisTime;
          do{
          readThisTime=recv(sock,data+bytesRead,size-bytesRead,0); // Receive the message length
          }while((readThisTime == -1) && (errno == EINTR));
          if(readThisTime<0){
             std::cout << "read failure" << std::endl;
             throw std::runtime_error("DoRead Error");
          }
          bytesRead+=readThisTime;
       }
    };


};

#endif
