/* Copyright (C) 2015 Cotton Seed
   
   This file is part of arachne-pnr.  Arachne-pnr is free software;
   you can redistribute it and/or modify it under the terms of the GNU
   General Public License version 2 as published by the Free Software
   Foundation.
   
   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>. */

#ifndef PNR_PCF_HH
#define PNR_PCF_HH

#include <map>
#include <string>

class Design;

class Constraints
{
public:
  hashmap<std::string, std::string> net_pin;
  
public:
  Constraints() {}
  Constraints(const hashmap<std::string, std::string> &np)
    : net_pin(np)
  {}
};

void read_pcf(const std::string &filename,
	      Design *d,
	      Constraints &constraints);

#endif
