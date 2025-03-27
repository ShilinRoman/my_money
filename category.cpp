#include "category.h"
#include "ui_category.h"

Category::Category(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Category)
{
    ui->setupUi(this);
}

Category::~Category()
{
    delete ui;
}
