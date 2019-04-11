/*_############################################################################
  _## 
  _##  test_app.cpp  
  _##
  _##  SNMP++ v3.3
  _##  -----------------------------------------------
  _##  Copyright (c) 2001-2013 Jochen Katz, Frank Fock
  _##
  _##  This software is based on SNMP++2.6 from Hewlett Packard:
  _##  
  _##    Copyright (c) 1996
  _##    Hewlett-Packard Company
  _##  
  _##  ATTENTION: USE OF THIS SOFTWARE IS SUBJECT TO THE FOLLOWING TERMS.
  _##  Permission to use, copy, modify, distribute and/or sell this software 
  _##  and/or its documentation is hereby granted without fee. User agrees 
  _##  to display the above copyright notice and this license notice in all 
  _##  copies of the software and any documentation of the software. User 
  _##  agrees to assume all liability for the use of the software; 
  _##  Hewlett-Packard and Jochen Katz make no representations about the 
  _##  suitability of this software for any purpose. It is provided 
  _##  "AS-IS" without warranty of any kind, either express or implied. User 
  _##  hereby grants a royalty-free license to any and all derivatives based
  _##  upon this software code base. 
  _##  
  _##########################################################################*/
char test_app_cpp_version[]="@(#) SNMP++ $Id$";
#include <libsnmp.h>
#include<iostream>

#include <snmp_pp.h>

#ifdef WIN32
#define strcasecmp _stricmp
#endif

#ifdef SNMP_PP_NAMESPACE
using namespace Snmp_pp;
#endif

// default request oids
#define NUM_SYS_VBS	6
#define sysDescr	"1.3.6.1.2.1.1.1.0"
#define sysObjectID	"1.3.6.1.2.1.1.2.0"
#define sysUpTime	"1.3.6.1.2.1.1.3.0"
#define sysContact	"1.3.6.1.2.1.1.4.0"
#define sysName		"1.3.6.1.2.1.1.5.0"
#define sysLocation	"1.3.6.1.2.1.1.6.0"
//#define sysServices	"1.3.6.1.2.1.1.7.0" // not all agents support this...

// default notification oid
#define coldStart	"1.3.6.1.6.3.1.1.4.3.0.1"

int main(int argc, char **argv)
{
    std::cout<<"Hello WORLD!";

    int status;
    char *req_str      = (char*) "get";
    //  char *dflt_req_oid = (char*) sysDescr;
    char *dflt_trp_oid = (char*) coldStart;
    char *genAddrStr   = (char*) "127.0.0.1" ;		  // localhost
    char *oid_str      = (char*) NULL;

    if (argc > 1) genAddrStr = argv[1];
    if (argc > 2) req_str    = argv[2];
    if (argc > 3) oid_str    = argv[3];

    Snmp::socket_startup();  // Initialize socket subsystem

    IpAddress ipAddr(genAddrStr);

    return(0);
}
