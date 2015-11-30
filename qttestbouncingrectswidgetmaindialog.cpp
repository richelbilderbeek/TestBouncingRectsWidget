#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "qtbouncingrectswidget.h"
#include "qttestbouncingrectswidgetmaindialog.h"
#include "ui_qttestbouncingrectswidgetmaindialog.h"
#pragma GCC diagnostic pop

ribi::tbrw::QtMainDialog::QtMainDialog(QWidget *parent) :
  QtHideAndShowDialog(parent),
  ui(new Ui::QtToolTestBouncingRectsWidgetMainDialog)
{
  ui->setupUi(this);
  ui->layout->addWidget(new QtBouncingRectsWidget(this));
}

ribi::tbrw::QtMainDialog::~QtMainDialog() noexcept
{
  delete ui;
}
