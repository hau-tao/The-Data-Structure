// Stack_test.cpp

#include <iostream>
#include <cassert>
#include "Stack.h"
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
   Stack<int, vector> s1;
   assert(s1.size() == 0);
   assert(s1.empty());

   s1.push(16);
   assert(s1.size() == 1);
   assert(s1.top() == 16);

   s1.pop();
   assert(s1.size() == 0);

   s1.push(11);
   assert(s1.size() == 1);
   assert(s1.top() == 11);

   s1.push(22);
   assert(s1.size() == 2);
   assert(s1.top() == 22);

   s1.push(33);
   assert(s1.size() == 3);
   assert(s1.top() == 33);

   s1.pop();
   assert(s1.size() == 2);
   assert(s1.top() == 22);

   Stack<string, list> s2;
   s2.push("abc");
   s2.push("de");
   s2.pop();
   assert(s2.top() == "abc");

   cout << "SUCCESS\n";
}