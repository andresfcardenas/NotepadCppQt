#ifndef NOTEPAD_HPP
#define NOTEPAD_HPP

#include <QMainWindow>

namespace Ui {
class Notepad;
}

class Notepad : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Notepad(QWidget *parent = 0);
    ~Notepad();
    
private slots:
    void on_quitButton_clicked();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

private:
    Ui::Notepad *ui;
};

#endif // NOTEPAD_HPP
