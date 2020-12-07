
#ifndef MARKS_H
#define MARKS_H


class Marks
{
    public:
        Marks();
        Marks(string name, string number, int asg1, int asg2, int asg3, double test);
        double calcMark() const;
    private:
        string stdtName;
        string stdtNum;
        int assignments[3];
        double testMark;

};
#endif // MARKS_H
