#include <iostream>
#include<algorithm>
#include<queue>
using namespace std;


int main()
{
   queue<int> q;

   q.push(10);
   q.push(11);
   q.push(12);
   q.push(15);

   cout<<"size of after push :-"<<q.size()<<endl;
   cout <<"Is empty or not :-"<<(q.empty() ? "yes" : "no") << endl;
   cout<<q.front()<<endl;
   cout<<" pop first"<<endl;
   q.pop();
   cout<<"front element ="<<q.front()<<endl;
   cout<<" pop 2nd "<<endl;
   q.pop();
   cout<<"front element ="<<q.front()<<endl;
   cout<<" pop 3rd "<<endl;
   q.pop();
   cout<<"front element ="<<q.front()<<endl;
   cout<<" pop 4th "<<endl;
   q.pop();
   cout<<"front element ="<<q.front()<<endl;

    return 0;
}

/*
It works on FIFO ( first in first out)
    +-----+-----+-----+-----+-----+
    |  1  |  2  |  3  |  4  |  5  |
    +-----+-----+-----+-----+-----+
    Front                       Rear
*/
