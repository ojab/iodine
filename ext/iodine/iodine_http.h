#ifndef H_IODINE_HTTP_H
#define H_IODINE_HTTP_H
/*
Copyright: Boaz segev, 2016-2018
License: MIT

Feel free to copy, use and enjoy according to the license provided.
*/
#include "iodine.h"

/* these three are used also by rb-rack-io.c */
extern VALUE IODINE_R_HIJACK;
extern VALUE IODINE_R_HIJACK_IO;
extern VALUE IODINE_R_HIJACK_CB;

void iodine_init_http(void);

#endif
