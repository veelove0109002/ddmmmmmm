#ifndef _DRM_DSC_H_
#define _DRM_DSC_H_

#include <linux/types.h>

/* DSC Rate Control Range Parameters */
struct drm_dsc_rc_range_parameters {
	u8 range_min_qp;
	u8 range_max_qp;
	s8 range_bpg_offset;
};

/* DSC Configuration */
struct drm_dsc_config {
	u8 dsc_version_major;
	u8 dsc_version_minor;
	u8 bits_per_component;
	bool block_pred_enable;
	u8 line_buf_depth;
	bool simple_422;
	bool vbr_enable;
	bool native_422;
	bool native_420;
	u16 pic_height;
	u16 pic_width;
	u8 slice_height;
	u8 slice_width;
	u16 slice_chunk_size;
	u16 initial_xmit_delay;
	u16 initial_dec_delay;
	u16 initial_scale_value;
	u16 scale_increment_interval;
	u16 scale_decrement_interval;
	u16 first_line_bpg_offset;
	u16 nfl_bpg_offset;
	u16 slice_bpg_offset;
	u16 initial_offset;
	u16 final_offset;
	u8 flatness_min_qp;
	u8 flatness_max_qp;
	u16 rc_model_size;
	u8 rc_edge_factor;
	u8 rc_quant_incr_limit0;
	u8 rc_quant_incr_limit1;
	u8 rc_tgt_offset_high;
	u8 rc_tgt_offset_low;
	u16 rc_buf_thresh[14];
	struct drm_dsc_rc_range_parameters rc_range_params[15];
	u16 rc_bits;
	u8 mux_word_size;
	u16 slice_count;
	u16 bits_per_pixel;
	bool convert_rgb;
	u16 second_line_bpg_offset;
	u16 nsl_bpg_offset;
	u16 second_line_offset_adj;
};

#endif /* _DRM_DSC_H_ */