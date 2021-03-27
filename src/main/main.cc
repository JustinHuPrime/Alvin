// Copyright 2021 Justin Hu
//
// This file is part of ALVIN.
//
// ALVIN is free software: you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the Free Software
// Foundation, either version 3 of the License, or (at your option) any later
// version.
//
// ALVIN is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// ALVIN. If not see <https://www.gnu.org/licenses/>.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include <iostream>

int main(int argc, char **argv) {
  std::cout << "ALVIN version 0.1.0\n";
  std::cout << "Copyright 2021 Justin Hu\n";
  std::cout << "This is free software; see the source for copying conditions. There is NO\n";
  std::cout << "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n";
 
  while (true) {
    std::string line;
    std::cout << "> ";
    std::getline(std::cin, line);
  }
}