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
    void showEditAuthor();
    void showUserGuide();
    void about();
    void aboutQt();
    void showSelection();
    void openRaster();
    void saveReprojection();
    void loadParams();
    void saveParams();
    void togglePreview();
    
private:
    Ui::Selection *ui;

private slots:
    void showWizard();
    void showAdvanced();

};

#endif // SELECTION_H
