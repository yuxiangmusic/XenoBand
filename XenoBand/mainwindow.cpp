
#include <iostream>

#include <QDesktopServices>

#include "connectwindow.h"
#include "core.h"
#include "librarywindow.h"
#include "loop.h"
#include "mainwindow.h"
#include "midieditor.h"
#include "midireader.h"
#include "networkutil.h"
#include "pitchshifter.h"
#include "waveeditor.h"
#include "wavereader.h"
#include "wavewriter.h"
#include "timewidget.h"
#include "trackpreview.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    NetworkUtil::sendUsage("", "opened main window");
}

MainWindow::~MainWindow()
{
    delete ui;
}

// [YZ] functions
void MainWindow::on_actionNew_triggered()
{
    cerr << "Pi Pi Lu\n";
}

void MainWindow::on_actionMIDI_Reader_triggered()
{
    MIDIReader *reader = new MIDIReader;
    reader->show();
}

void MainWindow::on_actionMIDI_Writer_triggered()
{
    MIDIWriter *writer = new MIDIWriter;
    writer->show();
}

void MainWindow::on_actionMIDI_Editor_triggered()
{
    MIDIEditor *editor = new MIDIEditor;
    editor->show();
}

void MainWindow::on_actionWave_Reader_triggered()
{
    WaveReader *reader = new WaveReader;
    reader->show();
}

void MainWindow::on_actionWave_Writer_triggered()
{
    WaveWriter *writer = new WaveWriter;
    writer->show();
}

void MainWindow::on_actionWave_Editor_triggered()
{
    WaveEditor *editor = new WaveEditor;
    editor->show();
}

void MainWindow::on_actionTutorial_triggered()
{
    QDesktopServices::openUrl(QUrl("http://xenoband.com"));
}

void MainWindow::on_actionContact_triggered()
{
    QDesktopServices::openUrl(QUrl("http://xenoband.com"));
}

void MainWindow::on_synthesizerButton_clicked()
{
    Synthesizer *synthesizer = new Synthesizer;
    synthesizer->show();
}

void MainWindow::on_waveCreatorButton_clicked()
{
    WaveWriter *writer = new WaveWriter;
    writer->show();
}

void MainWindow::on_recorderButton_clicked()
{
    AudioRecorder *audioRecorder = new AudioRecorder;
    audioRecorder->show();
}

void MainWindow::on_pitchShifterButton_clicked()
{
    PitchShifter *pitchShifter = new PitchShifter;
    pitchShifter->show();
}

void MainWindow::on_waveEditorButton_clicked()
{
    WaveEditor *editor = new WaveEditor;
    editor->show();
}

void MainWindow::on_mappingButton_clicked()
{
    SoundMapping *soundmapping = new SoundMapping;
    soundmapping->show();
}

void MainWindow::on_keyboardButton_clicked()
{
    Keyboard *keyboard = new Keyboard;
    keyboard->show();
}

void MainWindow::on_loopButton_clicked()
{
    Loop *loop = new Loop;
    loop->show();
}

void MainWindow::on_samplesButton_clicked()
{
    QDesktopServices::openUrl(QUrl("http://xenoband.com"));
}

void MainWindow::on_editorButton_clicked()
{
    MIDIEditor *editor = new MIDIEditor;
    editor->show();
}

void MainWindow::on_localServerButton_clicked()
{
    ConnectWindow *connect = new ConnectWindow;
    connect->show();
}

void MainWindow::on_instantChatButton_clicked()
{
    InstantChat *instantChat = new InstantChat;
    instantChat->show();
}

void MainWindow::on_tutorialButton_clicked()
{
    QDesktopServices::openUrl(QUrl("http://xenoband.com"));
}


void MainWindow::closeEvent(QCloseEvent *)
{
    NetworkUtil::sendUsage("", "closed main window");
}
