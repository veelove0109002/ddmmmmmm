#ifndef _DRM_CACHE_H_
#define _DRM_CACHE_H_

#include <linux/version.h>

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5, 4, 0)
/* Include the real header if available */
#include_next <drm/drm_cache.h>
#else
/* Provide compatibility for older kernels */
#include <drm/drmP.h>

/* Stub implementations for cache functions */
static inline void drm_clflush_pages(struct page **pages, unsigned long num_pages)
{
	/* Stub implementation */
}

static inline void drm_clflush_sg(struct sg_table *st)
{
	/* Stub implementation */
}

static inline void drm_clflush_virt_range(void *addr, unsigned long length)
{
	/* Stub implementation */
}

#endif

#endif /* _DRM_CACHE_H_ */