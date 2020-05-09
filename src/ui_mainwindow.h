/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "codeeditor.h"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_As;
    QAction *actionQuit;
    QAction *actionKeyboard_shortucts;
    QAction *actionFull_chart;
    QAction *action50_50_view;
    QAction *actionWhat_s_new;
    QAction *actionAbout_Qt;
    QAction *actionFull_text_view;
    QAction *actionPlotter;
    QAction *action3D_orientation;
    QAction *actionPrint_Graph;
    QAction *actionPrint_log;
    QAction *actionWhats_this;
    QAction *actionInfo;
    QAction *actionShow_parser_data;
    QAction *actionHide_parser_data;
    QAction *actionFull_parser_data;
    QAction *actionImage;
    QAction *actionto_csv;
    QWidget *centralWidget;
    QGridLayout *gridLayout_21;
    QGroupBox *groupBoxSend;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonSend;
    QPushButton *pushButtonClearHistory;
    QComboBox *comboBoxSend;
    QGroupBox *groupBoxLog;
    QGridLayout *gridLayout_13;
    QSplitter *splitterReceivedData;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    CodeEditor *textBrowserLogs;
    QScrollArea *scrollAreaTextLogOptions;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_15;
    QPushButton *pushButtonTextLogToggle;
    QSpinBox *spinBoxProcessingDelay;
    QCheckBox *checkBoxWrapText;
    QLineEdit *lineEditHighlight;
    QCheckBox *checkBoxSendKey;
    QComboBox *comboBoxTextProcessing;
    QComboBox *comboBoxAddTextMode;
    QCheckBox *checkBoxShowTime;
    QLabel *label_4;
    QComboBox *comboBoxFormat;
    QCheckBox *checkBoxShowControlChars;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_17;
    QPushButton *pushButtonClear;
    QLabel *label_23;
    QCheckBox *checkBoxScrollToButtom;
    QSpinBox *spinBoxMaxLines;
    QPushButton *pushButtonSerialLogScrollown;
    QComboBox *comboBoxMessagesDisplayMode;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_12;
    QSplitter *splitterGraphTable;
    QStackedWidget *stackedWidgetGraphView;
    QWidget *page;
    QGridLayout *gridLayout_12;
    QCustomPlot *widgetChart;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_24;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_18;
    QComboBox *comboBoxClockSource;
    QLabel *label_20;
    QLineEdit *lineEditExternalClockLabel;
    QComboBox *comboBoxExternalTimeFormat;
    QLabel *label_10;
    QComboBox *comboBoxGraphDisplayMode;
    QLabel *labelParsingRules;
    QLineEdit *lineEditCustomParsingRules;
    QCheckBox *checkBoxAutoRescaleY;
    QCheckBox *checkBoxEnableTracer;
    QSpinBox *spinBoxScrollingTimeRange;
    QCheckBox *checkBoxAutoTrack;
    QComboBox *comboBoxTracerStyle;
    QCheckBox *checkBoxShowLegend;
    QPushButton *pushButtonEnablePlot;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_19;
    QPushButton *pushButtonClearAll;
    QPushButton *pushButtonClearGraphs;
    QToolButton *toolButtonAdvancedGraphMenu;
    QSpinBox *spinBoxRemoveOldLabels;
    QSpinBox *spinBoxMaxTimeRange;
    QSpinBox *spinBoxMaxGraphs;
    QWidget *page_2;
    QGridLayout *gridLayout_8;
    QLabel *label_6;
    QQuickWidget *quickWidget3DView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidgetTableView;
    QWidget *tabWidgetTableViewPage1;
    QGridLayout *gridLayout_20;
    QTableWidget *tableWidgetParsedData;
    QPushButton *pushButtonSetSelectedToGraph;
    QCheckBox *checkBoxTableAutoResize;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonClearTable;
    QWidget *tabWidgetTableViewPage2;
    QGridLayout *gridLayout_23;
    QCheckBox *checkBoxAutoSizeColumnsLogTable;
    QPushButton *pushButtonEnableTableLog;
    QLabel *label_25;
    QSpinBox *spinBoxMaxRowsLogTable;
    QPushButton *pushButtonClearLogTable;
    QCheckBox *checkBoxScrollLogEnableSorting;
    QTableWidget *tableWidgetLogTable;
    QCheckBox *checkBoxAutoScrollLogTable;
    QPushButton *pushButtonExportLogTableToCSV;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout_22;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *toolButtonHideTable;
    QGroupBox *groupBoxSettings;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidgetControlSection;
    QWidget *tabSerial;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonSerialConnect;
    QGridLayout *gridLayout_2;
    QComboBox *comboBoxStopBits;
    QCheckBox *checkBoxDTR;
    QComboBox *comboBoxSerialReadMode;
    QComboBox *comboBoxFlowControl;
    QLabel *labelFlowControl;
    QLabel *label_2;
    QLabel *labelParity;
    QLabel *label;
    QLabel *labelStopBits;
    QLabel *label_3;
    QComboBox *comboBoxBaudRates;
    QComboBox *comboBoxParity;
    QComboBox *comboBoxDevices;
    QComboBox *comboBoxDataBits;
    QLabel *labelDataBits;
    QPushButton *pushButtonRefresh;
    QCheckBox *checkBoxAutoRefresh;
    QRadioButton *radioButtonDeviceUpdate;
    QWidget *tabWiFi;
    QGridLayout *gridLayout_6;
    QPushButton *pushButtonUDPConnect;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_10;
    QLabel *label_9;
    QComboBox *comboBoxUDPSendMode;
    QLineEdit *lineEditUDPTargetIP;
    QLabel *label_7;
    QComboBox *comboBoxUDPReceiveMode;
    QLabel *label_5;
    QLabel *label_16;
    QSpinBox *spinBoxUDPReceivePort;
    QLabel *label_8;
    QSpinBox *spinBoxUDPTargetPort;
    QWidget *tabLogs;
    QGridLayout *gridLayout_9;
    QFrame *line;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *checkBoxAppendDate;
    QCheckBox *checkBoxSimplifyLog;
    QCheckBox *checkBoxTruncateFileOnSave;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout_14;
    QLabel *label_18;
    QLabel *label_15;
    QTimeEdit *timeEditMaxParsingTime;
    QLineEdit *lineEditLoadFilePath;
    QProgressBar *progressBarLoadFile;
    QCheckBox *checkBoxAppendLoadedTextToLog;
    QPushButton *pushButtonLoadFile;
    QLabel *label_19;
    QPushButton *pushButtonLoadPath;
    QLabel *label_14;
    QLineEdit *lineEditFileInfo;
    QTimeEdit *timeEditMinParsingTime;
    QGridLayout *gridLayout_11;
    QLabel *label_13;
    QLineEdit *lineEditSaveLogPath;
    QPushButton *pushButtonLogPath;
    QLabel *label_11;
    QPushButton *pushButtonSetDefaultLogPath;
    QPushButton *pushButtonAddDateTime;
    QLineEdit *lineEditSaveFileName;
    QCheckBox *checkBoxAutoLogging;
    QGridLayout *gridLayout_16;
    QComboBox *comboBoxLogFormat;
    QLabel *label_21;
    QLabel *label_22;
    QComboBox *comboBoxLoggingMode;
    QPushButton *pushButtonLogging;
    QWidget *tabRAM;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QComboBox *comboBoxRAMLoadMode;
    QPushButton *pushButtonLoadRAMBuffer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QComboBox *comboBoxRAMSaveMode;
    QPushButton *pushButtonSaveParserMemory;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxRAMClearChart;
    QCheckBox *checkBoxClearRAMOnReset;
    QPushButton *pushButtonRAMClear;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *checkBoxAutoSaveBuffer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSave;
    QMenu *menuSave_Graph_As;
    QMenu *menuPrint;
    QMenu *menuExport;
    QMenu *menuParser_data;
    QMenu *menuHelp;
    QMenu *menuView;
    QMenu *menuFull_text_view;
    QMenu *menuChange_visualisation;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1797, 722);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionKeyboard_shortucts = new QAction(MainWindow);
        actionKeyboard_shortucts->setObjectName(QString::fromUtf8("actionKeyboard_shortucts"));
        actionKeyboard_shortucts->setEnabled(false);
        actionFull_chart = new QAction(MainWindow);
        actionFull_chart->setObjectName(QString::fromUtf8("actionFull_chart"));
        action50_50_view = new QAction(MainWindow);
        action50_50_view->setObjectName(QString::fromUtf8("action50_50_view"));
        actionWhat_s_new = new QAction(MainWindow);
        actionWhat_s_new->setObjectName(QString::fromUtf8("actionWhat_s_new"));
        actionWhat_s_new->setEnabled(false);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionFull_text_view = new QAction(MainWindow);
        actionFull_text_view->setObjectName(QString::fromUtf8("actionFull_text_view"));
        actionPlotter = new QAction(MainWindow);
        actionPlotter->setObjectName(QString::fromUtf8("actionPlotter"));
        action3D_orientation = new QAction(MainWindow);
        action3D_orientation->setObjectName(QString::fromUtf8("action3D_orientation"));
        action3D_orientation->setEnabled(false);
        actionPrint_Graph = new QAction(MainWindow);
        actionPrint_Graph->setObjectName(QString::fromUtf8("actionPrint_Graph"));
        actionPrint_log = new QAction(MainWindow);
        actionPrint_log->setObjectName(QString::fromUtf8("actionPrint_log"));
        actionWhats_this = new QAction(MainWindow);
        actionWhats_this->setObjectName(QString::fromUtf8("actionWhats_this"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionShow_parser_data = new QAction(MainWindow);
        actionShow_parser_data->setObjectName(QString::fromUtf8("actionShow_parser_data"));
        actionHide_parser_data = new QAction(MainWindow);
        actionHide_parser_data->setObjectName(QString::fromUtf8("actionHide_parser_data"));
        actionFull_parser_data = new QAction(MainWindow);
        actionFull_parser_data->setObjectName(QString::fromUtf8("actionFull_parser_data"));
        actionImage = new QAction(MainWindow);
        actionImage->setObjectName(QString::fromUtf8("actionImage"));
        actionto_csv = new QAction(MainWindow);
        actionto_csv->setObjectName(QString::fromUtf8("actionto_csv"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_21 = new QGridLayout(centralWidget);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setContentsMargins(-1, 3, -1, 3);
        groupBoxSend = new QGroupBox(centralWidget);
        groupBoxSend->setObjectName(QString::fromUtf8("groupBoxSend"));
        groupBoxSend->setMinimumSize(QSize(0, 0));
        groupBoxSend->setMaximumSize(QSize(16777215, 16777215));
        groupBoxSend->setFlat(true);
        gridLayout_3 = new QGridLayout(groupBoxSend);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonSend = new QPushButton(groupBoxSend);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSend->sizePolicy().hasHeightForWidth());
        pushButtonSend->setSizePolicy(sizePolicy);
        pushButtonSend->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(pushButtonSend, 1, 3, 1, 1);

        pushButtonClearHistory = new QPushButton(groupBoxSend);
        pushButtonClearHistory->setObjectName(QString::fromUtf8("pushButtonClearHistory"));
        pushButtonClearHistory->setMinimumSize(QSize(0, 30));
        pushButtonClearHistory->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(pushButtonClearHistory, 1, 4, 1, 1);

        comboBoxSend = new QComboBox(groupBoxSend);
        comboBoxSend->setObjectName(QString::fromUtf8("comboBoxSend"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxSend->sizePolicy().hasHeightForWidth());
        comboBoxSend->setSizePolicy(sizePolicy1);
        comboBoxSend->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(9);
        comboBoxSend->setFont(font);
        comboBoxSend->setEditable(true);

        gridLayout_3->addWidget(comboBoxSend, 1, 1, 1, 1);


        gridLayout_21->addWidget(groupBoxSend, 0, 0, 1, 1);

        groupBoxLog = new QGroupBox(centralWidget);
        groupBoxLog->setObjectName(QString::fromUtf8("groupBoxLog"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxLog->sizePolicy().hasHeightForWidth());
        groupBoxLog->setSizePolicy(sizePolicy2);
        groupBoxLog->setFlat(true);
        gridLayout_13 = new QGridLayout(groupBoxLog);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        splitterReceivedData = new QSplitter(groupBoxLog);
        splitterReceivedData->setObjectName(QString::fromUtf8("splitterReceivedData"));
        splitterReceivedData->setOrientation(Qt::Horizontal);
        splitterReceivedData->setHandleWidth(10);
        layoutWidget = new QWidget(splitterReceivedData);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowserLogs = new CodeEditor(layoutWidget);
        textBrowserLogs->setObjectName(QString::fromUtf8("textBrowserLogs"));
        sizePolicy2.setHeightForWidth(textBrowserLogs->sizePolicy().hasHeightForWidth());
        textBrowserLogs->setSizePolicy(sizePolicy2);
        textBrowserLogs->setReadOnly(true);
        textBrowserLogs->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(textBrowserLogs);

        scrollAreaTextLogOptions = new QScrollArea(layoutWidget);
        scrollAreaTextLogOptions->setObjectName(QString::fromUtf8("scrollAreaTextLogOptions"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollAreaTextLogOptions->sizePolicy().hasHeightForWidth());
        scrollAreaTextLogOptions->setSizePolicy(sizePolicy3);
        scrollAreaTextLogOptions->setFrameShape(QFrame::NoFrame);
        scrollAreaTextLogOptions->setFrameShadow(QFrame::Sunken);
        scrollAreaTextLogOptions->setLineWidth(0);
        scrollAreaTextLogOptions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaTextLogOptions->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollAreaTextLogOptions->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 664, 102));
        sizePolicy3.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy3);
        gridLayout = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setVerticalSpacing(3);
        pushButtonTextLogToggle = new QPushButton(scrollAreaWidgetContents_2);
        pushButtonTextLogToggle->setObjectName(QString::fromUtf8("pushButtonTextLogToggle"));
        sizePolicy3.setHeightForWidth(pushButtonTextLogToggle->sizePolicy().hasHeightForWidth());
        pushButtonTextLogToggle->setSizePolicy(sizePolicy3);
        pushButtonTextLogToggle->setCheckable(true);

        gridLayout_15->addWidget(pushButtonTextLogToggle, 0, 1, 1, 1);

        spinBoxProcessingDelay = new QSpinBox(scrollAreaWidgetContents_2);
        spinBoxProcessingDelay->setObjectName(QString::fromUtf8("spinBoxProcessingDelay"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBoxProcessingDelay->sizePolicy().hasHeightForWidth());
        spinBoxProcessingDelay->setSizePolicy(sizePolicy4);
        spinBoxProcessingDelay->setMinimumSize(QSize(0, 0));
        spinBoxProcessingDelay->setAlignment(Qt::AlignCenter);
        spinBoxProcessingDelay->setMinimum(1);
        spinBoxProcessingDelay->setMaximum(500);
        spinBoxProcessingDelay->setSingleStep(5);
        spinBoxProcessingDelay->setValue(1);

        gridLayout_15->addWidget(spinBoxProcessingDelay, 3, 1, 1, 2);

        checkBoxWrapText = new QCheckBox(scrollAreaWidgetContents_2);
        checkBoxWrapText->setObjectName(QString::fromUtf8("checkBoxWrapText"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(checkBoxWrapText->sizePolicy().hasHeightForWidth());
        checkBoxWrapText->setSizePolicy(sizePolicy5);

        gridLayout_15->addWidget(checkBoxWrapText, 0, 3, 1, 1);

        lineEditHighlight = new QLineEdit(scrollAreaWidgetContents_2);
        lineEditHighlight->setObjectName(QString::fromUtf8("lineEditHighlight"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lineEditHighlight->sizePolicy().hasHeightForWidth());
        lineEditHighlight->setSizePolicy(sizePolicy6);
        lineEditHighlight->setClearButtonEnabled(true);

        gridLayout_15->addWidget(lineEditHighlight, 3, 4, 1, 8);

        checkBoxSendKey = new QCheckBox(scrollAreaWidgetContents_2);
        checkBoxSendKey->setObjectName(QString::fromUtf8("checkBoxSendKey"));
        sizePolicy5.setHeightForWidth(checkBoxSendKey->sizePolicy().hasHeightForWidth());
        checkBoxSendKey->setSizePolicy(sizePolicy5);
        checkBoxSendKey->setChecked(true);

        gridLayout_15->addWidget(checkBoxSendKey, 0, 2, 1, 1);

        comboBoxTextProcessing = new QComboBox(scrollAreaWidgetContents_2);
        comboBoxTextProcessing->addItem(QString());
        comboBoxTextProcessing->addItem(QString());
        comboBoxTextProcessing->addItem(QString());
        comboBoxTextProcessing->setObjectName(QString::fromUtf8("comboBoxTextProcessing"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(comboBoxTextProcessing->sizePolicy().hasHeightForWidth());
        comboBoxTextProcessing->setSizePolicy(sizePolicy7);

        gridLayout_15->addWidget(comboBoxTextProcessing, 1, 2, 1, 1);

        comboBoxAddTextMode = new QComboBox(scrollAreaWidgetContents_2);
        comboBoxAddTextMode->addItem(QString());
        comboBoxAddTextMode->addItem(QString());
        comboBoxAddTextMode->setObjectName(QString::fromUtf8("comboBoxAddTextMode"));
        sizePolicy7.setHeightForWidth(comboBoxAddTextMode->sizePolicy().hasHeightForWidth());
        comboBoxAddTextMode->setSizePolicy(sizePolicy7);
        comboBoxAddTextMode->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_15->addWidget(comboBoxAddTextMode, 1, 1, 1, 1);

        checkBoxShowTime = new QCheckBox(scrollAreaWidgetContents_2);
        checkBoxShowTime->setObjectName(QString::fromUtf8("checkBoxShowTime"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(checkBoxShowTime->sizePolicy().hasHeightForWidth());
        checkBoxShowTime->setSizePolicy(sizePolicy8);

        gridLayout_15->addWidget(checkBoxShowTime, 0, 4, 1, 8);

        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy5.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy5);
        label_4->setMinimumSize(QSize(0, 0));

        gridLayout_15->addWidget(label_4, 3, 3, 1, 1);

        comboBoxFormat = new QComboBox(scrollAreaWidgetContents_2);
        comboBoxFormat->addItem(QString());
        comboBoxFormat->addItem(QString());
        comboBoxFormat->addItem(QString());
        comboBoxFormat->setObjectName(QString::fromUtf8("comboBoxFormat"));
        sizePolicy7.setHeightForWidth(comboBoxFormat->sizePolicy().hasHeightForWidth());
        comboBoxFormat->setSizePolicy(sizePolicy7);

        gridLayout_15->addWidget(comboBoxFormat, 1, 3, 1, 1);

        checkBoxShowControlChars = new QCheckBox(scrollAreaWidgetContents_2);
        checkBoxShowControlChars->setObjectName(QString::fromUtf8("checkBoxShowControlChars"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(checkBoxShowControlChars->sizePolicy().hasHeightForWidth());
        checkBoxShowControlChars->setSizePolicy(sizePolicy9);

        gridLayout_15->addWidget(checkBoxShowControlChars, 1, 4, 1, 8);


        horizontalLayout->addLayout(gridLayout_15);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setVerticalSpacing(3);
        pushButtonClear = new QPushButton(scrollAreaWidgetContents_2);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        sizePolicy7.setHeightForWidth(pushButtonClear->sizePolicy().hasHeightForWidth());
        pushButtonClear->setSizePolicy(sizePolicy7);

        gridLayout_17->addWidget(pushButtonClear, 0, 2, 1, 1);

        label_23 = new QLabel(scrollAreaWidgetContents_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_23, 2, 0, 1, 1);

        checkBoxScrollToButtom = new QCheckBox(scrollAreaWidgetContents_2);
        checkBoxScrollToButtom->setObjectName(QString::fromUtf8("checkBoxScrollToButtom"));
        sizePolicy7.setHeightForWidth(checkBoxScrollToButtom->sizePolicy().hasHeightForWidth());
        checkBoxScrollToButtom->setSizePolicy(sizePolicy7);
        checkBoxScrollToButtom->setCheckable(true);
        checkBoxScrollToButtom->setChecked(true);

        gridLayout_17->addWidget(checkBoxScrollToButtom, 0, 0, 1, 1);

        spinBoxMaxLines = new QSpinBox(scrollAreaWidgetContents_2);
        spinBoxMaxLines->setObjectName(QString::fromUtf8("spinBoxMaxLines"));
        sizePolicy8.setHeightForWidth(spinBoxMaxLines->sizePolicy().hasHeightForWidth());
        spinBoxMaxLines->setSizePolicy(sizePolicy8);
        spinBoxMaxLines->setAlignment(Qt::AlignCenter);
        spinBoxMaxLines->setMinimum(100);
        spinBoxMaxLines->setMaximum(10000000);
        spinBoxMaxLines->setSingleStep(1000);
        spinBoxMaxLines->setStepType(QAbstractSpinBox::DefaultStepType);
        spinBoxMaxLines->setValue(1000);

        gridLayout_17->addWidget(spinBoxMaxLines, 1, 0, 1, 3);

        pushButtonSerialLogScrollown = new QPushButton(scrollAreaWidgetContents_2);
        pushButtonSerialLogScrollown->setObjectName(QString::fromUtf8("pushButtonSerialLogScrollown"));

        gridLayout_17->addWidget(pushButtonSerialLogScrollown, 0, 1, 1, 1);

        comboBoxMessagesDisplayMode = new QComboBox(scrollAreaWidgetContents_2);
        comboBoxMessagesDisplayMode->addItem(QString());
        comboBoxMessagesDisplayMode->addItem(QString());
        comboBoxMessagesDisplayMode->setObjectName(QString::fromUtf8("comboBoxMessagesDisplayMode"));
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(comboBoxMessagesDisplayMode->sizePolicy().hasHeightForWidth());
        comboBoxMessagesDisplayMode->setSizePolicy(sizePolicy10);
        comboBoxMessagesDisplayMode->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_17->addWidget(comboBoxMessagesDisplayMode, 2, 1, 1, 2);


        horizontalLayout->addLayout(gridLayout_17);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        scrollAreaTextLogOptions->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollAreaTextLogOptions);

        splitterReceivedData->addWidget(layoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitterReceivedData);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        splitterGraphTable = new QSplitter(verticalLayoutWidget_2);
        splitterGraphTable->setObjectName(QString::fromUtf8("splitterGraphTable"));
        splitterGraphTable->setOrientation(Qt::Vertical);
        stackedWidgetGraphView = new QStackedWidget(splitterGraphTable);
        stackedWidgetGraphView->setObjectName(QString::fromUtf8("stackedWidgetGraphView"));
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(1);
        sizePolicy11.setHeightForWidth(stackedWidgetGraphView->sizePolicy().hasHeightForWidth());
        stackedWidgetGraphView->setSizePolicy(sizePolicy11);
        stackedWidgetGraphView->setSizeIncrement(QSize(0, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_12 = new QGridLayout(page);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        widgetChart = new QCustomPlot(page);
        widgetChart->setObjectName(QString::fromUtf8("widgetChart"));
        sizePolicy2.setHeightForWidth(widgetChart->sizePolicy().hasHeightForWidth());
        widgetChart->setSizePolicy(sizePolicy2);
        widgetChart->setMinimumSize(QSize(0, 0));
        widgetChart->setCursor(QCursor(Qt::CrossCursor));

        gridLayout_12->addWidget(widgetChart, 0, 0, 1, 1);

        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        sizePolicy5.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy5);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setLineWidth(0);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 1113, 108));
        gridLayout_24 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        gridLayout_24->setContentsMargins(0, 0, 0, 20);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        comboBoxClockSource = new QComboBox(scrollAreaWidgetContents_4);
        comboBoxClockSource->addItem(QString());
        comboBoxClockSource->addItem(QString());
        comboBoxClockSource->addItem(QString());
        comboBoxClockSource->setObjectName(QString::fromUtf8("comboBoxClockSource"));
        sizePolicy7.setHeightForWidth(comboBoxClockSource->sizePolicy().hasHeightForWidth());
        comboBoxClockSource->setSizePolicy(sizePolicy7);
        comboBoxClockSource->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_18->addWidget(comboBoxClockSource, 15, 1, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_18->addWidget(label_20, 15, 0, 1, 1);

        lineEditExternalClockLabel = new QLineEdit(scrollAreaWidgetContents_4);
        lineEditExternalClockLabel->setObjectName(QString::fromUtf8("lineEditExternalClockLabel"));
        lineEditExternalClockLabel->setEnabled(false);
        sizePolicy9.setHeightForWidth(lineEditExternalClockLabel->sizePolicy().hasHeightForWidth());
        lineEditExternalClockLabel->setSizePolicy(sizePolicy9);

        gridLayout_18->addWidget(lineEditExternalClockLabel, 15, 2, 1, 4);

        comboBoxExternalTimeFormat = new QComboBox(scrollAreaWidgetContents_4);
        comboBoxExternalTimeFormat->setObjectName(QString::fromUtf8("comboBoxExternalTimeFormat"));
        comboBoxExternalTimeFormat->setEnabled(false);
        comboBoxExternalTimeFormat->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_18->addWidget(comboBoxExternalTimeFormat, 15, 6, 1, 2);

        label_10 = new QLabel(scrollAreaWidgetContents_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy4.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy4);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_10, 12, 0, 3, 1);

        comboBoxGraphDisplayMode = new QComboBox(scrollAreaWidgetContents_4);
        comboBoxGraphDisplayMode->addItem(QString());
        comboBoxGraphDisplayMode->addItem(QString());
        comboBoxGraphDisplayMode->addItem(QString());
        comboBoxGraphDisplayMode->setObjectName(QString::fromUtf8("comboBoxGraphDisplayMode"));
        sizePolicy10.setHeightForWidth(comboBoxGraphDisplayMode->sizePolicy().hasHeightForWidth());
        comboBoxGraphDisplayMode->setSizePolicy(sizePolicy10);

        gridLayout_18->addWidget(comboBoxGraphDisplayMode, 12, 1, 3, 1);

        labelParsingRules = new QLabel(scrollAreaWidgetContents_4);
        labelParsingRules->setObjectName(QString::fromUtf8("labelParsingRules"));
        sizePolicy4.setHeightForWidth(labelParsingRules->sizePolicy().hasHeightForWidth());
        labelParsingRules->setSizePolicy(sizePolicy4);

        gridLayout_18->addWidget(labelParsingRules, 12, 2, 3, 1);

        lineEditCustomParsingRules = new QLineEdit(scrollAreaWidgetContents_4);
        lineEditCustomParsingRules->setObjectName(QString::fromUtf8("lineEditCustomParsingRules"));
        lineEditCustomParsingRules->setEnabled(true);
        QSizePolicy sizePolicy12(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(lineEditCustomParsingRules->sizePolicy().hasHeightForWidth());
        lineEditCustomParsingRules->setSizePolicy(sizePolicy12);
        lineEditCustomParsingRules->setMinimumSize(QSize(0, 0));
        lineEditCustomParsingRules->setClearButtonEnabled(true);

        gridLayout_18->addWidget(lineEditCustomParsingRules, 12, 3, 3, 5);

        checkBoxAutoRescaleY = new QCheckBox(scrollAreaWidgetContents_4);
        checkBoxAutoRescaleY->setObjectName(QString::fromUtf8("checkBoxAutoRescaleY"));
        checkBoxAutoRescaleY->setEnabled(false);
        sizePolicy3.setHeightForWidth(checkBoxAutoRescaleY->sizePolicy().hasHeightForWidth());
        checkBoxAutoRescaleY->setSizePolicy(sizePolicy3);
        checkBoxAutoRescaleY->setChecked(true);

        gridLayout_18->addWidget(checkBoxAutoRescaleY, 8, 5, 4, 1);

        checkBoxEnableTracer = new QCheckBox(scrollAreaWidgetContents_4);
        checkBoxEnableTracer->setObjectName(QString::fromUtf8("checkBoxEnableTracer"));
        sizePolicy4.setHeightForWidth(checkBoxEnableTracer->sizePolicy().hasHeightForWidth());
        checkBoxEnableTracer->setSizePolicy(sizePolicy4);
        checkBoxEnableTracer->setChecked(false);

        gridLayout_18->addWidget(checkBoxEnableTracer, 8, 2, 4, 1);

        spinBoxScrollingTimeRange = new QSpinBox(scrollAreaWidgetContents_4);
        spinBoxScrollingTimeRange->setObjectName(QString::fromUtf8("spinBoxScrollingTimeRange"));
        spinBoxScrollingTimeRange->setEnabled(false);
        sizePolicy7.setHeightForWidth(spinBoxScrollingTimeRange->sizePolicy().hasHeightForWidth());
        spinBoxScrollingTimeRange->setSizePolicy(sizePolicy7);
        spinBoxScrollingTimeRange->setAlignment(Qt::AlignCenter);
        spinBoxScrollingTimeRange->setMinimum(1);
        spinBoxScrollingTimeRange->setMaximum(3600);
        spinBoxScrollingTimeRange->setSingleStep(1);
        spinBoxScrollingTimeRange->setValue(5);

        gridLayout_18->addWidget(spinBoxScrollingTimeRange, 8, 6, 4, 2);

        checkBoxAutoTrack = new QCheckBox(scrollAreaWidgetContents_4);
        checkBoxAutoTrack->setObjectName(QString::fromUtf8("checkBoxAutoTrack"));
        sizePolicy4.setHeightForWidth(checkBoxAutoTrack->sizePolicy().hasHeightForWidth());
        checkBoxAutoTrack->setSizePolicy(sizePolicy4);
        checkBoxAutoTrack->setChecked(false);

        gridLayout_18->addWidget(checkBoxAutoTrack, 8, 4, 4, 1);

        comboBoxTracerStyle = new QComboBox(scrollAreaWidgetContents_4);
        comboBoxTracerStyle->addItem(QString());
        comboBoxTracerStyle->addItem(QString());
        comboBoxTracerStyle->setObjectName(QString::fromUtf8("comboBoxTracerStyle"));
        sizePolicy7.setHeightForWidth(comboBoxTracerStyle->sizePolicy().hasHeightForWidth());
        comboBoxTracerStyle->setSizePolicy(sizePolicy7);

        gridLayout_18->addWidget(comboBoxTracerStyle, 8, 3, 4, 1);

        checkBoxShowLegend = new QCheckBox(scrollAreaWidgetContents_4);
        checkBoxShowLegend->setObjectName(QString::fromUtf8("checkBoxShowLegend"));
        sizePolicy4.setHeightForWidth(checkBoxShowLegend->sizePolicy().hasHeightForWidth());
        checkBoxShowLegend->setSizePolicy(sizePolicy4);
        checkBoxShowLegend->setChecked(true);

        gridLayout_18->addWidget(checkBoxShowLegend, 8, 1, 4, 1);

        pushButtonEnablePlot = new QPushButton(scrollAreaWidgetContents_4);
        pushButtonEnablePlot->setObjectName(QString::fromUtf8("pushButtonEnablePlot"));
        sizePolicy10.setHeightForWidth(pushButtonEnablePlot->sizePolicy().hasHeightForWidth());
        pushButtonEnablePlot->setSizePolicy(sizePolicy10);
        pushButtonEnablePlot->setIconSize(QSize(15, 15));
        pushButtonEnablePlot->setCheckable(true);
        pushButtonEnablePlot->setChecked(false);

        gridLayout_18->addWidget(pushButtonEnablePlot, 8, 0, 4, 1);


        horizontalLayout_3->addLayout(gridLayout_18);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setSpacing(6);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setHorizontalSpacing(6);
        gridLayout_19->setVerticalSpacing(3);
        pushButtonClearAll = new QPushButton(scrollAreaWidgetContents_4);
        pushButtonClearAll->setObjectName(QString::fromUtf8("pushButtonClearAll"));
        sizePolicy4.setHeightForWidth(pushButtonClearAll->sizePolicy().hasHeightForWidth());
        pushButtonClearAll->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        pushButtonClearAll->setFont(font1);

        gridLayout_19->addWidget(pushButtonClearAll, 2, 2, 1, 1);

        pushButtonClearGraphs = new QPushButton(scrollAreaWidgetContents_4);
        pushButtonClearGraphs->setObjectName(QString::fromUtf8("pushButtonClearGraphs"));
        sizePolicy10.setHeightForWidth(pushButtonClearGraphs->sizePolicy().hasHeightForWidth());
        pushButtonClearGraphs->setSizePolicy(sizePolicy10);

        gridLayout_19->addWidget(pushButtonClearGraphs, 2, 1, 1, 1);

        toolButtonAdvancedGraphMenu = new QToolButton(scrollAreaWidgetContents_4);
        toolButtonAdvancedGraphMenu->setObjectName(QString::fromUtf8("toolButtonAdvancedGraphMenu"));
        sizePolicy6.setHeightForWidth(toolButtonAdvancedGraphMenu->sizePolicy().hasHeightForWidth());
        toolButtonAdvancedGraphMenu->setSizePolicy(sizePolicy6);
        toolButtonAdvancedGraphMenu->setMinimumSize(QSize(150, 0));
        toolButtonAdvancedGraphMenu->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButtonAdvancedGraphMenu->setAutoRaise(false);
        toolButtonAdvancedGraphMenu->setArrowType(Qt::UpArrow);

        gridLayout_19->addWidget(toolButtonAdvancedGraphMenu, 4, 2, 1, 1);

        spinBoxRemoveOldLabels = new QSpinBox(scrollAreaWidgetContents_4);
        spinBoxRemoveOldLabels->setObjectName(QString::fromUtf8("spinBoxRemoveOldLabels"));
        sizePolicy10.setHeightForWidth(spinBoxRemoveOldLabels->sizePolicy().hasHeightForWidth());
        spinBoxRemoveOldLabels->setSizePolicy(sizePolicy10);
        spinBoxRemoveOldLabels->setMinimumSize(QSize(113, 0));
        spinBoxRemoveOldLabels->setAlignment(Qt::AlignCenter);
        spinBoxRemoveOldLabels->setMaximum(99);
        spinBoxRemoveOldLabels->setSingleStep(5);

        gridLayout_19->addWidget(spinBoxRemoveOldLabels, 4, 1, 1, 1);

        spinBoxMaxTimeRange = new QSpinBox(scrollAreaWidgetContents_4);
        spinBoxMaxTimeRange->setObjectName(QString::fromUtf8("spinBoxMaxTimeRange"));
        spinBoxMaxTimeRange->setEnabled(true);
        sizePolicy10.setHeightForWidth(spinBoxMaxTimeRange->sizePolicy().hasHeightForWidth());
        spinBoxMaxTimeRange->setSizePolicy(sizePolicy10);
        spinBoxMaxTimeRange->setAlignment(Qt::AlignCenter);
        spinBoxMaxTimeRange->setMinimum(0);
        spinBoxMaxTimeRange->setMaximum(3600);
        spinBoxMaxTimeRange->setSingleStep(10);
        spinBoxMaxTimeRange->setValue(3600);

        gridLayout_19->addWidget(spinBoxMaxTimeRange, 1, 2, 1, 1);

        spinBoxMaxGraphs = new QSpinBox(scrollAreaWidgetContents_4);
        spinBoxMaxGraphs->setObjectName(QString::fromUtf8("spinBoxMaxGraphs"));
        sizePolicy10.setHeightForWidth(spinBoxMaxGraphs->sizePolicy().hasHeightForWidth());
        spinBoxMaxGraphs->setSizePolicy(sizePolicy10);
        spinBoxMaxGraphs->setMinimumSize(QSize(0, 0));
        spinBoxMaxGraphs->setAlignment(Qt::AlignCenter);
        spinBoxMaxGraphs->setMinimum(1);
        spinBoxMaxGraphs->setMaximum(50);
        spinBoxMaxGraphs->setValue(10);

        gridLayout_19->addWidget(spinBoxMaxGraphs, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_19);


        gridLayout_24->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_4);

        gridLayout_12->addWidget(scrollArea, 1, 0, 1, 1);

        stackedWidgetGraphView->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_8 = new QGridLayout(page_2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy8.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy8);
        QFont font2;
        font2.setPointSize(22);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_6, 0, 0, 1, 1);

        quickWidget3DView = new QQuickWidget(page_2);
        quickWidget3DView->setObjectName(QString::fromUtf8("quickWidget3DView"));
        quickWidget3DView->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout_8->addWidget(quickWidget3DView, 1, 0, 1, 1);

        stackedWidgetGraphView->addWidget(page_2);
        splitterGraphTable->addWidget(stackedWidgetGraphView);
        verticalLayoutWidget = new QWidget(splitterGraphTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetTableView = new QTabWidget(verticalLayoutWidget);
        tabWidgetTableView->setObjectName(QString::fromUtf8("tabWidgetTableView"));
        tabWidgetTableViewPage1 = new QWidget();
        tabWidgetTableViewPage1->setObjectName(QString::fromUtf8("tabWidgetTableViewPage1"));
        gridLayout_20 = new QGridLayout(tabWidgetTableViewPage1);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setContentsMargins(1, -1, 1, 1);
        tableWidgetParsedData = new QTableWidget(tabWidgetTableViewPage1);
        tableWidgetParsedData->setObjectName(QString::fromUtf8("tableWidgetParsedData"));
        tableWidgetParsedData->setEnabled(true);
        sizePolicy3.setHeightForWidth(tableWidgetParsedData->sizePolicy().hasHeightForWidth());
        tableWidgetParsedData->setSizePolicy(sizePolicy3);
        tableWidgetParsedData->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetParsedData->setAlternatingRowColors(true);
        tableWidgetParsedData->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidgetParsedData->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetParsedData->setShowGrid(true);
        tableWidgetParsedData->setGridStyle(Qt::DashLine);
        tableWidgetParsedData->setCornerButtonEnabled(false);

        gridLayout_20->addWidget(tableWidgetParsedData, 0, 0, 1, 4);

        pushButtonSetSelectedToGraph = new QPushButton(tabWidgetTableViewPage1);
        pushButtonSetSelectedToGraph->setObjectName(QString::fromUtf8("pushButtonSetSelectedToGraph"));
        sizePolicy4.setHeightForWidth(pushButtonSetSelectedToGraph->sizePolicy().hasHeightForWidth());
        pushButtonSetSelectedToGraph->setSizePolicy(sizePolicy4);

        gridLayout_20->addWidget(pushButtonSetSelectedToGraph, 1, 0, 1, 1);

        checkBoxTableAutoResize = new QCheckBox(tabWidgetTableViewPage1);
        checkBoxTableAutoResize->setObjectName(QString::fromUtf8("checkBoxTableAutoResize"));
        checkBoxTableAutoResize->setChecked(true);

        gridLayout_20->addWidget(checkBoxTableAutoResize, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(648, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        pushButtonClearTable = new QPushButton(tabWidgetTableViewPage1);
        pushButtonClearTable->setObjectName(QString::fromUtf8("pushButtonClearTable"));
        sizePolicy4.setHeightForWidth(pushButtonClearTable->sizePolicy().hasHeightForWidth());
        pushButtonClearTable->setSizePolicy(sizePolicy4);

        gridLayout_20->addWidget(pushButtonClearTable, 1, 3, 1, 1);

        tabWidgetTableView->addTab(tabWidgetTableViewPage1, QString());
        tabWidgetTableViewPage2 = new QWidget();
        tabWidgetTableViewPage2->setObjectName(QString::fromUtf8("tabWidgetTableViewPage2"));
        gridLayout_23 = new QGridLayout(tabWidgetTableViewPage2);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(1, 9, 1, 1);
        checkBoxAutoSizeColumnsLogTable = new QCheckBox(tabWidgetTableViewPage2);
        checkBoxAutoSizeColumnsLogTable->setObjectName(QString::fromUtf8("checkBoxAutoSizeColumnsLogTable"));
        checkBoxAutoSizeColumnsLogTable->setEnabled(true);
        checkBoxAutoSizeColumnsLogTable->setChecked(true);

        gridLayout_23->addWidget(checkBoxAutoSizeColumnsLogTable, 2, 1, 1, 1);

        pushButtonEnableTableLog = new QPushButton(tabWidgetTableViewPage2);
        pushButtonEnableTableLog->setObjectName(QString::fromUtf8("pushButtonEnableTableLog"));
        pushButtonEnableTableLog->setCheckable(true);
        pushButtonEnableTableLog->setChecked(false);

        gridLayout_23->addWidget(pushButtonEnableTableLog, 1, 1, 1, 1);

        label_25 = new QLabel(tabWidgetTableViewPage2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_23->addWidget(label_25, 1, 2, 1, 1);

        spinBoxMaxRowsLogTable = new QSpinBox(tabWidgetTableViewPage2);
        spinBoxMaxRowsLogTable->setObjectName(QString::fromUtf8("spinBoxMaxRowsLogTable"));
        spinBoxMaxRowsLogTable->setMaximum(10000);
        spinBoxMaxRowsLogTable->setSingleStep(10);
        spinBoxMaxRowsLogTable->setValue(0);

        gridLayout_23->addWidget(spinBoxMaxRowsLogTable, 1, 3, 1, 1);

        pushButtonClearLogTable = new QPushButton(tabWidgetTableViewPage2);
        pushButtonClearLogTable->setObjectName(QString::fromUtf8("pushButtonClearLogTable"));

        gridLayout_23->addWidget(pushButtonClearLogTable, 1, 10, 1, 1);

        checkBoxScrollLogEnableSorting = new QCheckBox(tabWidgetTableViewPage2);
        checkBoxScrollLogEnableSorting->setObjectName(QString::fromUtf8("checkBoxScrollLogEnableSorting"));
        checkBoxScrollLogEnableSorting->setChecked(true);

        gridLayout_23->addWidget(checkBoxScrollLogEnableSorting, 2, 2, 1, 1);

        tableWidgetLogTable = new QTableWidget(tabWidgetTableViewPage2);
        tableWidgetLogTable->setObjectName(QString::fromUtf8("tableWidgetLogTable"));
        tableWidgetLogTable->setEnabled(true);

        gridLayout_23->addWidget(tableWidgetLogTable, 0, 0, 1, 11);

        checkBoxAutoScrollLogTable = new QCheckBox(tabWidgetTableViewPage2);
        checkBoxAutoScrollLogTable->setObjectName(QString::fromUtf8("checkBoxAutoScrollLogTable"));
        checkBoxAutoScrollLogTable->setChecked(true);

        gridLayout_23->addWidget(checkBoxAutoScrollLogTable, 2, 3, 1, 1);

        pushButtonExportLogTableToCSV = new QPushButton(tabWidgetTableViewPage2);
        pushButtonExportLogTableToCSV->setObjectName(QString::fromUtf8("pushButtonExportLogTableToCSV"));

        gridLayout_23->addWidget(pushButtonExportLogTableToCSV, 1, 5, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_23->addItem(horizontalSpacer_9, 1, 9, 1, 1);

        tabWidgetTableView->addTab(tabWidgetTableViewPage2, QString());

        verticalLayout->addWidget(tabWidgetTableView);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setSpacing(6);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_22->addItem(horizontalSpacer_7, 2, 1, 1, 1);

        toolButtonHideTable = new QToolButton(verticalLayoutWidget);
        toolButtonHideTable->setObjectName(QString::fromUtf8("toolButtonHideTable"));
        sizePolicy4.setHeightForWidth(toolButtonHideTable->sizePolicy().hasHeightForWidth());
        toolButtonHideTable->setSizePolicy(sizePolicy4);
        toolButtonHideTable->setMinimumSize(QSize(150, 0));
        toolButtonHideTable->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButtonHideTable->setArrowType(Qt::DownArrow);

        gridLayout_22->addWidget(toolButtonHideTable, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_22);

        splitterGraphTable->addWidget(verticalLayoutWidget);

        verticalLayout_12->addWidget(splitterGraphTable);

        splitterReceivedData->addWidget(verticalLayoutWidget_2);

        gridLayout_13->addWidget(splitterReceivedData, 0, 0, 1, 1);


        gridLayout_21->addWidget(groupBoxLog, 1, 0, 1, 1);

        groupBoxSettings = new QGroupBox(centralWidget);
        groupBoxSettings->setObjectName(QString::fromUtf8("groupBoxSettings"));
        groupBoxSettings->setMinimumSize(QSize(0, 0));
        groupBoxSettings->setFlat(true);
        gridLayout_4 = new QGridLayout(groupBoxSettings);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidgetControlSection = new QTabWidget(groupBoxSettings);
        tabWidgetControlSection->setObjectName(QString::fromUtf8("tabWidgetControlSection"));
        sizePolicy3.setHeightForWidth(tabWidgetControlSection->sizePolicy().hasHeightForWidth());
        tabWidgetControlSection->setSizePolicy(sizePolicy3);
        tabWidgetControlSection->setTabPosition(QTabWidget::South);
        tabWidgetControlSection->setTabShape(QTabWidget::Rounded);
        tabWidgetControlSection->setElideMode(Qt::ElideMiddle);
        tabSerial = new QWidget();
        tabSerial->setObjectName(QString::fromUtf8("tabSerial"));
        gridLayout_5 = new QGridLayout(tabSerial);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 5, 4, 1, 1);

        pushButtonSerialConnect = new QPushButton(tabSerial);
        pushButtonSerialConnect->setObjectName(QString::fromUtf8("pushButtonSerialConnect"));
        sizePolicy.setHeightForWidth(pushButtonSerialConnect->sizePolicy().hasHeightForWidth());
        pushButtonSerialConnect->setSizePolicy(sizePolicy);
        pushButtonSerialConnect->setMinimumSize(QSize(200, 30));
        QFont font3;
        font3.setUnderline(false);
        pushButtonSerialConnect->setFont(font3);
        pushButtonSerialConnect->setCheckable(true);
        pushButtonSerialConnect->setChecked(false);
        pushButtonSerialConnect->setAutoDefault(false);
        pushButtonSerialConnect->setFlat(false);

        gridLayout_5->addWidget(pushButtonSerialConnect, 5, 3, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBoxStopBits = new QComboBox(tabSerial);
        comboBoxStopBits->addItem(QString());
        comboBoxStopBits->addItem(QString());
        comboBoxStopBits->addItem(QString());
        comboBoxStopBits->setObjectName(QString::fromUtf8("comboBoxStopBits"));
        sizePolicy3.setHeightForWidth(comboBoxStopBits->sizePolicy().hasHeightForWidth());
        comboBoxStopBits->setSizePolicy(sizePolicy3);
        comboBoxStopBits->setMinimumSize(QSize(0, 25));

        gridLayout_2->addWidget(comboBoxStopBits, 1, 8, 1, 2);

        checkBoxDTR = new QCheckBox(tabSerial);
        checkBoxDTR->setObjectName(QString::fromUtf8("checkBoxDTR"));
        QSizePolicy sizePolicy13(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(checkBoxDTR->sizePolicy().hasHeightForWidth());
        checkBoxDTR->setSizePolicy(sizePolicy13);
        checkBoxDTR->setChecked(true);

        gridLayout_2->addWidget(checkBoxDTR, 1, 12, 1, 1);

        comboBoxSerialReadMode = new QComboBox(tabSerial);
        comboBoxSerialReadMode->addItem(QString());
        comboBoxSerialReadMode->addItem(QString());
        comboBoxSerialReadMode->addItem(QString());
        comboBoxSerialReadMode->addItem(QString());
        comboBoxSerialReadMode->setObjectName(QString::fromUtf8("comboBoxSerialReadMode"));
        QSizePolicy sizePolicy14(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy14.setHorizontalStretch(0);
        sizePolicy14.setVerticalStretch(0);
        sizePolicy14.setHeightForWidth(comboBoxSerialReadMode->sizePolicy().hasHeightForWidth());
        comboBoxSerialReadMode->setSizePolicy(sizePolicy14);
        comboBoxSerialReadMode->setMinimumSize(QSize(0, 25));
        comboBoxSerialReadMode->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(comboBoxSerialReadMode, 0, 2, 1, 3);

        comboBoxFlowControl = new QComboBox(tabSerial);
        comboBoxFlowControl->addItem(QString());
        comboBoxFlowControl->addItem(QString());
        comboBoxFlowControl->addItem(QString());
        comboBoxFlowControl->setObjectName(QString::fromUtf8("comboBoxFlowControl"));
        sizePolicy3.setHeightForWidth(comboBoxFlowControl->sizePolicy().hasHeightForWidth());
        comboBoxFlowControl->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBoxFlowControl, 1, 2, 1, 3);

        labelFlowControl = new QLabel(tabSerial);
        labelFlowControl->setObjectName(QString::fromUtf8("labelFlowControl"));
        sizePolicy13.setHeightForWidth(labelFlowControl->sizePolicy().hasHeightForWidth());
        labelFlowControl->setSizePolicy(sizePolicy13);

        gridLayout_2->addWidget(labelFlowControl, 1, 1, 1, 1);

        label_2 = new QLabel(tabSerial);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy13.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy13);
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 5, 1, 1);

        labelParity = new QLabel(tabSerial);
        labelParity->setObjectName(QString::fromUtf8("labelParity"));
        sizePolicy13.setHeightForWidth(labelParity->sizePolicy().hasHeightForWidth());
        labelParity->setSizePolicy(sizePolicy13);

        gridLayout_2->addWidget(labelParity, 1, 5, 1, 1);

        label = new QLabel(tabSerial);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy13.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy13);
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 7, 1, 1);

        labelStopBits = new QLabel(tabSerial);
        labelStopBits->setObjectName(QString::fromUtf8("labelStopBits"));
        sizePolicy13.setHeightForWidth(labelStopBits->sizePolicy().hasHeightForWidth());
        labelStopBits->setSizePolicy(sizePolicy13);

        gridLayout_2->addWidget(labelStopBits, 1, 7, 1, 1);

        label_3 = new QLabel(tabSerial);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy13.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy13);

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);

        comboBoxBaudRates = new QComboBox(tabSerial);
        comboBoxBaudRates->setObjectName(QString::fromUtf8("comboBoxBaudRates"));
        comboBoxBaudRates->setEnabled(true);
        sizePolicy3.setHeightForWidth(comboBoxBaudRates->sizePolicy().hasHeightForWidth());
        comboBoxBaudRates->setSizePolicy(sizePolicy3);
        comboBoxBaudRates->setMinimumSize(QSize(0, 25));

        gridLayout_2->addWidget(comboBoxBaudRates, 0, 6, 1, 1);

        comboBoxParity = new QComboBox(tabSerial);
        comboBoxParity->addItem(QString());
        comboBoxParity->addItem(QString());
        comboBoxParity->addItem(QString());
        comboBoxParity->addItem(QString());
        comboBoxParity->addItem(QString());
        comboBoxParity->setObjectName(QString::fromUtf8("comboBoxParity"));
        sizePolicy3.setHeightForWidth(comboBoxParity->sizePolicy().hasHeightForWidth());
        comboBoxParity->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBoxParity, 1, 6, 1, 1);

        comboBoxDevices = new QComboBox(tabSerial);
        comboBoxDevices->setObjectName(QString::fromUtf8("comboBoxDevices"));
        comboBoxDevices->setEnabled(true);
        sizePolicy3.setHeightForWidth(comboBoxDevices->sizePolicy().hasHeightForWidth());
        comboBoxDevices->setSizePolicy(sizePolicy3);
        comboBoxDevices->setMinimumSize(QSize(250, 25));
        comboBoxDevices->setMaximumSize(QSize(16777215, 16777215));
        comboBoxDevices->setSizeIncrement(QSize(0, 0));
        comboBoxDevices->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(comboBoxDevices, 0, 8, 1, 4);

        comboBoxDataBits = new QComboBox(tabSerial);
        comboBoxDataBits->addItem(QString());
        comboBoxDataBits->addItem(QString());
        comboBoxDataBits->addItem(QString());
        comboBoxDataBits->addItem(QString());
        comboBoxDataBits->setObjectName(QString::fromUtf8("comboBoxDataBits"));
        sizePolicy3.setHeightForWidth(comboBoxDataBits->sizePolicy().hasHeightForWidth());
        comboBoxDataBits->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(comboBoxDataBits, 1, 11, 1, 1);

        labelDataBits = new QLabel(tabSerial);
        labelDataBits->setObjectName(QString::fromUtf8("labelDataBits"));
        sizePolicy13.setHeightForWidth(labelDataBits->sizePolicy().hasHeightForWidth());
        labelDataBits->setSizePolicy(sizePolicy13);

        gridLayout_2->addWidget(labelDataBits, 1, 10, 1, 1);

        pushButtonRefresh = new QPushButton(tabSerial);
        pushButtonRefresh->setObjectName(QString::fromUtf8("pushButtonRefresh"));
        pushButtonRefresh->setEnabled(true);
        pushButtonRefresh->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(pushButtonRefresh, 0, 13, 1, 1);

        checkBoxAutoRefresh = new QCheckBox(tabSerial);
        checkBoxAutoRefresh->setObjectName(QString::fromUtf8("checkBoxAutoRefresh"));
        sizePolicy3.setHeightForWidth(checkBoxAutoRefresh->sizePolicy().hasHeightForWidth());
        checkBoxAutoRefresh->setSizePolicy(sizePolicy3);
        checkBoxAutoRefresh->setMinimumSize(QSize(0, 0));
        checkBoxAutoRefresh->setMaximumSize(QSize(16777215, 16777215));
        checkBoxAutoRefresh->setChecked(true);

        gridLayout_2->addWidget(checkBoxAutoRefresh, 1, 13, 1, 1);

        radioButtonDeviceUpdate = new QRadioButton(tabSerial);
        radioButtonDeviceUpdate->setObjectName(QString::fromUtf8("radioButtonDeviceUpdate"));
        radioButtonDeviceUpdate->setEnabled(false);
        sizePolicy5.setHeightForWidth(radioButtonDeviceUpdate->sizePolicy().hasHeightForWidth());
        radioButtonDeviceUpdate->setSizePolicy(sizePolicy5);
        radioButtonDeviceUpdate->setMaximumSize(QSize(16777215, 16777215));
        radioButtonDeviceUpdate->setAutoFillBackground(false);
        radioButtonDeviceUpdate->setAutoExclusive(true);

        gridLayout_2->addWidget(radioButtonDeviceUpdate, 0, 12, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 5, 6, 1, 1);

        tabWidgetControlSection->addTab(tabSerial, QString());
        tabWiFi = new QWidget();
        tabWiFi->setObjectName(QString::fromUtf8("tabWiFi"));
        gridLayout_6 = new QGridLayout(tabWiFi);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        pushButtonUDPConnect = new QPushButton(tabWiFi);
        pushButtonUDPConnect->setObjectName(QString::fromUtf8("pushButtonUDPConnect"));
        pushButtonUDPConnect->setMinimumSize(QSize(200, 30));
        pushButtonUDPConnect->setCheckable(true);

        gridLayout_6->addWidget(pushButtonUDPConnect, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_9 = new QLabel(tabWiFi);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy13.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy13);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_9, 2, 0, 1, 1);

        comboBoxUDPSendMode = new QComboBox(tabWiFi);
        comboBoxUDPSendMode->addItem(QString());
        comboBoxUDPSendMode->addItem(QString());
        comboBoxUDPSendMode->addItem(QString());
        comboBoxUDPSendMode->setObjectName(QString::fromUtf8("comboBoxUDPSendMode"));
        sizePolicy3.setHeightForWidth(comboBoxUDPSendMode->sizePolicy().hasHeightForWidth());
        comboBoxUDPSendMode->setSizePolicy(sizePolicy3);
        comboBoxUDPSendMode->setMinimumSize(QSize(215, 25));

        gridLayout_10->addWidget(comboBoxUDPSendMode, 1, 1, 1, 2);

        lineEditUDPTargetIP = new QLineEdit(tabWiFi);
        lineEditUDPTargetIP->setObjectName(QString::fromUtf8("lineEditUDPTargetIP"));
        sizePolicy3.setHeightForWidth(lineEditUDPTargetIP->sizePolicy().hasHeightForWidth());
        lineEditUDPTargetIP->setSizePolicy(sizePolicy3);
        lineEditUDPTargetIP->setMinimumSize(QSize(0, 25));
        lineEditUDPTargetIP->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(lineEditUDPTargetIP, 2, 1, 1, 2);

        label_7 = new QLabel(tabWiFi);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        gridLayout_10->addWidget(label_7, 1, 0, 1, 1);

        comboBoxUDPReceiveMode = new QComboBox(tabWiFi);
        comboBoxUDPReceiveMode->addItem(QString());
        comboBoxUDPReceiveMode->addItem(QString());
        comboBoxUDPReceiveMode->addItem(QString());
        comboBoxUDPReceiveMode->setObjectName(QString::fromUtf8("comboBoxUDPReceiveMode"));
        sizePolicy3.setHeightForWidth(comboBoxUDPReceiveMode->sizePolicy().hasHeightForWidth());
        comboBoxUDPReceiveMode->setSizePolicy(sizePolicy3);
        comboBoxUDPReceiveMode->setMinimumSize(QSize(215, 25));

        gridLayout_10->addWidget(comboBoxUDPReceiveMode, 1, 6, 1, 3);

        label_5 = new QLabel(tabWiFi);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy13.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy13);

        gridLayout_10->addWidget(label_5, 1, 5, 1, 1);

        label_16 = new QLabel(tabWiFi);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy13.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy13);

        gridLayout_10->addWidget(label_16, 2, 7, 1, 1);

        spinBoxUDPReceivePort = new QSpinBox(tabWiFi);
        spinBoxUDPReceivePort->setObjectName(QString::fromUtf8("spinBoxUDPReceivePort"));
        sizePolicy3.setHeightForWidth(spinBoxUDPReceivePort->sizePolicy().hasHeightForWidth());
        spinBoxUDPReceivePort->setSizePolicy(sizePolicy3);
        spinBoxUDPReceivePort->setMinimumSize(QSize(70, 0));
        spinBoxUDPReceivePort->setAlignment(Qt::AlignCenter);
        spinBoxUDPReceivePort->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxUDPReceivePort->setMaximum(99999);
        spinBoxUDPReceivePort->setValue(0);

        gridLayout_10->addWidget(spinBoxUDPReceivePort, 2, 8, 1, 1);

        label_8 = new QLabel(tabWiFi);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy13.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy13);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_8, 2, 5, 1, 1);

        spinBoxUDPTargetPort = new QSpinBox(tabWiFi);
        spinBoxUDPTargetPort->setObjectName(QString::fromUtf8("spinBoxUDPTargetPort"));
        sizePolicy3.setHeightForWidth(spinBoxUDPTargetPort->sizePolicy().hasHeightForWidth());
        spinBoxUDPTargetPort->setSizePolicy(sizePolicy3);
        spinBoxUDPTargetPort->setMinimumSize(QSize(70, 0));
        spinBoxUDPTargetPort->setAlignment(Qt::AlignCenter);
        spinBoxUDPTargetPort->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxUDPTargetPort->setMinimum(0);
        spinBoxUDPTargetPort->setMaximum(99999);
        spinBoxUDPTargetPort->setSingleStep(1);
        spinBoxUDPTargetPort->setValue(0);
        spinBoxUDPTargetPort->setDisplayIntegerBase(10);

        gridLayout_10->addWidget(spinBoxUDPTargetPort, 2, 6, 1, 1);


        gridLayout_6->addLayout(gridLayout_10, 0, 4, 1, 1);

        tabWidgetControlSection->addTab(tabWiFi, QString());
        tabLogs = new QWidget();
        tabLogs->setObjectName(QString::fromUtf8("tabLogs"));
        gridLayout_9 = new QGridLayout(tabLogs);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        line = new QFrame(tabLogs);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line, 0, 8, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        checkBoxAppendDate = new QCheckBox(tabLogs);
        checkBoxAppendDate->setObjectName(QString::fromUtf8("checkBoxAppendDate"));
        sizePolicy3.setHeightForWidth(checkBoxAppendDate->sizePolicy().hasHeightForWidth());
        checkBoxAppendDate->setSizePolicy(sizePolicy3);

        verticalLayout_7->addWidget(checkBoxAppendDate);

        checkBoxSimplifyLog = new QCheckBox(tabLogs);
        checkBoxSimplifyLog->setObjectName(QString::fromUtf8("checkBoxSimplifyLog"));
        sizePolicy13.setHeightForWidth(checkBoxSimplifyLog->sizePolicy().hasHeightForWidth());
        checkBoxSimplifyLog->setSizePolicy(sizePolicy13);
        checkBoxSimplifyLog->setChecked(true);

        verticalLayout_7->addWidget(checkBoxSimplifyLog);

        checkBoxTruncateFileOnSave = new QCheckBox(tabLogs);
        checkBoxTruncateFileOnSave->setObjectName(QString::fromUtf8("checkBoxTruncateFileOnSave"));
        sizePolicy7.setHeightForWidth(checkBoxTruncateFileOnSave->sizePolicy().hasHeightForWidth());
        checkBoxTruncateFileOnSave->setSizePolicy(sizePolicy7);

        verticalLayout_7->addWidget(checkBoxTruncateFileOnSave);


        gridLayout_9->addLayout(verticalLayout_7, 0, 9, 1, 1);

        scrollArea_2 = new QScrollArea(tabLogs);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        QSizePolicy sizePolicy15(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy15.setHorizontalStretch(1);
        sizePolicy15.setVerticalStretch(0);
        sizePolicy15.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy15);
        scrollArea_2->setMinimumSize(QSize(0, 90));
        scrollArea_2->setMaximumSize(QSize(600, 16777215));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setFrameShadow(QFrame::Raised);
        scrollArea_2->setLineWidth(0);
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 627, 69));
        sizePolicy3.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy3);
        horizontalLayout_6 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(-1, -1, -1, 6);
        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setEnabled(true);
        sizePolicy13.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy13);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_18, 1, 2, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setEnabled(true);
        sizePolicy13.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy13);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_15, 1, 6, 1, 1);

        timeEditMaxParsingTime = new QTimeEdit(scrollAreaWidgetContents);
        timeEditMaxParsingTime->setObjectName(QString::fromUtf8("timeEditMaxParsingTime"));
        timeEditMaxParsingTime->setEnabled(true);
        QSizePolicy sizePolicy16(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy16.setHorizontalStretch(0);
        sizePolicy16.setVerticalStretch(0);
        sizePolicy16.setHeightForWidth(timeEditMaxParsingTime->sizePolicy().hasHeightForWidth());
        timeEditMaxParsingTime->setSizePolicy(sizePolicy16);
        QFont font4;
        font4.setPointSize(10);
        timeEditMaxParsingTime->setFont(font4);
        timeEditMaxParsingTime->setCalendarPopup(false);
        timeEditMaxParsingTime->setTimeSpec(Qt::LocalTime);

        gridLayout_14->addWidget(timeEditMaxParsingTime, 1, 5, 1, 1);

        lineEditLoadFilePath = new QLineEdit(scrollAreaWidgetContents);
        lineEditLoadFilePath->setObjectName(QString::fromUtf8("lineEditLoadFilePath"));
        lineEditLoadFilePath->setEnabled(true);
        sizePolicy3.setHeightForWidth(lineEditLoadFilePath->sizePolicy().hasHeightForWidth());
        lineEditLoadFilePath->setSizePolicy(sizePolicy3);
        lineEditLoadFilePath->setMinimumSize(QSize(0, 25));
        lineEditLoadFilePath->setClearButtonEnabled(true);

        gridLayout_14->addWidget(lineEditLoadFilePath, 0, 3, 1, 5);

        progressBarLoadFile = new QProgressBar(scrollAreaWidgetContents);
        progressBarLoadFile->setObjectName(QString::fromUtf8("progressBarLoadFile"));
        progressBarLoadFile->setEnabled(true);
        sizePolicy3.setHeightForWidth(progressBarLoadFile->sizePolicy().hasHeightForWidth());
        progressBarLoadFile->setSizePolicy(sizePolicy3);
        progressBarLoadFile->setMaximumSize(QSize(70, 23));
        progressBarLoadFile->setValue(0);
        progressBarLoadFile->setAlignment(Qt::AlignCenter);
        progressBarLoadFile->setTextVisible(true);
        progressBarLoadFile->setInvertedAppearance(false);

        gridLayout_14->addWidget(progressBarLoadFile, 0, 10, 1, 1);

        checkBoxAppendLoadedTextToLog = new QCheckBox(scrollAreaWidgetContents);
        checkBoxAppendLoadedTextToLog->setObjectName(QString::fromUtf8("checkBoxAppendLoadedTextToLog"));
        sizePolicy13.setHeightForWidth(checkBoxAppendLoadedTextToLog->sizePolicy().hasHeightForWidth());
        checkBoxAppendLoadedTextToLog->setSizePolicy(sizePolicy13);

        gridLayout_14->addWidget(checkBoxAppendLoadedTextToLog, 0, 11, 1, 1);

        pushButtonLoadFile = new QPushButton(scrollAreaWidgetContents);
        pushButtonLoadFile->setObjectName(QString::fromUtf8("pushButtonLoadFile"));
        pushButtonLoadFile->setEnabled(true);
        sizePolicy13.setHeightForWidth(pushButtonLoadFile->sizePolicy().hasHeightForWidth());
        pushButtonLoadFile->setSizePolicy(sizePolicy13);
        pushButtonLoadFile->setCheckable(false);

        gridLayout_14->addWidget(pushButtonLoadFile, 0, 9, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setEnabled(true);
        sizePolicy6.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy6);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_19, 1, 4, 1, 1);

        pushButtonLoadPath = new QPushButton(scrollAreaWidgetContents);
        pushButtonLoadPath->setObjectName(QString::fromUtf8("pushButtonLoadPath"));
        pushButtonLoadPath->setEnabled(true);
        sizePolicy13.setHeightForWidth(pushButtonLoadPath->sizePolicy().hasHeightForWidth());
        pushButtonLoadPath->setSizePolicy(sizePolicy13);
        pushButtonLoadPath->setMaximumSize(QSize(30, 16777215));

        gridLayout_14->addWidget(pushButtonLoadPath, 0, 8, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setEnabled(true);
        sizePolicy13.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy13);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_14, 0, 2, 1, 1);

        lineEditFileInfo = new QLineEdit(scrollAreaWidgetContents);
        lineEditFileInfo->setObjectName(QString::fromUtf8("lineEditFileInfo"));
        lineEditFileInfo->setEnabled(true);
        sizePolicy3.setHeightForWidth(lineEditFileInfo->sizePolicy().hasHeightForWidth());
        lineEditFileInfo->setSizePolicy(sizePolicy3);
        lineEditFileInfo->setMinimumSize(QSize(0, 25));
        lineEditFileInfo->setReadOnly(true);

        gridLayout_14->addWidget(lineEditFileInfo, 1, 7, 1, 5);

        timeEditMinParsingTime = new QTimeEdit(scrollAreaWidgetContents);
        timeEditMinParsingTime->setObjectName(QString::fromUtf8("timeEditMinParsingTime"));
        timeEditMinParsingTime->setEnabled(true);
        sizePolicy16.setHeightForWidth(timeEditMinParsingTime->sizePolicy().hasHeightForWidth());
        timeEditMinParsingTime->setSizePolicy(sizePolicy16);
        timeEditMinParsingTime->setFont(font4);
        timeEditMinParsingTime->setCalendarPopup(true);

        gridLayout_14->addWidget(timeEditMinParsingTime, 1, 3, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_14);

        scrollArea_2->setWidget(scrollAreaWidgetContents);

        gridLayout_9->addWidget(scrollArea_2, 0, 5, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_13 = new QLabel(tabLogs);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy13.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy13);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_13, 0, 0, 1, 1);

        lineEditSaveLogPath = new QLineEdit(tabLogs);
        lineEditSaveLogPath->setObjectName(QString::fromUtf8("lineEditSaveLogPath"));
        QSizePolicy sizePolicy17(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy17.setHorizontalStretch(0);
        sizePolicy17.setVerticalStretch(0);
        sizePolicy17.setHeightForWidth(lineEditSaveLogPath->sizePolicy().hasHeightForWidth());
        lineEditSaveLogPath->setSizePolicy(sizePolicy17);
        lineEditSaveLogPath->setMinimumSize(QSize(0, 25));
        lineEditSaveLogPath->setClearButtonEnabled(true);

        gridLayout_11->addWidget(lineEditSaveLogPath, 1, 1, 1, 1);

        pushButtonLogPath = new QPushButton(tabLogs);
        pushButtonLogPath->setObjectName(QString::fromUtf8("pushButtonLogPath"));
        sizePolicy7.setHeightForWidth(pushButtonLogPath->sizePolicy().hasHeightForWidth());
        pushButtonLogPath->setSizePolicy(sizePolicy7);
        pushButtonLogPath->setMaximumSize(QSize(30, 16777215));

        gridLayout_11->addWidget(pushButtonLogPath, 1, 2, 1, 1);

        label_11 = new QLabel(tabLogs);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy13.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy13);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_11, 1, 0, 1, 1);

        pushButtonSetDefaultLogPath = new QPushButton(tabLogs);
        pushButtonSetDefaultLogPath->setObjectName(QString::fromUtf8("pushButtonSetDefaultLogPath"));
        sizePolicy8.setHeightForWidth(pushButtonSetDefaultLogPath->sizePolicy().hasHeightForWidth());
        pushButtonSetDefaultLogPath->setSizePolicy(sizePolicy8);

        gridLayout_11->addWidget(pushButtonSetDefaultLogPath, 1, 3, 1, 1);

        pushButtonAddDateTime = new QPushButton(tabLogs);
        pushButtonAddDateTime->setObjectName(QString::fromUtf8("pushButtonAddDateTime"));
        sizePolicy8.setHeightForWidth(pushButtonAddDateTime->sizePolicy().hasHeightForWidth());
        pushButtonAddDateTime->setSizePolicy(sizePolicy8);

        gridLayout_11->addWidget(pushButtonAddDateTime, 0, 3, 1, 1);

        lineEditSaveFileName = new QLineEdit(tabLogs);
        lineEditSaveFileName->setObjectName(QString::fromUtf8("lineEditSaveFileName"));
        sizePolicy17.setHeightForWidth(lineEditSaveFileName->sizePolicy().hasHeightForWidth());
        lineEditSaveFileName->setSizePolicy(sizePolicy17);
        lineEditSaveFileName->setMinimumSize(QSize(0, 25));
        lineEditSaveFileName->setClearButtonEnabled(true);

        gridLayout_11->addWidget(lineEditSaveFileName, 0, 1, 1, 2);


        gridLayout_9->addLayout(gridLayout_11, 0, 11, 1, 1);

        checkBoxAutoLogging = new QCheckBox(tabLogs);
        checkBoxAutoLogging->setObjectName(QString::fromUtf8("checkBoxAutoLogging"));
        sizePolicy16.setHeightForWidth(checkBoxAutoLogging->sizePolicy().hasHeightForWidth());
        checkBoxAutoLogging->setSizePolicy(sizePolicy16);
        QFont font5;
        font5.setBold(false);
        font5.setUnderline(true);
        font5.setWeight(50);
        checkBoxAutoLogging->setFont(font5);

        gridLayout_9->addWidget(checkBoxAutoLogging, 0, 0, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setSizeConstraint(QLayout::SetMaximumSize);
        comboBoxLogFormat = new QComboBox(tabLogs);
        comboBoxLogFormat->addItem(QString());
        comboBoxLogFormat->addItem(QString());
        comboBoxLogFormat->setObjectName(QString::fromUtf8("comboBoxLogFormat"));
        sizePolicy8.setHeightForWidth(comboBoxLogFormat->sizePolicy().hasHeightForWidth());
        comboBoxLogFormat->setSizePolicy(sizePolicy8);
        comboBoxLogFormat->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_16->addWidget(comboBoxLogFormat, 0, 1, 1, 1);

        label_21 = new QLabel(tabLogs);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_16->addWidget(label_21, 0, 0, 1, 1);

        label_22 = new QLabel(tabLogs);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_16->addWidget(label_22, 1, 0, 1, 1);

        comboBoxLoggingMode = new QComboBox(tabLogs);
        comboBoxLoggingMode->addItem(QString());
        comboBoxLoggingMode->addItem(QString());
        comboBoxLoggingMode->setObjectName(QString::fromUtf8("comboBoxLoggingMode"));
        comboBoxLoggingMode->setEnabled(true);
        sizePolicy8.setHeightForWidth(comboBoxLoggingMode->sizePolicy().hasHeightForWidth());
        comboBoxLoggingMode->setSizePolicy(sizePolicy8);
        comboBoxLoggingMode->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_16->addWidget(comboBoxLoggingMode, 1, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_16, 0, 4, 1, 1);

        pushButtonLogging = new QPushButton(tabLogs);
        pushButtonLogging->setObjectName(QString::fromUtf8("pushButtonLogging"));
        sizePolicy6.setHeightForWidth(pushButtonLogging->sizePolicy().hasHeightForWidth());
        pushButtonLogging->setSizePolicy(sizePolicy6);
        pushButtonLogging->setMinimumSize(QSize(150, 30));
        pushButtonLogging->setCheckable(true);
        pushButtonLogging->setAutoExclusive(false);
        pushButtonLogging->setFlat(false);

        gridLayout_9->addWidget(pushButtonLogging, 0, 2, 1, 1);

        tabWidgetControlSection->addTab(tabLogs, QString());
        tabRAM = new QWidget();
        tabRAM->setObjectName(QString::fromUtf8("tabRAM"));
        gridLayout_7 = new QGridLayout(tabRAM);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_17 = new QLabel(tabRAM);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_5->addWidget(label_17);

        comboBoxRAMLoadMode = new QComboBox(tabRAM);
        comboBoxRAMLoadMode->addItem(QString());
        comboBoxRAMLoadMode->addItem(QString());
        comboBoxRAMLoadMode->setObjectName(QString::fromUtf8("comboBoxRAMLoadMode"));
        sizePolicy3.setHeightForWidth(comboBoxRAMLoadMode->sizePolicy().hasHeightForWidth());
        comboBoxRAMLoadMode->setSizePolicy(sizePolicy3);
        comboBoxRAMLoadMode->setMinimumSize(QSize(0, 25));

        horizontalLayout_5->addWidget(comboBoxRAMLoadMode);

        pushButtonLoadRAMBuffer = new QPushButton(tabRAM);
        pushButtonLoadRAMBuffer->setObjectName(QString::fromUtf8("pushButtonLoadRAMBuffer"));
        sizePolicy3.setHeightForWidth(pushButtonLoadRAMBuffer->sizePolicy().hasHeightForWidth());
        pushButtonLoadRAMBuffer->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(pushButtonLoadRAMBuffer);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_12 = new QLabel(tabRAM);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_4->addWidget(label_12);

        comboBoxRAMSaveMode = new QComboBox(tabRAM);
        comboBoxRAMSaveMode->addItem(QString());
        comboBoxRAMSaveMode->addItem(QString());
        comboBoxRAMSaveMode->setObjectName(QString::fromUtf8("comboBoxRAMSaveMode"));
        sizePolicy3.setHeightForWidth(comboBoxRAMSaveMode->sizePolicy().hasHeightForWidth());
        comboBoxRAMSaveMode->setSizePolicy(sizePolicy3);
        comboBoxRAMSaveMode->setMinimumSize(QSize(0, 25));

        horizontalLayout_4->addWidget(comboBoxRAMSaveMode);

        pushButtonSaveParserMemory = new QPushButton(tabRAM);
        pushButtonSaveParserMemory->setObjectName(QString::fromUtf8("pushButtonSaveParserMemory"));
        pushButtonSaveParserMemory->setEnabled(false);
        sizePolicy7.setHeightForWidth(pushButtonSaveParserMemory->sizePolicy().hasHeightForWidth());
        pushButtonSaveParserMemory->setSizePolicy(sizePolicy7);

        horizontalLayout_4->addWidget(pushButtonSaveParserMemory);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout_7->addLayout(verticalLayout_3, 2, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkBoxRAMClearChart = new QCheckBox(tabRAM);
        checkBoxRAMClearChart->setObjectName(QString::fromUtf8("checkBoxRAMClearChart"));
        checkBoxRAMClearChart->setChecked(true);

        verticalLayout_4->addWidget(checkBoxRAMClearChart);

        checkBoxClearRAMOnReset = new QCheckBox(tabRAM);
        checkBoxClearRAMOnReset->setObjectName(QString::fromUtf8("checkBoxClearRAMOnReset"));

        verticalLayout_4->addWidget(checkBoxClearRAMOnReset);


        gridLayout_7->addLayout(verticalLayout_4, 2, 14, 1, 1);

        pushButtonRAMClear = new QPushButton(tabRAM);
        pushButtonRAMClear->setObjectName(QString::fromUtf8("pushButtonRAMClear"));
        sizePolicy.setHeightForWidth(pushButtonRAMClear->sizePolicy().hasHeightForWidth());
        pushButtonRAMClear->setSizePolicy(sizePolicy);
        pushButtonRAMClear->setMinimumSize(QSize(0, 25));

        gridLayout_7->addWidget(pushButtonRAMClear, 2, 16, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 2, 12, 1, 1);

        checkBoxAutoSaveBuffer = new QCheckBox(tabRAM);
        checkBoxAutoSaveBuffer->setObjectName(QString::fromUtf8("checkBoxAutoSaveBuffer"));
        sizePolicy7.setHeightForWidth(checkBoxAutoSaveBuffer->sizePolicy().hasHeightForWidth());
        checkBoxAutoSaveBuffer->setSizePolicy(sizePolicy7);
        checkBoxAutoSaveBuffer->setCheckable(true);
        checkBoxAutoSaveBuffer->setChecked(true);

        gridLayout_7->addWidget(checkBoxAutoSaveBuffer, 2, 0, 1, 1);

        tabWidgetControlSection->addTab(tabRAM, QString());

        gridLayout_4->addWidget(tabWidgetControlSection, 2, 0, 1, 2);


        gridLayout_21->addWidget(groupBoxSettings, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1797, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSave = new QMenu(menuFile);
        menuSave->setObjectName(QString::fromUtf8("menuSave"));
        menuSave_Graph_As = new QMenu(menuSave);
        menuSave_Graph_As->setObjectName(QString::fromUtf8("menuSave_Graph_As"));
        menuPrint = new QMenu(menuFile);
        menuPrint->setObjectName(QString::fromUtf8("menuPrint"));
        menuExport = new QMenu(menuFile);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        menuParser_data = new QMenu(menuExport);
        menuParser_data->setObjectName(QString::fromUtf8("menuParser_data"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuFull_text_view = new QMenu(menuView);
        menuFull_text_view->setObjectName(QString::fromUtf8("menuFull_text_view"));
        menuChange_visualisation = new QMenu(menuView);
        menuChange_visualisation->setObjectName(QString::fromUtf8("menuChange_visualisation"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(tabWidgetControlSection, pushButtonSend);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuSave->menuAction());
        menuFile->addAction(menuExport->menuAction());
        menuFile->addAction(menuPrint->menuAction());
        menuFile->addAction(actionQuit);
        menuSave->addAction(actionSave_As);
        menuSave->addAction(menuSave_Graph_As->menuAction());
        menuSave_Graph_As->addAction(actionImage);
        menuPrint->addAction(actionPrint_log);
        menuPrint->addAction(actionPrint_Graph);
        menuExport->addAction(menuParser_data->menuAction());
        menuParser_data->addAction(actionto_csv);
        menuHelp->addAction(actionWhats_this);
        menuHelp->addAction(actionInfo);
        menuHelp->addAction(actionAbout_Qt);
        menuView->addAction(menuFull_text_view->menuAction());
        menuView->addAction(menuChange_visualisation->menuAction());
        menuFull_text_view->addAction(actionFull_text_view);
        menuFull_text_view->addAction(action50_50_view);
        menuFull_text_view->addAction(actionFull_chart);
        menuFull_text_view->addAction(actionShow_parser_data);
        menuFull_text_view->addAction(actionHide_parser_data);
        menuFull_text_view->addAction(actionFull_parser_data);
        menuChange_visualisation->addAction(actionPlotter);
        menuChange_visualisation->addAction(action3D_orientation);

        retranslateUi(MainWindow);

        stackedWidgetGraphView->setCurrentIndex(0);
        tabWidgetTableView->setCurrentIndex(0);
        tabWidgetControlSection->setCurrentIndex(0);
        pushButtonSerialConnect->setDefault(true);
        comboBoxDataBits->setCurrentIndex(3);
        pushButtonUDPConnect->setDefault(true);
        comboBoxUDPSendMode->setCurrentIndex(2);
        pushButtonLogging->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QtSerialMonitor", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save Log As...", nullptr));
        actionSave_As->setIconText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionKeyboard_shortucts->setText(QCoreApplication::translate("MainWindow", "Keyboard shortucts", nullptr));
#if QT_CONFIG(shortcut)
        actionKeyboard_shortucts->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFull_chart->setText(QCoreApplication::translate("MainWindow", "Full Chart", nullptr));
#if QT_CONFIG(shortcut)
        actionFull_chart->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        action50_50_view->setText(QCoreApplication::translate("MainWindow", "50/50", nullptr));
#if QT_CONFIG(shortcut)
        action50_50_view->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWhat_s_new->setText(QCoreApplication::translate("MainWindow", "Changelog", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionFull_text_view->setText(QCoreApplication::translate("MainWindow", "Full Text", nullptr));
#if QT_CONFIG(shortcut)
        actionFull_text_view->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlotter->setText(QCoreApplication::translate("MainWindow", "Plotter", nullptr));
#if QT_CONFIG(shortcut)
        actionPlotter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+8", nullptr));
#endif // QT_CONFIG(shortcut)
        action3D_orientation->setText(QCoreApplication::translate("MainWindow", "3D Orientation", nullptr));
#if QT_CONFIG(shortcut)
        action3D_orientation->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint_Graph->setText(QCoreApplication::translate("MainWindow", "Print Graph...", nullptr));
        actionPrint_log->setText(QCoreApplication::translate("MainWindow", "Print Log...", nullptr));
        actionWhats_this->setText(QCoreApplication::translate("MainWindow", "\"What's this ?\" Mode", nullptr));
#if QT_CONFIG(shortcut)
        actionWhats_this->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Application Info", nullptr));
        actionShow_parser_data->setText(QCoreApplication::translate("MainWindow", "Show parser data", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_parser_data->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHide_parser_data->setText(QCoreApplication::translate("MainWindow", "Hide parser data", nullptr));
#if QT_CONFIG(shortcut)
        actionHide_parser_data->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFull_parser_data->setText(QCoreApplication::translate("MainWindow", "Full parser data", nullptr));
#if QT_CONFIG(shortcut)
        actionFull_parser_data->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImage->setText(QCoreApplication::translate("MainWindow", "Image...", nullptr));
        actionto_csv->setText(QCoreApplication::translate("MainWindow", "to .csv...", nullptr));
        groupBoxSend->setTitle(QCoreApplication::translate("MainWindow", "Send message:", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonSend->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Wysy\305\202a wiadomo\305\233\304\207</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
#if QT_CONFIG(whatsthis)
        pushButtonClearHistory->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Clears command history list.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonClearHistory->setText(QCoreApplication::translate("MainWindow", "Clear history", nullptr));
#if QT_CONFIG(whatsthis)
        comboBoxSend->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>This is the send message field. Type here the message you want to send.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        groupBoxLog->setTitle(QCoreApplication::translate("MainWindow", "Received data:", nullptr));
#if QT_CONFIG(whatsthis)
        textBrowserLogs->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>This is the main text browser. Received messages and notification will be displayed here.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonTextLogToggle->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
#if QT_CONFIG(whatsthis)
        spinBoxProcessingDelay->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Set the interval of reading Serial/UDP. </p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        spinBoxProcessingDelay->setSuffix(QCoreApplication::translate("MainWindow", " [ms]", nullptr));
        spinBoxProcessingDelay->setPrefix(QCoreApplication::translate("MainWindow", "Processing delay ", nullptr));
#if QT_CONFIG(whatsthis)
        checkBoxWrapText->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Wrap all text inside the text window - may work slowly with large text.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBoxWrapText->setText(QCoreApplication::translate("MainWindow", "Wrap", nullptr));
#if QT_CONFIG(whatsthis)
        lineEditHighlight->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Highlights the words in the main text window that matches the contents of this textbox</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lineEditHighlight->setPlaceholderText(QCoreApplication::translate("MainWindow", "Text to highlight...", nullptr));
#if QT_CONFIG(whatsthis)
        checkBoxSendKey->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>If checked, pressed key will be immidietly sent to the device via Serial or UDP, depending on the active control section tab as long as the <span style=\" font-weight:600;\">text window remains focused</span>.</p><p>This is very useful for creating a rapidly accesible control interface via serial i.e, you could quickly regulate motor's PWM output by holding &quot;+&quot; or &quot;-&quot; keys, instead of typing &quot;set value ... &quot; every time you need to make a change.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBoxSendKey->setText(QCoreApplication::translate("MainWindow", "Send Key", nullptr));
        comboBoxTextProcessing->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBoxTextProcessing->setItemText(1, QCoreApplication::translate("MainWindow", "Trim", nullptr));
        comboBoxTextProcessing->setItemText(2, QCoreApplication::translate("MainWindow", "Simplify", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxTextProcessing->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Text processing modes</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        comboBoxTextProcessing->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Choose text post-processing:</p><p><span style=\" font-weight:600;\">- None</span></p><p><span style=\" font-weight:600;\">- Trim - remove whitespace form the start and the end of each line.</span></p><p><span style=\" font-weight:600;\">- Simplify - removes whitespace form the start and the end, and has each sequence of internal whitespace replaced with a single space.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxAddTextMode->setItemText(0, QCoreApplication::translate("MainWindow", "Insert line", nullptr));
        comboBoxAddTextMode->setItemText(1, QCoreApplication::translate("MainWindow", "Append line", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxAddTextMode->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>New line print method</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        comboBoxAddTextMode->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Change how new text line is added:</p><p><span style=\" font-weight:600;\">- Insert - moves the cursor to the end of document and simply pastes new data. Similar to &quot;print()&quot; in Arduino</span></p><p><span style=\" font-weight:600;\">- Append - adds new text as newline. Acts as &quot;println()&quot;. </span></p><p>One can use &quot;Append&quot; mode + &quot;trim&quot; or &quot;simplify&quot; processing options to remove all control characters form the text while still adding it as newline without the escape sequences present.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        checkBoxShowTime->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>If checked, received message will be displayed with system clock time in which it was received.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBoxShowTime->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Highlight:", nullptr));
        comboBoxFormat->setItemText(0, QCoreApplication::translate("MainWindow", "TXT", nullptr));
        comboBoxFormat->setItemText(1, QCoreApplication::translate("MainWindow", "HEX", nullptr));
        comboBoxFormat->setItemText(2, QCoreApplication::translate("MainWindow", "BIN", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxFormat->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Change text format</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        comboBoxFormat->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Choose message display format:</p><p><span style=\" font-weight:600;\">- text</span></p><p><span style=\" font-weight:600;\">- hex (base 16)</span></p><p><span style=\" font-weight:600;\">- binary (base 2)</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBoxShowControlChars->setText(QCoreApplication::translate("MainWindow", "Control char's", nullptr));
#if QT_CONFIG(whatsthis)
        pushButtonClear->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Clear text window</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Display:", nullptr));
        checkBoxScrollToButtom->setText(QCoreApplication::translate("MainWindow", "Auto scroll", nullptr));
        spinBoxMaxLines->setSuffix(QCoreApplication::translate("MainWindow", " lines", nullptr));
        spinBoxMaxLines->setPrefix(QCoreApplication::translate("MainWindow", "Max ", nullptr));
        pushButtonSerialLogScrollown->setText(QCoreApplication::translate("MainWindow", "Scroll Down", nullptr));
        comboBoxMessagesDisplayMode->setItemText(0, QCoreApplication::translate("MainWindow", "All messages", nullptr));
        comboBoxMessagesDisplayMode->setItemText(1, QCoreApplication::translate("MainWindow", "Incoming messages", nullptr));

#if QT_CONFIG(whatsthis)
        widgetChart->setWhatsThis(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This is the chart view widget, where plotted data is displayed. </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- <span style=\" font-weight:600;\">Hold left mouse button</span> to drag the chart view (Scroll X needs to be off !);</p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Click<span style=\" font-weight:600;\"> right mouse button</span> to activate"
                        " the context menu - can be used on legend as well;</p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- <span style=\" font-weight:600;\">Double click</span> to fit view to contents;</p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Use<span style=\" font-weight:600;\"> mouse wheel</span> to zoom in/out;</p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">- Hold <span style=\" font-weight:600;\">mouse middle button</span> to activate zoom rect (zooms in to selected area)</p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBoxClockSource->setItemText(0, QCoreApplication::translate("MainWindow", "System", nullptr));
        comboBoxClockSource->setItemText(1, QCoreApplication::translate("MainWindow", "External", nullptr));
        comboBoxClockSource->setItemText(2, QCoreApplication::translate("MainWindow", "None", nullptr));

        label_20->setText(QCoreApplication::translate("MainWindow", "Time reference:", nullptr));
        lineEditExternalClockLabel->setPlaceholderText(QCoreApplication::translate("MainWindow", "External clock label...", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Plotter:", nullptr));
        comboBoxGraphDisplayMode->setItemText(0, QCoreApplication::translate("MainWindow", "Auto", nullptr));
        comboBoxGraphDisplayMode->setItemText(1, QCoreApplication::translate("MainWindow", "Include", nullptr));
        comboBoxGraphDisplayMode->setItemText(2, QCoreApplication::translate("MainWindow", "Exclude", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxGraphDisplayMode->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Chose which labels will be plotted on the graph.</p><p>- Auto - all labels as they go,</p><p>- Custom - labels defined by the user.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelParsingRules->setText(QCoreApplication::translate("MainWindow", "Plot only:", nullptr));
        lineEditCustomParsingRules->setPlaceholderText(QCoreApplication::translate("MainWindow", "label1 || label2 ...", nullptr));
        checkBoxAutoRescaleY->setText(QCoreApplication::translate("MainWindow", "Scale Y", nullptr));
#if QT_CONFIG(shortcut)
        checkBoxAutoRescaleY->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        checkBoxEnableTracer->setText(QCoreApplication::translate("MainWindow", "Tracer:", nullptr));
#if QT_CONFIG(shortcut)
        checkBoxEnableTracer->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        spinBoxScrollingTimeRange->setSuffix(QCoreApplication::translate("MainWindow", " [s]", nullptr));
        spinBoxScrollingTimeRange->setPrefix(QCoreApplication::translate("MainWindow", "View last ", nullptr));
        checkBoxAutoTrack->setText(QCoreApplication::translate("MainWindow", "Scroll X", nullptr));
#if QT_CONFIG(shortcut)
        checkBoxAutoTrack->setShortcut(QCoreApplication::translate("MainWindow", "Alt+X", nullptr));
#endif // QT_CONFIG(shortcut)
        comboBoxTracerStyle->setItemText(0, QCoreApplication::translate("MainWindow", "Crosshair", nullptr));
        comboBoxTracerStyle->setItemText(1, QCoreApplication::translate("MainWindow", "Circle", nullptr));

        checkBoxShowLegend->setText(QCoreApplication::translate("MainWindow", "Legend", nullptr));
        pushButtonEnablePlot->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonEnablePlot->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonClearAll->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        pushButtonClearGraphs->setText(QCoreApplication::translate("MainWindow", "Clear plot", nullptr));
        toolButtonAdvancedGraphMenu->setText(QCoreApplication::translate("MainWindow", "Parser data", nullptr));
#if QT_CONFIG(whatsthis)
        spinBoxRemoveOldLabels->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Sets the missing samples threshold value. If processed string doesnt contain new data for the already present graph &lt;n&gt; times in a row it is then this graph will be automatically deleted. This is useful when switching between diffrent steaming data sets or removing garbage data.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        spinBoxRemoveOldLabels->setSuffix(QString());
        spinBoxRemoveOldLabels->setPrefix(QCoreApplication::translate("MainWindow", "Max missing: ", nullptr));
        spinBoxMaxTimeRange->setSuffix(QCoreApplication::translate("MainWindow", " [s]", nullptr));
        spinBoxMaxTimeRange->setPrefix(QCoreApplication::translate("MainWindow", "Keep last ", nullptr));
        spinBoxMaxGraphs->setSuffix(QCoreApplication::translate("MainWindow", " graphs", nullptr));
        spinBoxMaxGraphs->setPrefix(QCoreApplication::translate("MainWindow", "Max ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "3D View", nullptr));
        pushButtonSetSelectedToGraph->setText(QCoreApplication::translate("MainWindow", "Apply selected to plot", nullptr));
        checkBoxTableAutoResize->setText(QCoreApplication::translate("MainWindow", "Auto-resize", nullptr));
        pushButtonClearTable->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        tabWidgetTableView->setTabText(tabWidgetTableView->indexOf(tabWidgetTableViewPage1), QCoreApplication::translate("MainWindow", "Labels", nullptr));
        checkBoxAutoSizeColumnsLogTable->setText(QCoreApplication::translate("MainWindow", "Auto-size", nullptr));
        pushButtonEnableTableLog->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Max rows:", nullptr));
        pushButtonClearLogTable->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        checkBoxScrollLogEnableSorting->setText(QCoreApplication::translate("MainWindow", "Enable sort", nullptr));
        checkBoxAutoScrollLogTable->setText(QCoreApplication::translate("MainWindow", "Auto-scroll", nullptr));
        pushButtonExportLogTableToCSV->setText(QCoreApplication::translate("MainWindow", "Export table to .csv...", nullptr));
        tabWidgetTableView->setTabText(tabWidgetTableView->indexOf(tabWidgetTableViewPage2), QCoreApplication::translate("MainWindow", "Samples", nullptr));
        toolButtonHideTable->setText(QCoreApplication::translate("MainWindow", "Hide", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("MainWindow", "Control section:", nullptr));
#if QT_CONFIG(whatsthis)
        pushButtonSerialConnect->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Enable/disable serial communication</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonSerialConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonSerialConnect->setShortcut(QCoreApplication::translate("MainWindow", "Alt+N", nullptr));
#endif // QT_CONFIG(shortcut)
        comboBoxStopBits->setItemText(0, QCoreApplication::translate("MainWindow", "OneStop", nullptr));
        comboBoxStopBits->setItemText(1, QCoreApplication::translate("MainWindow", "OneAndHalfStop", nullptr));
        comboBoxStopBits->setItemText(2, QCoreApplication::translate("MainWindow", "TwoStop", nullptr));

#if QT_CONFIG(whatsthis)
        checkBoxDTR->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>&quot;Data Terminal Ready&quot; - required by some devices such as Arduino Due for proper UART initialisation.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBoxDTR->setText(QCoreApplication::translate("MainWindow", "DTR", nullptr));
        comboBoxSerialReadMode->setItemText(0, QCoreApplication::translate("MainWindow", "canReadLine | readLine", nullptr));
        comboBoxSerialReadMode->setItemText(1, QCoreApplication::translate("MainWindow", "canReadLine | readAll", nullptr));
        comboBoxSerialReadMode->setItemText(2, QCoreApplication::translate("MainWindow", "bytesAvailable | readLine", nullptr));
        comboBoxSerialReadMode->setItemText(3, QCoreApplication::translate("MainWindow", "bytesAvailable | readAll", nullptr));

        comboBoxFlowControl->setItemText(0, QCoreApplication::translate("MainWindow", "NoFlowControl", nullptr));
        comboBoxFlowControl->setItemText(1, QCoreApplication::translate("MainWindow", "HardwareControl", nullptr));
        comboBoxFlowControl->setItemText(2, QCoreApplication::translate("MainWindow", " SoftwareControl", nullptr));

        labelFlowControl->setText(QCoreApplication::translate("MainWindow", "Flow Control:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Baudrate:", nullptr));
        labelParity->setText(QCoreApplication::translate("MainWindow", "Parity:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Device:", nullptr));
        labelStopBits->setText(QCoreApplication::translate("MainWindow", "Stop bits:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Read mode:", nullptr));
#if QT_CONFIG(tooltip)
        comboBoxBaudRates->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>This list contains baud rates supported by current hardware.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBoxParity->setItemText(0, QCoreApplication::translate("MainWindow", "NoParity", nullptr));
        comboBoxParity->setItemText(1, QCoreApplication::translate("MainWindow", "EvenParity", nullptr));
        comboBoxParity->setItemText(2, QCoreApplication::translate("MainWindow", "OddParity", nullptr));
        comboBoxParity->setItemText(3, QCoreApplication::translate("MainWindow", "SpaceParity", nullptr));
        comboBoxParity->setItemText(4, QCoreApplication::translate("MainWindow", "MarkParity", nullptr));

        comboBoxDataBits->setItemText(0, QCoreApplication::translate("MainWindow", "Data5", nullptr));
        comboBoxDataBits->setItemText(1, QCoreApplication::translate("MainWindow", "Data6", nullptr));
        comboBoxDataBits->setItemText(2, QCoreApplication::translate("MainWindow", "Data7", nullptr));
        comboBoxDataBits->setItemText(3, QCoreApplication::translate("MainWindow", "Data8", nullptr));

        labelDataBits->setText(QCoreApplication::translate("MainWindow", "Data bits:", nullptr));
#if QT_CONFIG(whatsthis)
        pushButtonRefresh->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Refresh availible COM ports list</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonRefresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
#if QT_CONFIG(whatsthis)
        checkBoxAutoRefresh->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Automatically refresh the availible COM ports list every 500 ms.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        checkBoxAutoRefresh->setText(QCoreApplication::translate("MainWindow", "Auto update", nullptr));
        radioButtonDeviceUpdate->setText(QString());
        tabWidgetControlSection->setTabText(tabWidgetControlSection->indexOf(tabSerial), QCoreApplication::translate("MainWindow", "Serial COM", nullptr));
        pushButtonUDPConnect->setText(QCoreApplication::translate("MainWindow", "Open Connection", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Target IP:", nullptr));
        comboBoxUDPSendMode->setItemText(0, QCoreApplication::translate("MainWindow", "Broadcast", nullptr));
        comboBoxUDPSendMode->setItemText(1, QCoreApplication::translate("MainWindow", "LocalHost", nullptr));
        comboBoxUDPSendMode->setItemText(2, QCoreApplication::translate("MainWindow", "SpecialAddress", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Send to:", nullptr));
        comboBoxUDPReceiveMode->setItemText(0, QCoreApplication::translate("MainWindow", "Any", nullptr));
        comboBoxUDPReceiveMode->setItemText(1, QCoreApplication::translate("MainWindow", "LocalHost", nullptr));
        comboBoxUDPReceiveMode->setItemText(2, QCoreApplication::translate("MainWindow", "SpecialAddress", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Receive from:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Receive Port:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Target Port:", nullptr));
        spinBoxUDPTargetPort->setSuffix(QString());
        tabWidgetControlSection->setTabText(tabWidgetControlSection->indexOf(tabWiFi), QCoreApplication::translate("MainWindow", "Network UDP", nullptr));
        checkBoxAppendDate->setText(QCoreApplication::translate("MainWindow", "Append Date", nullptr));
        checkBoxSimplifyLog->setText(QCoreApplication::translate("MainWindow", "Simplify Data", nullptr));
        checkBoxTruncateFileOnSave->setText(QCoreApplication::translate("MainWindow", "Truncate", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "From:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "File info:", nullptr));
        timeEditMaxParsingTime->setDisplayFormat(QCoreApplication::translate("MainWindow", "HH:mm:ss", nullptr));
        lineEditLoadFilePath->setPlaceholderText(QCoreApplication::translate("MainWindow", "Load file...", nullptr));
        checkBoxAppendLoadedTextToLog->setText(QCoreApplication::translate("MainWindow", "Print text", nullptr));
        pushButtonLoadFile->setText(QCoreApplication::translate("MainWindow", "Load File", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "To:", nullptr));
        pushButtonLoadPath->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Path", nullptr));
        lineEditFileInfo->setPlaceholderText(QCoreApplication::translate("MainWindow", "Info...", nullptr));
        timeEditMinParsingTime->setDisplayFormat(QCoreApplication::translate("MainWindow", "HH:mm:ss", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Filename:", nullptr));
        lineEditSaveLogPath->setPlaceholderText(QCoreApplication::translate("MainWindow", "Save logs at...", nullptr));
        pushButtonLogPath->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Save path:", nullptr));
        pushButtonSetDefaultLogPath->setText(QCoreApplication::translate("MainWindow", "Default Path", nullptr));
        pushButtonAddDateTime->setText(QCoreApplication::translate("MainWindow", "<- Add DateTime", nullptr));
        lineEditSaveFileName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Name template...", nullptr));
        checkBoxAutoLogging->setText(QCoreApplication::translate("MainWindow", "Auto-Log", nullptr));
        comboBoxLogFormat->setItemText(0, QCoreApplication::translate("MainWindow", ".csv", nullptr));
        comboBoxLogFormat->setItemText(1, QCoreApplication::translate("MainWindow", ".txt", nullptr));

#if QT_CONFIG(whatsthis)
        comboBoxLogFormat->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Pick log format</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_21->setText(QCoreApplication::translate("MainWindow", "File format:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Text format", nullptr));
        comboBoxLoggingMode->setItemText(0, QCoreApplication::translate("MainWindow", "Raw message", nullptr));
        comboBoxLoggingMode->setItemText(1, QCoreApplication::translate("MainWindow", "Parsed data", nullptr));

        pushButtonLogging->setText(QCoreApplication::translate("MainWindow", "Enable Logging", nullptr));
        tabWidgetControlSection->setTabText(tabWidgetControlSection->indexOf(tabLogs), QCoreApplication::translate("MainWindow", "File storage", nullptr));
#if QT_CONFIG(whatsthis)
        tabRAM->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Parser Memory - stores parsed data in RAM, which can be loaded back if needed. By default, app uses it each time user changes the plot rules to prevent data loss i.e. if a a varaible is removed form plot, its recorded data can be brought back form memory without losing all the measurnments.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_17->setText(QCoreApplication::translate("MainWindow", "Load mode", nullptr));
        comboBoxRAMLoadMode->setItemText(0, QCoreApplication::translate("MainWindow", "Load Data Only", nullptr));
        comboBoxRAMLoadMode->setItemText(1, QCoreApplication::translate("MainWindow", "Load Data & Text", nullptr));

        pushButtonLoadRAMBuffer->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Save mode:", nullptr));
        comboBoxRAMSaveMode->setItemText(0, QCoreApplication::translate("MainWindow", "Save Data Only", nullptr));
        comboBoxRAMSaveMode->setItemText(1, QCoreApplication::translate("MainWindow", "Save Data & Text", nullptr));

        pushButtonSaveParserMemory->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        checkBoxRAMClearChart->setText(QCoreApplication::translate("MainWindow", "Clear Chart on load", nullptr));
        checkBoxClearRAMOnReset->setText(QCoreApplication::translate("MainWindow", "Clear on reset", nullptr));
        pushButtonRAMClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        checkBoxAutoSaveBuffer->setText(QCoreApplication::translate("MainWindow", "Autosave", nullptr));
        tabWidgetControlSection->setTabText(tabWidgetControlSection->indexOf(tabRAM), QCoreApplication::translate("MainWindow", "Parser memory", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuSave->setTitle(QCoreApplication::translate("MainWindow", "Save...", nullptr));
        menuSave_Graph_As->setTitle(QCoreApplication::translate("MainWindow", "Save Graph As...", nullptr));
        menuPrint->setTitle(QCoreApplication::translate("MainWindow", "Print...", nullptr));
        menuExport->setTitle(QCoreApplication::translate("MainWindow", "Export...", nullptr));
        menuParser_data->setTitle(QCoreApplication::translate("MainWindow", "Parser data...", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuFull_text_view->setTitle(QCoreApplication::translate("MainWindow", "Split View", nullptr));
        menuChange_visualisation->setTitle(QCoreApplication::translate("MainWindow", "Visualisation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
