#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void read_data_count()
{
    string line;
    ifstream fout("test.txt",ios::binary);

    streampos begin,end;

    //get the current in the file
    begin = fout.tellg();

    //move to the end of the file
    fout.seekg(0,ios::end);
    end = fout.tellg();

    streampos filesize = end-begin;
 
    if(!fout){
        cerr <<"Error opening file \n";
        return;
    }
    
    cout<<"Filesize: "<<filesize<<endl;    
}

void read_line()
{
   string line;
   int lineCount = 0;

   ifstream file("test.txt");

   while(getline(file,line)){
      lineCount++;
   }

   cout<<"Number of line: "<<lineCount<<endl;
}

int main(int argc,char *argv[])
{
    
    // for(int i=0;i<argc;i++){
    //     cout<<(string)argv[i]<<" ";
    // }
    for(int i=1;i<argc;i++){
          if((string)argv[i] == "-c"){
            read_data_count();
            
        }else if((string)argv[i] == "-l"){
            read_line();
            
        }
    }

    return 0;
}