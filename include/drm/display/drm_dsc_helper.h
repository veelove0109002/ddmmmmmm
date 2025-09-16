#include <linux/version.h>

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5, 15, 0)
#include_next <drm/display/drm_dsc_helper.h>
#else
/* For older kernels, include the legacy drm_dsc.h if available */
#ifdef CONFIG_DRM_DSC
#include <drm/drm_dsc.h>
#endif
/* Include our DSC definitions for backport */
#include <drm/display/drm_dsc.h>
#endif

#ifndef _BACKPORT_DRM_DISPLAY_DRM_DSC_HELPER_H
#define _BACKPORT_DRM_DISPLAY_DRM_DSC_HELPER_H

/* Ensure DSC structures are defined */
#ifndef _DRM_DSC_H_
#include <drm/display/drm_dsc.h>
#endif

#if LINUX_VERSION_CODE < KERNEL_VERSION(6, 11, 0)
struct drm_printer;
/* Only declare if not already defined in system headers */
#ifndef drm_dsc_dump_config
void drm_dsc_dump_config(struct drm_printer *p, int indent, const struct drm_dsc_config *cfg);
#endif
#endif

#endif