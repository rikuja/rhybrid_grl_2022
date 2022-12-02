/** This file is part of Corsair simulation.
 *
 *  Copyright 2011-2013 Finnish Meteorological Institute
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "sep_base_class_wavelength_scaling.h"

using namespace std;

namespace sep {

   WavelengthScalingBaseClass::WavelengthScalingBaseClass() { 
      initialized = false;
   }
   
   WavelengthScalingBaseClass::~WavelengthScalingBaseClass() { 
      WavelengthScalingBaseClass::finalize();
   }
   
   bool WavelengthScalingBaseClass::finalize() {
      initialized = false;
      return true;
   }
   
   bool WavelengthScalingBaseClass::initialize(Simulation& sim,SimulationClasses& simClasses,
					       ConfigReader& cr,int propagationDirection) {
      return true;
   }
   
   bool WavelengthScalingBaseClass::isInitialized() const {
      return initialized;
   }
   
} // namespace sep

