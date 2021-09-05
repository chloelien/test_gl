//
//  MeshShowBox.hpp
//  test_gl
//
//  Created by 連嘉玟 on 2021/8/28.
//

#ifndef MeshShowBox_hpp
#define MeshShowBox_hpp
#include <string>
#include <stdio.h>

namespace mchloesh {
    class MeshShowBox{
    public:
        MeshShowBox(){}
        void create_window();
        static void mydisplay();
        
    public:
        int colorr = 1.0;
        int colorg = 0.0;
        int colorb = 0.0;

    };
}












#endif /* MeshShowBox_hpp */
