/*
           || Standard Template Library ||
==========================================================================================================================================================================

#Four Parts : Containers , Iterators , Algorithms , Functors

VECTOR -> Advanced dynamic array in C++.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
1] How to Creat a Vector 

-> #include <iostream>
   #include <vector>
   using namespace std;

   int main() {
   
        vector<int> vec;
   
        cout << vec.size() << endl; ---(to know the Size)
        return 0;
   }
        Output :- 0
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
2] Types of Functions in Vector

-> size & capacity , push_back & pop_back , emplace_back 
   at()or[] , front & back 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
Function 1: (push_back) :

          #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec;
   
        vec.push_back(1); --(Vector size increases)
        cout << vec.size() << endl; 
        return 0;
   }

   Output := 1 

Example: (push_back) , (capacity) :

          #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec;
   
        vec.push_back(1); --(Vector size increases)
        vec.push_back(2);
        vec.push_back(3);

        cout << vec.size() << endl; --(3)
        cout << vec.capacity() << endl; --(4) 
        return 0;
   }

   Output := Size : 3
             Capacity : 4 --(capacity becomes double if size increases) 
                             eg: size of array is 2 -> | 1 | 2 |   |   | 
                                 Capacity : |  | -> will be 4

Example: Printing every element of Vector


        (push_back) , (capacity) :

          #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec;
   
        vec.push_back(1); --(Vector size increases)
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);

       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;
        return 0;
   }

   Output := Size : 1 2 3 4 5

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
Function 2: emplace_back  ---(alternative of push_back)


          #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec;
   
        vec.push_back(1); 
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);
        vec.emplace_back(6); --(element 6 add to the end)

       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;
        return 0;
   }

   Output := Size : 1 2 3 4 5 6
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
Function 3: pop_back --(delete the last data)

          #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec;
   
        vec.push_back(1); 
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);
        vec.emplace_back(6);

        vec.pop_back(); --(element 6 deleted)
       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;
        return 0;
   }

   Output := Size : 1 2 3 4 5 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
Function 4: vec[idx] ---( give the value of given Index )

          #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec;
   
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);

       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;

        cout << " Value of Index 2 is " << vec[2] << endl; ---(The vale of Index 2 is = 3)
        return 0;
   }
            
   Output := 1 2 3 4 5
            Value of Index 2 is 3

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  

Function 5: front & back  ---(if you want starting element from an array use [vec.front()]  ) 
                          ---(if you want ending element from an array use [vec.back()]  ) 

          #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec;
   
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);

       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;

        cout << " Front " << vec.front() << endl;
         cout << " Back " << vec.back() << endl;
        return 0;
   }

   Output := 1 2 3 4 5
             Front 1
             Back  5
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# How to write Vector in an Array

->        #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec={1,2,3,4,5};
   
       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;

        return 0;
   }

   Output := 1 2 3 4 5

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# How to write an element in multiple time

->  using : vector<int> vec(3,10) --( Hum akk 3 size ka vector lenge jisme har value 10 hongi)
 
          #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec(3,10) ----(size,value)
   
       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;

        return 0;
   }

   Output := 10 10 10

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# How to initalized Vector 1 as Vector 2

->       #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec1={1,2,3,4,5};
   
        vector<int> vec2(vec1); --(vec2 == vec 1)

       for(int val : vec2) {
            cout << val << " ";
       }
        cout << endl;

        return 0;
   }

   Output := 1,2,3,4,5

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# How to erase the element which you want 

->        #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec1={1,2,3,4,5};
   
        vec.erase(vec.begin());

       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;

        return 0;
   }

   Output := 2,3,4,5 --(1 is erase )

   Note: If you want to erase other elements then add +1
         eg: vec.erase(vec.begin()+1) --> 1,3,4,5
             vec.erase(vec.begin()+2) --> 1,2,4,5
             vec.erase(vec.begin()+3) --> 1,2,3,5

   Note: You can erase the elements in range also
         eg: vec.erase(start,end)
             vec.erase(vec.begin()+1 , vec.begin()+3) --(erase 3,4)
             --->  1,4,5
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# How to insert an element in an array

->         #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec1={1,2,3,4,5};
   
        vec.insert(vec.begin() +2,100) ---(Place,Value)

       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;

        return 0;
   }

   Output := 1,2,100,3,4,5
---------------------------------------------------------------------------------------------------------------------------------------------------------

# How to Cleare an all elements from an Array

-->       #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec1={1,2,3,4,5};
   
       vec.clear(); ---(delete all elements)

       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;

        return 0;
   }

   Output := empty

   Note : After these deleting the entire elements from the array
          we get the size = 0 and Capacity = 5

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Empty (if Yes = 1 and if No = 0) --> vec.empty()

->        #include <iostream>
          #include <vector>
          using namespace std;

         int main() {
   
        vector<int> vec1={1,2,3,4,5};
   
       for(int val : vec) {
            cout << val << " ";
       }
        cout << endl;

        cout << " Is it Empty :" << vec.empty() << endl;

        return 0;
   }

   Output := Is it Empty : 0

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Function : vec.begin --( we get the first Value of the Array  )
           vec.end --(we get the last number of an Array eg : |1|2|3|4|5| | <- we get the garbage value from these not n-1)

Iterators of vector : Forward --(print the elements)

             vector<int>::iterator it; ---(instead of these we can write auto)
             for (it = vec.begin(); it!=vec.end(); it++) {
             cout << *(it) << endl;
             }
 
Iterators of vector : Backward --(print the elements in reverse odder)
                                                                                                      --(* = derefereance operator)
               for(auto it = vec.begin(); it!=vec.rend(); it++) {
               cout << * (it) << endl; 
               }

======================================================================================================================================================================================================================================================================================================

                || LIST ||

----------------------------------------------------------------------------------------------------------------------------------------------------------

# How to enter the element in front and back side from List
                
->         #include <iostream>
          #include <vector>
          #include <list>
          using namespace std;

         int main() {
           list<int> l;

           l.push_back(1);
           l.push_back(2);
           l.push_front(3);
           l.push_front(5);

           for(int val : l) {
               cout << val << " ";
           }

           cout << endl;
           return 0;
}

          Output : 5 3 1 2

# if we add l.pop_back() and l.pop_front() in the Program

->        #include <iostream>
          #include <vector>
          #include <list>
          using namespace std;

         int main() {
           list<int> l;

           l.push_back(1);
           l.push_back(2);
           l.push_front(3);
           l.push_front(5);

           l.pop_back(); ---(2 deleted)
           l.pop_front(); --(5 deleted)

           for(int val : l) {
               cout << val << " ";
           }

           cout << endl;
           return 0;
}

          Output : 3 1 
---------------------------------------------------------------------------------------------------------------------------------------------------
      Note: The Function like [size,erase,clear,begin,end,rbegin,rend,insert,front,back]
               are all exist in the List also

          The major difference between Vector and List is that:-
          VECTOR is represented as Dynamic array ---(A dynamic array is a resizable array that can grow or shrink in size during program execution.
                                                     Dynamic array ek aisa array hota hai jo program chalne ke dauraan apna size badha ya ghatta sakta hai.)
          LIST is represented as Double Linked list ---(Doubly linked list ek aisi list hoti hai jisme har node ke paas previous aur next dono node ka link hota hai.)

=================================================================================================================================================================================================================================================================================================

             || DEQUE || : Double ended Queue

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Deque is similar to the List 

# How to write --> deque<int>d={1,2,3}

# How to write in Program 

->        #include <iostream>
          #include <vector>
          #include <deque>
          using namespace std;

         int main() {
           deque<int> d={1,2,3,4,5};

           for(int val : d) {
               cout << val << " ";
           }

           cout << endl;
           return 0;
}

          Output : 1 2 3 4 5 
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          Note : we can print the Index value d[] from deque
               but cant print it by list 

=========================================================================================================================================================================================================================================================================================

            || Pair || 

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# you can Take the Element or string from the array

# how to write program 

->        #include <iostream>
          #include <vector>
          #include <pair>
          using namespace std;

         int main() {
           pair<string.int> p={"Ubaid" , 5};

          cout << p.first << endl;
          cout << p.secon << endl;

           cout << endl;
           return 0;
}

          Output : Ubaid  
                    5
================================================================================================================================================================================================================================================================================================

          || STACK ||  -- stack<int>s;

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Stack : Stack ek aisa data structure hota hai jo Last In, First Out (LIFO) rule par kaam karta hai
         — jo cheez last me daali jaati hai, woh pehle bahar aati hai.

# Program : 

->        #include <iostream>
          #include <vector>
          #include <stack>
          using namespace std;

         int main() {
         
               stack<int> s;

               s.push(1);
               s.push(2);
               s.push(3);

               cout << "top = " << s.top() << endl; ----(s.top gives the element which is in the top of array)

           return 0;
}

          Output : top = 3

Example :  #include <iostream>
          #include <vector>
          #include <stack>
 
          using namespace std;

         int main() {
         
               stack<int> s;

               s.push(1);
               s.push(2);
               s.push(3);

               while(!s.empty) {
               cout << s.front() << " ";
               s.pop();
               }
               cout endl;
          
           return 0;
}

          Output :3 2 1
--------------------------------------------------------------------------------------------------------------------------------------------------------------

# Pop delete the Top element of an array
# Empty shows us that our Array is empty or not

=================================================================================================================================================================================================

          || Queue ||  --> queue<int>q;

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Queue : Queue ek aisa data structure hota hai jo First In, First Out (FIFO) rule par kaam karta hai — jo cheez
          pehle daali jaati hai, woh pehle bahar aati hai.

#program :  #include <iostream>
          #include <vector>
          #include <stack>
          #include <queue>
          using namespace std;

         int main() {
         
               queue<int> q;

               q.push(1);
               q.push(2);
               q.push(3);

               while(!q.empty) {
               cout << a.front() << " ";
               q.pop();
               }
               cout endl;
          
           return 0;
}

          Output :  1 2 3
======================================================================================================================================================================================================================================================================================================

          || Priority Queue || --> priority_queue<int>q;

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Priority : Priority Queue ek aisa queue hota hai jisme elements unki priority ke hisaab se process hote hain,
             na ki aane ke order (FIFO) ke according.

             Priority Queue ek special queue hoti hai jisme sabse important 
             (high priority) item pehle nikalta hai, chahe wo baad me aaya ho.

# Program :#include <iostream>
          #include <vector>
          #include <stack>
          #include <queue>
          using namespace std;

         int main() {
         
               priority_queue<int> q;

               q.push(5);
               q.push(2);
               q.push(10);
               q.push(4);

               while(!q.empty) {
               cout << a.front() << " ";
               q.pop();
               }
               cout endl;
          
           return 0;
}

          Output :  10 5 4 2 --(elements comes in sorted way )

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# If you want smaller value First in the Priority Queue(reverse order)

-> we want to write : priority_queue<int,vector<int>,greater<int>>q;

   Program: #include <iostream>
          #include <vector>
          #include <stack>
          #include <queue>
          using namespace std;

         int main() {
         
               priority_queue<int,vector<int>,greater<int>> q;

               q.push(5);
               q.push(2);
               q.push(10);
               q.push(4);

               while(!q.empty) {
               cout << a.front() << " ";
               q.pop();
               }
               cout endl;
          
           return 0;
}

          Output :  2 4 5 10 --(elements comes in < way )
==============================================================================================================================================================================================================================================================================================================================================================================================================================

                 || MAP || --> map<string,int>m;
                               m[key] = value;
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Map : ek aisa data structure hota hai jo  key-value pair me data store karta 
          hai, jisme har key unique hoti hai.
       
Example :  Key (Item)	Value (Price in ₹)
          "TV"	               30000
          "Laptop"	          55000
          "Mobile"	          20000
          "Fridge"	          30000
          "WashingMachine"	18000

          ( All Keys are Unique )

Program: #include <iostream>
          #include <vector>
          #include <stack>
          #include <queue>
          #include <map>
          using namespace std;

         int main() {
               map<siring,int>m;

               m["tv"] = 100;
               m["laptop"] = 100;
               m["headphone"] = 50;
               m["tablet"] = 120;
               m["watch"] = 50;

          for(auto p: m) {
               cout << p.first << " " << p.second << endl;
          }
          
           return 0;
}
 
          Output : headphone 50
                   laptop 100
                   tablet 120
                   tv 100
                   watch 50 ---(the output comes in the Alphabitical odder)
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

          NOTE : 1) You can insert the key if u=you want --> m.insert({"camera",25});
                 You can also take emplace instead of insert

                 2) You can also count the keys in Map --> (cout << " Count = " <<m.count("laptop") << endl;)
                    If you want to prit the Value of Key --> m.(" laptop ")

                 3) You can also Erase the key--> m.erase("Name of Key")  

                 4) You can also find the key for ex: if your key is present then it return found 
                    and if the key is not present the it return not found --> m.find("Name of Key") 

                    ex: if(m.find("camera ") != m.end()) {
                         cout << "Found";
                    }lse{
                         cout << " Not found";
                    }
                         return 0;

                    Output : Found 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

              || Multi Map || --> multimap<string.int>m;

---------------------------------------------------------------------------------------------------------------
Multimap  : ek aisa map hota hai jisme ek key 
               ke multiple values ho sakte hain.

program : #include <iostream>
          #include <vector>
          #include <stack>
          #include <queue>
          #include <map>
          using namespace std;

         int main() {
               map<siring,int>m;

               m.emplace["tv"] = 100;
               m.emplace["tv"] = 100;
               m.emplace["tv"] = 100;
               m.emplace["tv"] = 100;
              

          for(auto p: m) {
               cout << p.first << " " << p.second << endl;
          }
          
           return 0;
}
 
          Output :  tv 100
                    tv 100
                    tv 100
                    tv 100
==========================================================================================================================================================================================================================================================================================

               ||  Unordered Map  || -> unordered_map<string,int>m;
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Unordered Map : ek aisa map hota hai jo key-value pairs ko kisi specific order 
               me store nahi karta — sab kuch random order me hota hai.

Program: #include <iostream>
          #include <vector>
          #include <stack>
          #include <queue>
          #include <map>
          #include <unordered_map>
          using namespace std;

         int main() {
               map<siring,int>m;

               m.emplace["tv"] = 100;
               m.emplace["laptop"] = 100;
               m.emplace["headphone"] = 50;
               m.emplace["tablet"] = 120;
               m.emplace["watch"] = 50;

          for(auto p: m) {
               cout << p.first << " " << p.second << endl;
          }
          
           return 0;
}
 
          Output :watch     50
                  tablet    120
                  headphone 50
                  laptop    100
                  tv        100-----(these data is not soarted it is random)

          Note : The difference between Map and Unordered Map is "The Time complexity"

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

               || SET || -> set<int>s;
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Set : Set ek aisa data structure hota hai jo unique elements store karta hai,
      aur sorted order me automatically arrange karta hai.

Program:  #include <iostream>
          #include <vector>
          #include <stack>
          #include <queue>
          #include <map>
          #include <unordered_map>
          using namespace std;

         int main() {
               set<int>s;

               s.insert(1);
               s.insert(2);
               s.insert(3);
               s.insert(4);

          for(auto val : s) {
                cout << val << " " ;
          }
          cout << endl;

           return 0;
}
 
          Output : 1 2 3 4 5 ----(it will not print duplicate elements )
                                       Time Complexcity is same as mapthat is  0(log n)

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

s.lower_bond :: ek function hota hai jo x ya usse
                bada sabse chhota element return karta hai.--(value should not less then key)

               minimum itni value too chahiye nahi to uske thodi upar wali de do

s.upper_bound(x) :: ---(value should be greater then key)

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Other Set : 

Multi Set --( multiset<int>s; )
--> print the duplicate elements also         

Unordered Set --(  unordered_set<int>s;  )
--> print the elements in an random way and also give the unique numbers

========================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================

         ||  ALGORITHMS || 

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Sorting

1) sort(arr,arr+n) --(start,end) ---{It sort the elements in array}
2) sort(arr,arr+n,greater<int>()) --(start,end,comparetor) ---(It sort the elements in descending order)
3) You can aso reverse the elements in ans Array --(  reverse(vec.begin() , vec.end()); )
4) You can also reverse the Value in Range --(  reverse(vec.begin()+ 1, vec.end()) +3; )

#Next Permutation --(next_permutation(v.begin() , v.end())  )
--> Kisi number ya string ke saare possible arrangements me se, current arrangement
   ke baad wala agla bada arrangement nikalna.

#max & Min element 
--> max_element(v.begin() , v.end() )
    min_element(v.begin() , v.end() )

#Binary Search
--> binary_sarch(v.begin(),v.end(),taget)







*/


