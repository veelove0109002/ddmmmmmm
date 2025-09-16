#ifndef _DRM_APERTURE_H_
#define _DRM_APERTURE_H_

#include <linux/version.h>

/* 
 * Compatibility header for drm_aperture.h
 * For older kernels that don't have aperture management
 */

struct drm_device;
struct pci_dev;

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5, 15, 0)
/* Include the real header if available */
#include_next <drm/drm_aperture.h>
#else
/* Provide stub implementations for older kernels */

/**
 * drm_aperture_remove_conflicting_pci_framebuffers - remove conflicting PCI framebuffers
 * @pdev: PCI device
 * @name: requesting driver name
 *
 * This function removes conflicting framebuffers for PCI devices.
 * For older kernels, we provide a stub implementation.
 */
static inline int drm_aperture_remove_conflicting_pci_framebuffers(struct pci_dev *pdev,
								   const char *name)
{
	/* For older kernels, just return success */
	return 0;
}

/**
 * drm_aperture_remove_conflicting_framebuffers - remove conflicting framebuffers
 * @base: framebuffer base address
 * @size: framebuffer size
 * @primary: whether this is a primary framebuffer
 * @name: requesting driver name
 *
 * This function removes conflicting framebuffers.
 * For older kernels, we provide a stub implementation.
 */
static inline int drm_aperture_remove_conflicting_framebuffers(resource_size_t base,
							       resource_size_t size,
							       bool primary,
							       const char *name)
{
	/* For older kernels, just return success */
	return 0;
}

#endif /* LINUX_VERSION_CODE >= KERNEL_VERSION(5, 15, 0) */

#endif /* _DRM_APERTURE_H_ */