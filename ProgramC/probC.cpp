//TEAM 2NorthPartay


#include <iostream>
#include <string>

using namespace std;

struct Junction
{

  string m_name;
  int m_start;
  int m_last;
  int m_location;
  bool m_used;
  
};

struct Terminal
{

  string m_name;
  int m_location;
  string m_type;
  
};


int main()
{
  Junction junct[100];
  string trip[100];
  Terminal term[100];
  int miles;
  int cases;
  int locations;
  int numJ, numT;
  int Donuts;
  bool found;
  char type;
  cout << "# PROGRAM C BY 2North Partay" << endl;
  
  cin >> cases;
  for (int i = 0; i < cases; i++)
  {
    miles = 0;
    numJ = 0;
    numT = 0;
    found = false;
    cin >> locations;
    for (int k = 0; k < locations; k++)
    {
      cin >> type;
      cin.ignore(50,'"');
      if (type == 'j' || type == 'J')
      {
        getline(cin,junct[numJ].m_name,'"');
        cin >> junct[numJ].m_start;
        cin >> junct[numJ].m_last;
        if (junct[numJ].m_start > junct[numJ].m_last)
        {
          int tmp = junct[numJ].m_start;
          junct[numJ].m_start = junct[numJ].m_last;
          junct[numJ].m_last = tmp;
        }
        junct[numJ].m_location = k + 1;
        junct[numJ].m_used = false;
        numJ++;
      }
      else
      {
        getline(cin,term[numT].m_name,'"');
        cin >> term[numT].m_type;
        term[numT].m_location = k+1;
        if (term[numT].m_type == "DONUT")
            Donuts = numT;
        numT++;
      }
    }
    for (int k=0; k<numJ; k++)
    {
      for (int j = junct[k].m_start; j <= junct[k].m_last; j++)
      {
        if (j == term[Donuts].m_location){
          trip[miles] = junct[k].m_name;
          miles++;
          trip[miles] = term[Donuts].m_name;
          miles++;
//          for (int x=0; x<miles; x++)
  //          cout << trip[x] << endl;
          found = true;
        }
      }
      if (!found)
        for (int j = junct[k].m_start; j<= junct[k].m_last; j++)
        {
          for (int m=0; m<numJ; m++)
          {
            if (m==k){}
            else if(junct[m].m_used){}
            else if( junct[m].m_location == j)
            {
              junct[k].m_used = true;
              trip[miles] = junct[k].m_name;
              miles++;
//              for (int x=0; x<miles; x++)
//                cout << trip[x] << endl;
              k=m-1;
            }
//            else
//                cout << "Nooooooooooooooo!" << endl;
          }
        }
    }
    cout << "Case #" << i + 1 << ":" << endl;
    for (int x=0; x<miles; x++)
      cout << trip[x] << endl;
  }
  return 0;
}