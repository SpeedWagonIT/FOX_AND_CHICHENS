#include "desk.h"

DESK::DESK()
{

}

void DESK::setobj(){
    if (getTEAM() == 1)//выбраны курицы
    {
        for(int i = 0; i < 7;i++)
            for(int j = 0; j < 7; j++){
                if((i == '0'||i=='1'||i=='5'||i=='6')&&(j=='0'||j=='1'||j=='5'||j=='6')){
                    desk[i][j] = -1;//вне поля
                    continue;}
                if((i == 2 && j == 2) && (i == 2 && j == 4))
                    desk[i][j] = 2;//расстановка лис
                if(i>=4)
                    desk[i][j] = 1;//расстановка куриц
        }
    }
    if(getTEAM() == 0)//выбраны лисы
     {
        for(int i = 0; i < 7;i++)
            for(int j = 0; j < 7; j++){
                if((i == '0'||i=='1'||i=='5'||i=='6')&&(j=='0'||j=='1'||j=='5'||j=='6')){
                     desk[i][j] = -1;//вне поля
                     continue;}
                if(i<=4)
                    desk[i][j] = 1;
                if((i == 4 && j == 2) && (i == 4 && j == 4))
                    desk[i][j] = 2;//расстановка лис
                if(desk[i][j]!='1'||desk[i][j]!='2'||desk[i][j]<'0')
                    desk[i][j] = 0;
        }
    }
}

void DESK::setTEAM(int x){
    team = x;
}

int DESK::getTEAM(){return team;}
