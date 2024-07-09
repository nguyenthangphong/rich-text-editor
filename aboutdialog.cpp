#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) : QDialog(parent), ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    ui->nameTextLabel->setText(QApplication::applicationName());
    ui->versionTextLabel->setText(QApplication::applicationVersion());
    ui->companyTextLabel->setText(QApplication::organizationName());
    ui->urlTextLabel->setText(QApplication::organizationDomain());
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_buttonBox_accepted()
{
    accept();
}
