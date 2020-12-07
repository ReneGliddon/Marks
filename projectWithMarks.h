#ifndef "PROJECTWITHMARKS_H"
#define "PROJECTWITHMARKS_H"
#include "project.h"
using namespace std;
#include <vector>

class ProjectWithMarks: public project
{
  public:
      ProjectWithMarks();
      void addMark(string StudNumP, int StudMarkP);
      int calcAvg();
      void displayStuds() const;

  private:
    vector <int> studentMarks;

};
#endif

ProjectWithMarks::ProjectWithMarks():project()
{
    for (int i =0; i<nrStuds();i++)
    {
        studentMarks[i]=0;
    }
}

void ProjectWithMarks::addMark(string StudNumP, int StudMarkP)
{
    for(int i = 0;i<nrStuds();i++)
    {
        if (StudNumP==studentNumbers[i])
        {
            studentMarks[i]=StudMarkP();
        }

    }

