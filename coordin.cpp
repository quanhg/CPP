# include <iostream>

void oil(int x);

int main(){
    using namespace std;

    int teax = 31;
    int year = 2011;
    cout <<"in main(), teax:"<<teax<< ", teax address: "<<&teax<<endl;
    cout <<"in main(), year:"<<year<< ", year address: "<<&year<<endl;
    oil(teax);
    cout <<"in main(), teax:"<<teax<< ", teax address: "<<&teax<<endl;
    cout <<"in main(), year:"<<year<< ", year address: "<<&year<<endl;
}

void oil(int x){
    using namespace std;
    int teax=5;
    int year = 10;
    cout <<"in oil(), teax:"<<teax<< ", teax address: "<<&teax<<endl;
    cout <<"in oil(), year:"<<year<< ", year address: "<<&year<<endl;
    {
        int teax = 113;
        cout <<"in block, teax:"<<teax<< ", teax address: "<<&teax<<endl;

    }
    cout <<"Post- block, teax:"<<teax<< ", teax address: "<<&teax<<endl;

}

/*
在程序中3个texas变量的地址各不相同，而程序使用当前可见的那个变量

in main(), teax:31, teax address: 0x5ffe9c  
in main(), year:2011, year address: 0x5ffe98
in oil(), teax:5, teax address: 0x5ffe5c    
in oil(), year:10, year address: 0x5ffe58   
in block, teax:113, teax address: 0x5ffe54  
Post- block, teax:5, teax address: 0x5ffe5c 
in main(), teax:31, teax address: 0x5ffe9c  
in main(), year:2011, year address: 0x5ffe98

执行main（）函数
    程序为year和teax分配空间，使得变量可见
        1，当程序执行到oil（）时，这些变量仍然留在内存中，但不可见
        2，但同时为oil（）中的两个新的变量yeax 和teax分配新的内存，并使得可见
        3，当程序执行到内部代码块时，teax将不可见，它再次被一个新的定义替代，然而变量year仍然可见，因为代码块中没有定义x变量。
        4，当程序流程离开该代码块深，将释放最新的texa使用的内存，oil中的teax可见，
        5，当程序离开oil时，mian函数中的teax和x可见





*/