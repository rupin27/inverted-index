#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string.h>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <algorithm>

#include <inverter.h>

using namespace std;

bool cmp(pair<string, set<int> >& a, pair<string, set<int> >& b) {
    return (a.first) < (b.first);
}

void sort(map<string, set<int> >& M) {

    vector<pair<string, set<int> > > A;
    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);
    M.clear();

    for (auto& it : A) {
      M.insert(it);
    }
}

string build_inverted_index(string filename) {

map<string, set<int> > invertedIndex;
string out = "";
int fileNum = 0;
char fileNm[256], wordStrm[256], del[] = " 1234567890!@#$%^&*()-_=+\"\\|,<.>/?;:[]{}";
ifstream list (filename, ifstream::in);

while (list >> fileNm) {
  char *t1 = strtok(fileNm, "\n");
  
  while (t1 != NULL) {
    string file = t1;
    t1 = strtok(NULL, " ");
    ifstream input_file(file, ifstream::in);                                                                                                                       \
    if (input_file.is_open()) {
      while (input_file >> wordStrm) {
        char *t2 = strtok(wordStrm, del);
        while (t2 != NULL) {
          string word = t2;
          t2 = strtok(NULL, del);
          if (invertedIndex.find(word) != invertedIndex.end()) {
            set<int>&s_ref = invertedIndex[word];
            s_ref.insert(fileNum);
            }
          else {
            set<int> s;
            s.insert(fileNum);
            invertedIndex.insert(make_pair(word , s));
          }
        }
      }
      input_file.close();
    }
    fileNum++;
  }
}

sort(invertedIndex);

for (auto it = invertedIndex.begin(); it != invertedIndex.end(); it++) {
  out.append(it->first);
  out.append(":");
  set<int> st = it->second;
  
  for (auto it = st.begin(); it != st.end(); it++) {
    out.append(" ");
    out.append(to_string(*it));
  }
  out.append("\n");
}
return out;
}
