/*
 * This file is part of the PXView project.
 * PXView is based onPXView.
 * PXView is based on PulseView.
 *
 * Copyright (C) 2023 DreamSourceLab <support@dreamsourcelab.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef _UI_FN_H
#define _UI_FN_H

#include <QFont>

class QToolBar;
class QWidget;

namespace ui
{
    void set_toolbar_font(QToolBar *bar, QFont font);

    void set_form_font(QWidget *wid, QFont font);

} // namespace ui

#endif