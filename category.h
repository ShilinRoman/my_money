#ifndef CATEGORY_H
#define CATEGORY_H

#include <QWidget>

namespace Ui {
class Category;
}

class Category : public QWidget
{
    Q_OBJECT

public:
    explicit Category(QWidget *parent = nullptr);
    ~Category();

private:
    Ui::Category *ui;
};

#endif // CATEGORY_H
