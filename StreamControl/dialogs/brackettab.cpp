/**********************************************************************************

Copyright (c) 2015, Antony Clarke
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**********************************************************************************/

#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>

#include "dialogs/brackettab.h"

BracketTab::BracketTab(QMap<QString, QString>& settings, QWidget *parent) :
    QWidget(parent), settings(settings)
{
    QLabel *challongeUsernameLabel = new QLabel(tr("User Name:"));
    challongeUsernameEdit = new QLineEdit();

    QLabel *challongeApiKeyLabel = new QLabel(tr("API Key:"));
    challongeApiKeyEdit = new QLineEdit();
    challongeApiKeyEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

    QLabel *challongeOrganizationLabel = new QLabel(tr("Organization:"));
    challongeOrganizationEdit = new QLineEdit();

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(challongeUsernameLabel);
    mainLayout->addWidget(challongeUsernameEdit);
    mainLayout->addWidget(challongeApiKeyLabel);
    mainLayout->addWidget(challongeApiKeyEdit);
    mainLayout->addWidget(challongeOrganizationLabel);
    mainLayout->addWidget(challongeOrganizationEdit);
    mainLayout->addStretch(1);
    setLayout(mainLayout);
}
