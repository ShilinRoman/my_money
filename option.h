#ifndef OPTION_H
#define OPTION_H

#include <QWidget>

namespace Ui {
class Option;
}

class Option : public QWidget
{
    Q_OBJECT

public:
    explicit Option(QWidget *parent = nullptr);
    ~Option();

private:
    Ui::Option *ui;
};

#endif // OPTION_H
