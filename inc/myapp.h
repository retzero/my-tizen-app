#ifndef __myapp_H__
#define __myapp_H__

#include <app.h>
#include <Elementary.h>
#include <system_settings.h>
#include <efl_extension.h>
#include <dlog.h>

#ifdef  LOG_TAG
#undef  LOG_TAG
#endif
#define LOG_TAG "myapp"

#if !defined(PACKAGE)
#define PACKAGE "org.example.myapp"
#endif

#define EDJ_FILE "edje/myapp.edj"
#define GRP_MAIN "main"


#endif /* __myapp_H__ */
