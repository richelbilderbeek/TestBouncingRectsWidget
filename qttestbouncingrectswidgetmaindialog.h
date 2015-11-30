#ifndef QTTOOLTESTBOUNCINGRECTSWIDGETMAINDIALOG_H
#define QTTOOLTESTBOUNCINGRECTSWIDGETMAINDIALOG_H

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "qthideandshowdialog.h"
#pragma GCC diagnostic pop

namespace Ui {
  class QtToolTestBouncingRectsWidgetMainDialog;
}

namespace ribi {
namespace tbrw {

class QtMainDialog : public ribi::QtHideAndShowDialog
{
    Q_OBJECT
    
public:
    explicit QtMainDialog(QWidget *parent = 0);
    QtMainDialog(const QtMainDialog&) = delete;
    QtMainDialog& operator=(const QtMainDialog&) = delete;
    ~QtMainDialog() noexcept;
    
private:
    Ui::QtToolTestBouncingRectsWidgetMainDialog *ui;
};

} //~namespace tbrw
} //~namespace ribi

#endif // QTTOOLTESTBOUNCINGRECTSWIDGETMAINDIALOG_H
