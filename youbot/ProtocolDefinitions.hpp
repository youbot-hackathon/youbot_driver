/****************************************************************
 *
 * Copyright (c) 2011
 * All rights reserved.
 *
 * Hochschule Bonn-Rhein-Sieg
 * University of Applied Sciences
 * Computer Science Department
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * Author:
 * Jan Paulus, Nico Hochgeschwender, Michael Reckhaus, Azamat Shakhimardanov
 * Supervised by:
 * Gerhard K. Kraetzschmar
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * This sofware is published under a dual-license: GNU Lesser General Public
 * License LGPL 2.1 and BSD license. The dual-license implies that users of this
 * code may choose which terms they prefer.
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Hochschule Bonn-Rhein-Sieg nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License LGPL as
 * published by the Free Software Foundation, either version 2.1 of the
 * License, or (at your option) any later version or the BSD license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License LGPL and the BSD license for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License LGPL and BSD license along with this program.
 *
 ****************************************************************/

#ifndef PROTOCOLDEFINITIONS_HPP
#define	PROTOCOLDEFINITIONS_HPP


//Opcodes of all TMCL commands that can be used in direct mode
typedef enum TMCLCommandNumber {
  ROR = 1,  //Rotate right
  ROL = 2,  //Rotate left
  MST = 3,  //Motor stop
  MVP = 4,  //Move to position
  SAP = 5,  //Set axis parameter
  GAP = 6,  //Get axis parameter
  STAP = 7, //Store axis parameter into EEPROM
  RSAP = 8, //Restore axis parameter from EEPROM
  SGP = 9,  //Set global parameter
  GGP = 10, //Get global parameter
  STGP = 11, //Store global parameter into EEPROM
  RSGP = 12, //Restore global parameter from EEPROM
  RFS = 13,
  SIO = 14,
  GIO = 15,
  SCO = 30,
  GCO = 31,
  CCO = 32
} CommandNumber;


//Opcodes of TMCL control functions (to be used to run or abort a TMCL program in the module)
#define TMCL_APPL_STOP 128
#define TMCL_APPL_RUN 129
#define TMCL_APPL_RESET 131

//Options for MVP commandds
#define MVP_ABS 0
#define MVP_REL 1
#define MVP_COORD 2

//Options for RFS command
#define RFS_START 0
#define RFS_STOP 1
#define RFS_STATUS 2

//Result codes for GetResult
#define TMCL_RESULT_OK 0
#define TMCL_RESULT_NOT_READY 1
#define TMCL_RESULT_CHECKSUM_ERROR 2

enum YouBotJointControllerMode {
    MOTOR_STOP = 0,
    POSITION_CONTROL = 1,
    VELOCITY_CONTROL = 2,
    NO_MORE_ACTION = 3,
    SET_POSITION_TO_REFERENCE = 4
};

enum TMCLModuleAddress {
    DRIVE = 0,
    GRIPPER = 1
};

enum YouBotErrorFlags {
    OVER_CURRENT = 1,
    UNDER_VOLTAGE = 2,
    OVER_VOLTAGE = 4,
    OVER_TEMPERATURE = 8,
    HALTED = 16,
    HALL_SENSOR = 32,
    ENCODER = 64,
    MOTOR_WINDING = 128,
    CYCLE_TIME_VIOLATION = 256,
    INIT_SIN_COMM = 512,
    POSITION_MODE = 1024,
    POSITION_REACHED = 2048
};


enum YouBotMailboxStatusFlags {
    NO_ERROR = 100,
    INVALID_COMMAND = 2,
    WRONG_TYPE = 3,
    INVALID_VALUE = 4,
    CONFIGURATION_EEPROM_LOCKED = 5,
    COMMAND_NOT_AVAILABLE = 6
};


#endif	/* PROTOCOLDEFINITIONS_HPP */
