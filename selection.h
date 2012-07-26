#ifndef SELECTION_H
#define SELECTION_H

#include <QMainWindow>

namespace Ui {
class Selection;
}

class Selection : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Selection(QWidget *parent = 0);
    ~Selection();

public slots:
    void showEditRasterHeader();
    void showEditAuthor();
    void showUserGuide();
    void about();
    void aboutQt();
    void showSelection();

    
private:
    Ui::Selection *ui;
    void prepareUi();

private slots:
    void showWizard();
    void showAdvanced();

};

#endif // SELECTION_H
