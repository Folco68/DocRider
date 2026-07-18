#ifndef DLGEDITMACHINE_HPP
#define DLGEDITMACHINE_HPP

#include <QDialog>

namespace Ui {
class DlgEditMachine;
}

class DlgEditMachine: public QDialog
{
    Q_OBJECT

  public:
    explicit DlgEditMachine(QWidget* parent = nullptr);
    ~DlgEditMachine();

  private:
    Ui::DlgEditMachine* ui;
};

#endif // DLGEDITMACHINE_HPP
