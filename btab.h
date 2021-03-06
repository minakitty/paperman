/*
License: GPL-2
  An electronic filing cabinet: scan, print, stack, arrange
 Copyright (C) 2009 Simon Glass, chch-kiwi@users.sourceforge.net
 .
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 .
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 .
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA

X-Comment: On Debian GNU/Linux systems, the complete text of the GNU General
 Public License can be found in the /usr/share/common-licenses/GPL file.
*/

static byte btab [] =
   {
   0x8,
   0x0,
   0x35,
   0x0,
   0x6,
   0x0,
   0x7,
   0x0,
   0x4,
   0x0,
   0x7,
   0x0,
   0x4,
   0x0,
   0x8,
   0x0,
   0x4,
   0x0,
   0x0B,
   0x0,
   0x4,
   0x0,
   0x0C,
   0x0,
   0x4,
   0x0,
   0x0E,
   0x0,
   0x4,
   0x0,
   0x0F,
   0x0,
   0x5,
   0x0,
   0x13,
   0x0,
   0x5,
   0x0,
   0x14,
   0x0,
   0x5,
   0x0,
   0x7,
   0x0,
   0x5,
   0x0,
   0x8,
   0x0,
   0x6,
   0x0,
   0x8,
   0x0,
   0x6,
   0x0,
   0x3,
   0x0,
   0x6,
   0x0,
   0x34,
   0x0,
   0x6,
   0x0,
   0x35,
   0x0,
   0x6,
   0x0,
   0x2A,
   0x0,
   0x6,
   0x0,
   0x2B,
   0x0,
   0x7,
   0x0,
   0x27,
   0x0,
   0x7,
   0x0,
   0x0C,
   0x0,
   0x7,
   0x0,
   0x8,
   0x0,
   0x7,
   0x0,
   0x17,
   0x0,
   0x7,
   0x0,
   0x3,
   0x0,
   0x7,
   0x0,
   0x4,
   0x0,
   0x7,
   0x0,
   0x28,
   0x0,
   0x7,
   0x0,
   0x2B,
   0x0,
   0x7,
   0x0,
   0x13,
   0x0,
   0x7,
   0x0,
   0x24,
   0x0,
   0x7,
   0x0,
   0x18,
   0x0,
   0x8,
   0x0,
   0x2,
   0x0,
   0x8,
   0x0,
   0x3,
   0x0,
   0x8,
   0x0,
   0x1A,
   0x0,
   0x8,
   0x0,
   0x1B,
   0x0,
   0x8,
   0x0,
   0x12,
   0x0,
   0x8,
   0x0,
   0x13,
   0x0,
   0x8,
   0x0,
   0x14,
   0x0,
   0x8,
   0x0,
   0x15,
   0x0,
   0x8,
   0x0,
   0x16,
   0x0,
   0x8,
   0x0,
   0x17,
   0x0,
   0x8,
   0x0,
   0x28,
   0x0,
   0x8,
   0x0,
   0x29,
   0x0,
   0x8,
   0x0,
   0x2A,
   0x0,
   0x8,
   0x0,
   0x2B,
   0x0,
   0x8,
   0x0,
   0x2C,
   0x0,
   0x8,
   0x0,
   0x2D,
   0x0,
   0x8,
   0x0,
   0x4,
   0x0,
   0x8,
   0x0,
   0x5,
   0x0,
   0x8,
   0x0,
   0x0A,
   0x0,
   0x8,
   0x0,
   0x0B,
   0x0,
   0x8,
   0x0,
   0x52,
   0x0,
   0x8,
   0x0,
   0x53,
   0x0,
   0x8,
   0x0,
   0x54,
   0x0,
   0x8,
   0x0,
   0x55,
   0x0,
   0x8,
   0x0,
   0x24,
   0x0,
   0x8,
   0x0,
   0x25,
   0x0,
   0x8,
   0x0,
   0x58,
   0x0,
   0x8,
   0x0,
   0x59,
   0x0,
   0x8,
   0x0,
   0x5A,
   0x0,
   0x8,
   0x0,
   0x5B,
   0x0,
   0x8,
   0x0,
   0x4A,
   0x0,
   0x8,
   0x0,
   0x4B,
   0x0,
   0x8,
   0x0,
   0x32,
   0x0,
   0x8,
   0x0,
   0x33,
   0x0,
   0x8,
   0x0,
   0x34,
   0x0,
   0x0A,
   0x0,
   0x37,
   0x0,
   0x3,
   0x0,
   0x2,
   0x0,
   0x2,
   0x0,
   0x3,
   0x0,
   0x2,
   0x0,
   0x2,
   0x0,
   0x3,
   0x0,
   0x3,
   0x0,
   0x4,
   0x0,
   0x3,
   0x0,
   0x4,
   0x0,
   0x2,
   0x0,
   0x5,
   0x0,
   0x3,
   0x0,
   0x6,
   0x0,
   0x5,
   0x0,
   0x6,
   0x0,
   0x4,
   0x0,
   0x7,
   0x0,
   0x4,
   0x0,
   0x7,
   0x0,
   0x5,
   0x0,
   0x7,
   0x0,
   0x7,
   0x0,
   0x8,
   0x0,
   0x4,
   0x0,
   0x8,
   0x0,
   0x7,
   0x0,
   0x9,
   0x0,
   0x18,
   0x0,
   0x0A,
   0x0,
   0x17,
   0x0,
   0x0A,
   0x0,
   0x18,
   0x0,
   0x0A,
   0x0,
   0x8,
   0x0,
   0x0B,
   0x0,
   0x67,
   0x0,
   0x0B,
   0x0,
   0x68,
   0x0,
   0x0B,
   0x0,
   0x6C,
   0x0,
   0x0B,
   0x0,
   0x37,
   0x0,
   0x0B,
   0x0,
   0x28,
   0x0,
   0x0B,
   0x0,
   0x17,
   0x0,
   0x0B,
   0x0,
   0x18,
   0x0,
   0x0C,
   0x0,
   0x0CA,
   0x0,
   0x0C,
   0x0,
   0x0CB,
   0x0,
   0x0C,
   0x0,
   0x0CC,
   0x0,
   0x0C,
   0x0,
   0x0CD,
   0x0,
   0x0C,
   0x0,
   0x68,
   0x0,
   0x0C,
   0x0,
   0x69,
   0x0,
   0x0C,
   0x0,
   0x6A,
   0x0,
   0x0C,
   0x0,
   0x6B,
   0x0,
   0x0C,
   0x0,
   0x0D2,
   0x0,
   0x0C,
   0x0,
   0x0D3,
   0x0,
   0x0C,
   0x0,
   0x0D4,
   0x0,
   0x0C,
   0x0,
   0x0D5,
   0x0,
   0x0C,
   0x0,
   0x0D6,
   0x0,
   0x0C,
   0x0,
   0x0D7,
   0x0,
   0x0C,
   0x0,
   0x6C,
   0x0,
   0x0C,
   0x0,
   0x6D,
   0x0,
   0x0C,
   0x0,
   0x0DA,
   0x0,
   0x0C,
   0x0,
   0x0DB,
   0x0,
   0x0C,
   0x0,
   0x54,
   0x0,
   0x0C,
   0x0,
   0x55,
   0x0,
   0x0C,
   0x0,
   0x56,
   0x0,
   0x0C,
   0x0,
   0x57,
   0x0,
   0x0C,
   0x0,
   0x64,
   0x0,
   0x0C,
   0x0,
   0x65,
   0x0,
   0x0C,
   0x0,
   0x52,
   0x0,
   0x0C,
   0x0,
   0x53,
   0x0,
   0x0C,
   0x0,
   0x24,
   0x0,
   0x0C,
   0x0,
   0x37,
   0x0,
   0x0C,
   0x0,
   0x38,
   0x0,
   0x0C,
   0x0,
   0x27,
   0x0,
   0x0C,
   0x0,
   0x28,
   0x0,
   0x0C,
   0x0,
   0x58,
   0x0,
   0x0C,
   0x0,
   0x59,
   0x0,
   0x0C,
   0x0,
   0x2B,
   0x0,
   0x0C,
   0x0,
   0x2C,
   0x0,
   0x0C,
   0x0,
   0x5A,
   0x0,
   0x0C,
   0x0,
   0x66,
   0x0,
   0x0C,
   0x0,
   0x67,
   0x0,
   0x5,
   0x0,
   0x1B,
   0x0,
   0x5,
   0x0,
   0x12,
   0x0,
   0x6,
   0x0,
   0x17,
   0x0,
   0x7,
   0x0,
   0x37,
   0x0,
   0x8,
   0x0,
   0x36,
   0x0,
   0x8,
   0x0,
   0x37,
   0x0,
   0x8,
   0x0,
   0x64,
   0x0,
   0x8,
   0x0,
   0x65,
   0x0,
   0x8,
   0x0,
   0x68,
   0x0,
   0x8,
   0x0,
   0x67,
   0x0,
   0x9,
   0x0,
   0x0CC,
   0x0,
   0x9,
   0x0,
   0x0CD,
   0x0,
   0x9,
   0x0,
   0x0D2,
   0x0,
   0x9,
   0x0,
   0x0D3,
   0x0,
   0x9,
   0x0,
   0x0D4,
   0x0,
   0x9,
   0x0,
   0x0D5,
   0x0,
   0x9,
   0x0,
   0x0D6,
   0x0,
   0x9,
   0x0,
   0x0D7,
   0x0,
   0x9,
   0x0,
   0x0D8,
   0x0,
   0x9,
   0x0,
   0x0D9,
   0x0,
   0x9,
   0x0,
   0x0DA,
   0x0,
   0x9,
   0x0,
   0x0DB,
   0x0,
   0x9,
   0x0,
   0x98,
   0x0,
   0x9,
   0x0,
   0x99,
   0x0,
   0x9,
   0x0,
   0x9A,
   0x0,
   0x6,
   0x0,
   0x18,
   0x0,
   0x9,
   0x0,
   0x9B,
   0x0,
   0x0B,
   0x0,
   0x8,
   0x0,
   0x0B,
   0x0,
   0x0C,
   0x0,
   0x0B,
   0x0,
   0x0D,
   0x0,
   0x0C,
   0x0,
   0x12,
   0x0,
   0x0C,
   0x0,
   0x13,
   0x0,
   0x0C,
   0x0,
   0x14,
   0x0,
   0x0C,
   0x0,
   0x15,
   0x0,
   0x0C,
   0x0,
   0x16,
   0x0,
   0x0C,
   0x0,
   0x17,
   0x0,
   0x0C,
   0x0,
   0x1C,
   0x0,
   0x0C,
   0x0,
   0x1D,
   0x0,
   0x0C,
   0x0,
   0x1E,
   0x0,
   0x0C,
   0x0,
   0x1F,
   0x0,
   0x0A,
   0x0,
   0x0F,
   0x0,
   0x0C,
   0x0,
   0x0C8,
   0x0,
   0x0C,
   0x0,
   0x0C9,
   0x0,
   0x0C,
   0x0,
   0x5B,
   0x0,
   0x0C,
   0x0,
   0x33,
   0x0,
   0x0C,
   0x0,
   0x34,
   0x0,
   0x0C,
   0x0,
   0x35,
   0x0,
   0x0D,
   0x0,
   0x6C,
   0x0,
   0x0D,
   0x0,
   0x6D,
   0x0,
   0x0D,
   0x0,
   0x4A,
   0x0,
   0x0D,
   0x0,
   0x4B,
   0x0,
   0x0D,
   0x0,
   0x4C,
   0x0,
   0x0D,
   0x0,
   0x4D,
   0x0,
   0x0D,
   0x0,
   0x72,
   0x0,
   0x0D,
   0x0,
   0x73,
   0x0,
   0x0D,
   0x0,
   0x74,
   0x0,
   0x0D,
   0x0,
   0x75,
   0x0,
   0x0D,
   0x0,
   0x76,
   0x0,
   0x0D,
   0x0,
   0x77,
   0x0,
   0x0D,
   0x0,
   0x52,
   0x0,
   0x0D,
   0x0,
   0x53,
   0x0,
   0x0D,
   0x0,
   0x54,
   0x0,
   0x0D,
   0x0,
   0x55,
   0x0,
   0x0D,
   0x0,
   0x5A,
   0x0,
   0x0D,
   0x0,
   0x5B,
   0x0,
   0x0D,
   0x0,
   0x64,
   0x0,
   0x0D,
   0x0,
   0x65,
   0x0,
   0x0B,
   0x0,
   0x8,
   0x0,
   0x0B,
   0x0,
   0x0C,
   0x0,
   0x0B,
   0x0,
   0x0D,
   0x0,
   0x0C,
   0x0,
   0x12,
   0x0,
   0x0C,
   0x0,
   0x13,
   0x0,
   0x0C,
   0x0,
   0x14,
   0x0,
   0x0C,
   0x0,
   0x15,
   0x0,
   0x0C,
   0x0,
   0x16,
   0x0,
   0x0C,
   0x0,
   0x17,
   0x0,
   0x0C,
   0x0,
   0x1C,
   0x0,
   0x0C,
   0x0,
   0x1D,
   0x0,
   0x0C,
   0x0,
   0x1E,
   0x0,
   0x0C,
   0x0,
   0x1F,
   0x0,
   0x7,
   0x0,
   0x2,
   0x0,
   0x6,
   0x0,
   0x2,
   0x0,
   0x3,
   0x0,
   0x2,
   0x0,
   0x1,
   0x0,
   0x1,
   0x0,
   0x3,
   0x0,
   0x3,
   0x0,
   0x6,
   0x0,
   0x3,
   0x0,
   0x7,
   0x0,
   0x3,
   0x0,
   0x3,
   0x0,
   0x1,
   0x0,
   0x4,
   0x0,
   0x1,
   0x0,
   0x1,
   0x2,
   0x0,
   0x0,
   0x1,
   0x0,
   0x0,
   0x0
   };

