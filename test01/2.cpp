// old version
#include <iostream>
#include <sstream>
using namespace std;
int main(){
	bool check=false;
	int mas[10],num,sum,i1,j1;
		string str;
    getline(cin,str);
    cin>>sum;
    istringstream stream(str);
    for(int i=0;i<10;i++){
    	if(!(stream>>num)){
    		cout<<"An error has occured while reading the input sequence.";
    		exit(0);
    	}
    	mas[i]=num;
    }
    for (int i=0;i<10;i++){
      if (mas[i]>mas[i+1]){
        cout<<"The input sequence must be non-decreasing.";
        cin.get();
        exit(0);
      }
    }
    for(int j=0;j<10;j++){
      for(int i=0;i<10;i++){
    	if((mas[i]+mas[j]==sum)&&(i!=j)){
    	i1=i;
    	j1=j;
    	check=true;  
    	  }
      }
    }
    	if(check) cout<<mas[i1]<<" "<<mas[j1];
    	else cout<<"There is no such pair of numbers";
	return 0;
}
//new version
/*
#include <iostream>
#include <string>
#include <sstream>
void read(int mas[10]){
  std::string s;
  getline(std::cin,s);
  std::istringstream chit(s);
  for (int i=0;i<10;i++){
    int r;
    if(chit>>r) mas[i]=r;
    else {
      std::cout<<"An error has occurred while reading the input sequence.\n";
      exit(0);
    }
  }
}
bool decr(int mas[10]){
  for (int i=0;i<9;i++){
    if (mas[i]>mas[i+1]) return 0;
  }
  return 1;
}
int main(){
  int mas[10],n;
  read(mas);
  if(!decr(mas)){
     std::cout<<"The input sequence must be non-decreasing.\n";
     return 0;
  }
  std::cin>>n;
  for (int i=0;i<10;i++){
    for (int j=0;j<10;j++){
      if (((mas[i]+mas[j])==n)&&(i!=j)){ std::cout<<mas[i]<<" "<<mas[j]; return 0;} 
    }
  }
  std::cout<<"There is no such pair of numbers.\n";
  return 0;
}
*/
