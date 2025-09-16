#ifndef _DRM_GEM_H_
#define _DRM_GEM_H_

#include <linux/version.h>

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5, 4, 0)
/* Include the real header if available */
#include_next <drm/drm_gem.h>
#else
/* Provide compatibility for older kernels */
#include <drm/drmP.h>
#endif

#endif /* _DRM_GEM_H_ */