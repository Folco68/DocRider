#include "DlgEditMachine.hpp"
#include "ui_DlgEditMachine.h"

DlgEditMachine::DlgEditMachine(QWidget* parent)
    : QDialog(parent)
    , ui(new Ui::DlgEditMachine)
{
    ui->setupUi(this);
}

DlgEditMachine::~DlgEditMachine()
{
    delete ui;
}
