#to use wxwidgets/codeblocks/wxsmith
#install codeblocks
#install wxsmith
#install wxwidgets 2.8
#use svn to download repository from https://ubuntumediagz.com/svn/bdn
# open bdn.cbp in codeblocks



# below will compile the code to distdata.o
g++ *.cpp -o distdata.o `wx-config --cppflags --libs` -lpqxx  -lpq

#below is using wxwidgets 3.0.  Not using this now because it isn't in the 
#app repository for apt-get on ubuntu.  we probably won't use the latest stuff anyway

#g++ *.cpp -o aj.o `~/wxWidgets-3.0.0/buildgtk/wx-config --cppflags --libs` -lpqxx  -lpq

