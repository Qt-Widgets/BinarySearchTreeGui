/*
 * Binary Search Tree Visualization
 * Ashland University
 * Nathan Ahrens
 * Summer 2017
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QScrollArea>
#include <QMenu>
#include <QAction>
#include <QLabel>
#include "renderarea.h"
/*
 * bst_properties_window.h includes:
 * QMainWindow, QVBoxLayout, QHBoxLayout, QScrollArea, QWidget, QLabel, QLineEdit
 */
#include "bst_properties_window.h"
#include "bst_about_window.h"
#include "binarysearchtree.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QWidget *centralWidget;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    RenderArea *renderArea;
    QPushButton *propertyButton;
    QPushButton *deleteButton;
    QPushButton *insertButton;
    QPushButton *zoomInButton;
    QPushButton *zoomOutButton;
    QLineEdit *insertValueLineEdit;
    QLineEdit *deleteValueLineEdit;
    QScrollArea *treeScrollArea;
    QLabel *statusLabel;
    QMenu *fileMenu;
    QMenu *editMenu;
    QAction *aboutAction;
    QAction *loadAction;
    QAction *saveAction;
    QAction *exitAction;
    QAction *resetAction;
    BST_Properties_Window *prop;
    BST_About_Window *about;
    BinarySearchTree<int> *bst;
    BinarySearchTree<int> *getBST();
    void createMenu();
    void createActions();

protected:
    virtual void closeEvent(QCloseEvent *event);

private slots:
    void propertyClicked() const;
    void insertClicked() const;
    void deleteClicked() const;
    void zoomInClicked() const;
    void zoomOutClicked() const;
    void loadFileMenu();
    void saveMenu();
    void exitMenu();
    void resetMenu() const;
    void aboutMenu() const;
};

#endif // MAINWINDOW_H
