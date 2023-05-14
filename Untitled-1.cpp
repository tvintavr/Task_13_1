#include <iostream>
#include <vector>
#include <cassert>

int main() {
    std::cout<<"Input vector size: ";
    int n;
    std::cin>>n;
    assert(n>0);
    assert(!std::cin.fail());
    assert(!std::cin.peek()!='\n');


    std::vector<int> vec(n);
    std::cout<<"Input vectors: ";

    for (int i=0;i<n;i++) {
        std::cin>>vec[i];
        assert(!std::cin.fail());
    }

    std::cout<<"Input vector to delete: ";
    int vecDelete;
    std::cin>>vecDelete;
    assert(!std::cin.fail());
    int count=0;

    std::cout<<"Vector without "<<vecDelete<<": \n";

    for (int i=0;i<n;i++) {
        while (vec[i]==vecDelete) {
            for (int j=i;j<n-1;j++) {
                vec[j]=vec[j+1];
            }
            vec.pop_back();
            count++;
        }
        std::cout<<vec[i]<<std::endl;
    }

    if (count==0) {
        std::cout<<"\nElement "<<vecDelete<< " is not found";
    }

    


}