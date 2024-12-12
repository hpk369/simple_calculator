#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;
}
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_nine_button_clicked();

    void on_eight_button_clicked();

    void on_five_button_clicked();

    void on_two_button_clicked();

    void on_seven_button_clicked();

    void on_four_button_clicked();

    void on_one_button_clicked();

    void on_six_button_clicked();

    void on_zero_button_clicked();

    void on_clear_button_clicked();

    void on_three_button_clicked();

    void on_add_button_clicked();

    void on_subtract_button_clicked();

    void on_multiply_button_clicked();

    void on_divide_button_clicked();

    void on_equal_button_clicked();

private:
    Ui::calculator *ui;
    double num1;
    QString symbol;
};
#endif // CALCULATOR_H
