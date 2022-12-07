/*
 * Name        : DL_NODE H FILE
 * Author      : Sean Angrisani
 * Description : h file for dl_node
 */
#ifndef DL_NODE_H
#define DL_NODE_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <streambuf>
#include <algorithm>
using std::swap;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
class DLNode {
 public:
    DLNode();
    ~DLNode();
    void set_contents(int contents);
    void SetNext(DLNode*next);
    void SetPrevious(DLNode*previous);
    int GetContents() const;
    DLNode* GetNext() const;
    DLNode* GetPrevious() const;
 private:
    DLNode* next_node_;
    DLNode* previous_node_;
    int contents_;
};
#endif
