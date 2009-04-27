/*  Copyright (C) 2009 Stewart Adam
 *  This file is part of fwbackups.
 
 * fwbackups is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * fwbackups is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 
 * You should have received a copy of the GNU General Public License
 * along with fwbackups; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef FWBACKUPS_H
#define FWBACKUPS_H

#include "ui_exportSets.h"
#include "ui_fwbackups.h"
#include "ui_prefs.h"

class fwbackupsApp: public QMainWindow, private Ui::mainWindow
{
  Q_OBJECT
    
public:
  fwbackupsApp(QMainWindow *parent = 0);
  void clear_toolbar_status();

public slots:
  void cleanup();
  void on_actionAbout_activated();
  void on_actionQuit_activated();
  void on_newSetButton_clicked();
  void switch_overview();
  void switch_backupsets();
  void show_one_time_backup();
  void show_restore();
  void switch_operations();
  void switch_logviewer();
  void show_preferences();
  void on_saveLogButton_clicked();
  void on_clearLogButton_clicked();
  void on_refreshLogButton_clicked();
};

class prefsWindow: public QDialog, private Ui::Preferences
{
  Q_OBJECT
    
public:
  prefsWindow(QDialog *parent = 0);
  
public slots:
  void on_closeButton_clicked();
};

#endif