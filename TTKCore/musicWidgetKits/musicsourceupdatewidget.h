#ifndef MUSICSOURCEUPDATEWIDGET_H
#define MUSICSOURCEUPDATEWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicabstractmovedialog.h"
#include "musicabstractmovewidget.h"

#define DD_TYPE_EXE     ".exe"
#define CSDN_URL        "S1Nqc1N0ZmI3c3pHeWE2Z1BhMTE4WlFVMjNBVG5qRjZkZ0tVRmV2L0VJeVF0bUlTOGE1Zmp3Z0xpZWRpM25lOA=="

namespace Ui {
class MusicSourceUpdateWidget;
}


/*! @brief The class of the application upgrade notify widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicSourceUpdateNotifyWidget : public MusicAbstractMoveSingleWidget
{
    Q_OBJECT
public:
    explicit MusicSourceUpdateNotifyWidget(QWidget *parent = 0);
    /*!
     * Object contsructor.
     */
    ~MusicSourceUpdateNotifyWidget();

    static QString getClassName();
    /*!
     * Get class object name.
     */

    void start();
    /*!
     * Start update.
     */

public Q_SLOTS:
    void updateSourceClicked();
    /*!
     * Update source clicked.
     */
    void downLoadFinished(const QVariant &data);
    /*!
     * Download data from kuwo net finished.
     */

protected:
    QLabel *m_textLabel;

};


/*! @brief The class of the application upgrade widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicSourceUpdateWidget : public MusicAbstractMoveDialog
{
    Q_OBJECT
public:
    explicit MusicSourceUpdateWidget(QWidget *parent = 0);
    /*!
     * Object contsructor.
     */
    virtual ~MusicSourceUpdateWidget();

    static QString getClassName();
    /*!
     * Get class object name.
     */

    void start();
    /*!
     * Start update.
     */

public Q_SLOTS:
    void upgradeButtonClicked();
    /*!
     * Upgrade button clicked.
     */
    void upgradeFailedClicked();
    /*!
     * Upgrade failed clicked.
     */
    void downLoadFinished(const QVariant &data);
    /*!
     * Download data from kuwo net finished.
     */
    void downloadSpeedLabelChanged(const QString &speed, qint64 timeLeft);
    /*!
     * Update download speed label.
     */
    void downloadProgressChanged(float percent, const QString &total);
    /*!
     * Update download percent\ total size progress.
     */
    void downloadProgressFinished();
    /*!
     * Update download progress finished.
     */
    virtual int exec();
    /*!
     * Override exec function.
     */

protected:
    Ui::MusicSourceUpdateWidget *m_ui;
    QString m_newVersionStr;

};

#endif // MUSICSOURCEUPDATEWIDGET_H
