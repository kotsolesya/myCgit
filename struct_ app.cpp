#include <iostream>
#include <fstream>
using namespace std;

struct adr {
            char name[10];
            char city[10];
            int zip;
            }A;

void inputSt (struct adr *tmp)  //vvedenya z klaviatury
{
    cout<<"name= ";
         cin>>tmp->name;
    cout<<endl<<"city= ";
         cin>>tmp->city;
    cout<<endl<<"zip= ";
          cin>>tmp->zip;    
}    
void outputSt (struct adr *tmp) // vuvid na ekran
{
     // cout<<tmp->name<<" ";
     cout<<(*tmp).name<<" ";
     
     cout<<tmp->city<<" ";
     cout<<tmp->zip<<endl;        
}      

           
int main(void)
{
/*int N;
cin>>N;
struct adr *C = new struct adr [N];
*/
struct adr C;   

inputSt (&A);
outputSt(&A);

ofstream f;
    f.open("database.txt",ios::app);

if (!f)
    {
        cerr << "Uh oh, file could not be opened for reading!" << endl;
        exit(1);
    }
f.write((char *)&A,sizeof(adr));
    /* f<<A.name<<" ";
     f<<A.city<<" ";
     f<<A.zip<<endl;   */

f.close();  
                 

system("pause");         
   
return 0;
}
