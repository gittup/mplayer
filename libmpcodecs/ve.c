#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "config.h"
#include "mp_msg.h"

#include "img_format.h"
#include "mp_image.h"
#include "vf.h"

extern vf_info_t ve_info_lavc;
extern vf_info_t ve_info_vfw;
extern vf_info_t ve_info_raw;
extern vf_info_t ve_info_libdv;
extern vf_info_t ve_info_xvid;
extern vf_info_t ve_info_qtvideo;
extern vf_info_t ve_info_nuv;
extern vf_info_t ve_info_x264;

/* Please do not add any new encoders here. If you want to implement a new
 * encoder, add it to libavcodec, except for wrappers around external
 * libraries and encoders requiring binary support. */

static vf_info_t* encoder_list[]={
#ifdef CONFIG_LIBAVCODEC
    &ve_info_lavc,
#endif
#ifdef CONFIG_WIN32DLL
    &ve_info_vfw,
#ifdef CONFIG_QTX_CODECS_WIN32
    &ve_info_qtvideo,
#endif
#endif
#ifdef CONFIG_LIBDV095
    &ve_info_libdv,
#endif
    &ve_info_raw,
#ifdef CONFIG_XVID4
    &ve_info_xvid,
#endif
#ifdef CONFIG_LIBLZO
    &ve_info_nuv,
#endif
#ifdef CONFIG_X264
    &ve_info_x264,
#endif
    /* Please do not add any new encoders here. If you want to implement a new
     * encoder, add it to libavcodec, except for wrappers around external
     * libraries and encoders requiring binary support. */
    NULL
};

vf_instance_t* vf_open_encoder(vf_instance_t* next, const char *name, char *args){
    char* vf_args[] = { "_oldargs_", args, NULL };
    return vf_open_plugin(encoder_list,next,name,vf_args);
}

