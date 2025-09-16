/* i915-sriov-dkms configuration */

#ifndef _I915_SRIOV_CONFIG_H_
#define _I915_SRIOV_CONFIG_H_

/* DRM I915 configuration options */
#define CONFIG_DRM_I915_FENCE_TIMEOUT 10000

/* Other I915 configuration options that might be needed */
#define CONFIG_DRM_I915_GVT 1
#define CONFIG_DRM_I915_CAPTURE_ERROR 1
#define CONFIG_DRM_I915_SELFTEST 0
#define CONFIG_DRM_I915_PXP 1
#define CONFIG_DRM_I915_DP_TUNNEL 1
#define CONFIG_DRM_I915_USERPTR 1
#define CONFIG_DRM_I915_SW_FENCE_DEBUG_OBJECTS 0
#define CONFIG_DRM_I915_SW_FENCE_CHECK_DAG 0
#define CONFIG_DRM_I915_FENCE_TIMEOUT_DEFAULT 10000

/* Hardware monitoring support */
#ifdef CONFIG_HWMON
#define CONFIG_DRM_I915_HWMON 1
#endif

/* Debug options */
#ifdef CONFIG_DEBUG_FS
#define CONFIG_DRM_I915_DEBUG 1
#endif

/* Performance monitoring */
#ifdef CONFIG_PERF_EVENTS
#define CONFIG_DRM_I915_PMU 1
#endif

/* Compatibility options */
#ifdef CONFIG_COMPAT
#define CONFIG_DRM_I915_COMPAT 1
#endif

/* Framebuffer emulation */
#ifdef CONFIG_DRM_FBDEV_EMULATION
#define CONFIG_DRM_I915_FBDEV 1
#endif

/* ACPI support */
#ifdef CONFIG_ACPI
#define CONFIG_DRM_I915_ACPI 1
#endif

#endif /* _I915_SRIOV_CONFIG_H_ */