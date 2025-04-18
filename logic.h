#ifndef LOGIC_H
#define LOGIC_H
class logic {
public:
//PATHWAY FOR CONNECTION
    int pathway[5][5] = {
        {0, 1, 0, 0, -1},  
        {0, 0, 1, -1, 0},  
        {1, 0, 0, 0, 1},    
        {0, 1, -1, 0, 0},   
        {-1, 0, 0, 1, 0}   
    };
    int distance[5] = {10, 15, 20, 25, 30};


};

#endif 
