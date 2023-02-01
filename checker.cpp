#include <iostream >  
#include <string>  
using namespace std; 
int fca(){ 
   return 1; 
}; 
class tranlug  
{   
public: 
tranlug(const std::string &ht,bool z):ho_ten(ht),xinhgai(z){}
 std::string ho_ten; 
 bool xinhgai;    
 virtual void banh_ben_trai(int a){ 
    a=true; 
 }   
 private:  
 bool xuatxac;  
}; 
// ke thua  
class tuoi: public tranlug{  \
  public : 
  tuoi(const std::string &ht ,bool z):tranlug(ht,z) 
  {} 
   void banh_ben_trai(int a){ 
    a=0; 
  } 
}; 
  
int main(){ 
   int (*ptr)()=fca; 
   int *a;   
    int b=1; 
   a=&b; 
   (*a)=1; 
   cout<<(*a)++<<endl;  
   cout<<(*a)<<endl; ; 
   tuoi *ga1=new tuoi("tran luong",false); 
   tranlug *ga2=new tranlug("nhat minh",true )  ;
   cout << ga1->ho_ten ;
     
   ga1->banh_ben_trai(ga2->xinhgai) ;  
   delete ga1, ga2;  
   return 0;  
   tranlug *ga3= new tuoi("depno",true);  
   ga3->banh_ben_trai(3); 
} 
