#include <linux/version.h>
#include <drm/display/drm_dsc.h>
#include <drm/display/drm_dsc_helper.h>

// Test compilation of drm_dsc_config structure
void test_function(void) {
    struct drm_dsc_config cfg;
    cfg.dsc_version_major = 1;
    cfg.dsc_version_minor = 2;
    cfg.bits_per_component = 8;
}