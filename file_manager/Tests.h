#ifndef TESTS_H
#define TESTS_H
#include "strategy.h"
#include "groupByFolder.h"
#include "groupByType.h"
#include "QString"

class Tests
{
private:
    QString console(QList<fileSizeInfo> info)
    {
        QString res;
        for(auto it = info.begin(); it != info.end(); it++)
        {

        }
    }
public:
    explicit Tests(){
        QTextStream cout(stdout), cin(stdin);
        QString path("../homework_3_file_manager/Tests/Test1");
        for(int i = 1; i<3; i++)
    }
};

#endif // TESTS_H