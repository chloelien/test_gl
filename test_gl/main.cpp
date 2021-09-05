#include "MeshShowBox.hpp"
#include <X11/Xlib.h>
#include <thread>
#include <iostream>
int main3(){
    XInitThreads();
    mchloesh::MeshShowBox box1;
    //box1.create_window();
    std::thread t1 = std::thread(&mchloesh::MeshShowBox::create_window,std::ref(box1));
    mchloesh::MeshShowBox box2;
    std::thread t2 = std::thread(&mchloesh::MeshShowBox::create_window,std::ref(box2));
    //for(int i =0;i<100;++i){
    //    box1.colorr += 0.1;
    //    if(box1.colorr>1.0){box1.colorr = 0.0;}
    //    std::this_thread::sleep_for(std::chrono::seconds(1));
    //}
    std::this_thread::sleep_for(std::chrono::seconds(100));
    t1.join();
    t2.join();

    return 0;
}
