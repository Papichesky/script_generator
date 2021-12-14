#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QList>

int main()
{
    QFile file("C://Users/1verk/Desktop/test.ps1");
    file.open(QIODevice::ReadWrite);
    QTextStream out(&file);
//указать лист
    QList<QString> list = {"login1","login2","login3","login4"};
    for (int i=0;i<list.size();i++)
    {
        out << "Remove-ADUser " << list[i] << "\n";
    }
    file.close();
}
