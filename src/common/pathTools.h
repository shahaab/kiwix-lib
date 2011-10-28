/*
 * Copyright 2011 Emmanuel Engelhart <kelson@kiwix.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU  General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef KIWIX_PATHTOOLS_H
#define KIWIX_PATHTOOLS_H

#include <string.h>
#include <string>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

using namespace std;

bool isRelativePath(const string &path);
string computeAbsolutePath(const string libraryPath, const string relativePath);
string removeLastPathElement(const string path, const bool removePreSeparator = false, 
			     const bool removePostSeparator = false);
unsigned int getFileSize(const string &path);
string getFileSizeAsString(const string &path);

#endif