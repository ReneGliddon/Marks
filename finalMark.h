#include "marks.h"
#ifndef FINALMARK_H
#define FINALMARK_H


class finalMark:public Marks
{
public:
    finalMark();
    finalMark(double examMark);
    int calcMark(finalMark &F);
private:
    double examMark;
};
#endif // FINALMARK_H
finalMarks::finalMarks(double examMark):Marks(string name, string number, int asg1, int asg2, int asg3, double testMark)
{
    //empty
}

int finalMark::calcMark()
{
    double assignmentAvg, totAssign;
    totAssign = 0.0;
    for(int i = 0; i <3;i++)
    {
        totAssign+=assignments[i];
    }
    assignmentAvg = totAssign/3;
    int finalMark=testMark*0.2+assignmentAvg*0.1+examMark*0.7;
    return finalMark;
}



