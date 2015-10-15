#ifndef SUP_MASTER_H
#define SUP_MASTER_H


#include <wx/wx.h>


class sup_master
{
   public:
      sup_master(
      wxString master_sup_id,
      wxString supplier_name,
      wxString supplier_state,
      wxString supplier_zip,
      wxString ship_split_script,
      wxString incoming_zipfile_name,
      wxString yyyymm
                 ):
           master_sup_id(master_sup_id),
       supplier_name(supplier_name),
      supplier_state(supplier_state),
     supplier_zip(supplier_zip),
     ship_split_script(ship_split_script),
     incoming_zipfile_name(incoming_zipfile_name),
    yyyymm(yyyymm){};



      virtual ~sup_master(){};

      wxString get_master_sup_id(){return master_sup_id;};
      wxString get_supplier_name(){return supplier_name;};
     wxString get_supplier_state(){return supplier_state;};
    wxString  get_supplier_zip(){return supplier_zip;};
     wxString get_ship_split_script(){return ship_split_script;};
     wxString get_incoming_zipfile_name(){return incoming_zipfile_name;};
    wxString get_yyyymm(){return yyyymm;};

      void set_master_sup_id(wxString in){master_sup_id=in;};
      void set_supplier_name(wxString in){supplier_name=in;};
     void set_supplier_state(wxString in){supplier_state=in;};
    void  set_supplier_zip(wxString in){supplier_zip=in;};
     void set_ship_split_script(wxString in){ship_split_script=in;};
     void set_incoming_zipfile_name(wxString in){incoming_zipfile_name=in;};
    void set_yyyymm(wxString in){yyyymm=in;};

   protected:

   private:
      wxString master_sup_id;
      wxString supplier_name;
      wxString supplier_state;
      wxString supplier_zip;
      wxString ship_split_script;
      wxString incoming_zipfile_name;
      wxString yyyymm;


};
#endif


