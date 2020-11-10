#include<iostream>
#include<vector>
int main()
{
    std::vector<int>first;//creating a vector
    first.assign(7,100);//7 ints with value of 100
    std::vector<int>::iterator it;//creating iterator for vector
    for (it=first.begin();it!=first.end();++it)//printing elements of firsr
       std::cout<<'\t'<<*it;
    std::cout<<'\n';
    std::vector<int>second;//creating second vector
    it=first.begin()+1;
    second.assign(it,first.end()-1);//except first and last of first assign to second
    for(it=second.begin();it!=second.end();++it)
       std::cout<<'\t'<<*it;
    std::cout<<'\n';
    int myints[]={12,23,45};//creating array
    std::vector<int>third;
    third.assign(myints,myints+3);//assigning array to third vector
    for(it=third.begin();it!=third.end();++it)
       std::cout<<'\t'<<*it;
    return 0;
}