/*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * @file
 * PU21 filter implementation
 *
 * @see https://github.com/gfxdisp/pu21
 */

AVFILTER_DEFINE_CLASS(PU21);

typedef struct FilterContext {
    consat AVClass *class;
} FilterContext;

static av_cold int init(AVFilterContext *ctx){}

static av_cold void  uninit(AVFilterContext *ctx){}

static const AVOption filter_options[] = {}

static int query_formats(AVFilterContext *ctx){}

static int config_props(AVFilterLink *inlink){}

static int filter_frame(AVFilterLink *inlink, AVFrame *in){}

static const AVFilterPad filter_inputs[] = {
    {
        .name         = "default",
        .type         = AVMEDIA_TYPE_VIDEO,
        .config_props = config_props,
        .filter_frame = filter_frame,
    },
};

const AVFilter ff_vf_pu21 = {
    .name          = "PU21",
    .description   = ("An implementation of the PU21 transform."),
    .priv_size     = sizeof(FilterContext),
    .init          = init,
    .uninit        = uninit,
    FILTER_INPUTS(filter_inputs),
    FILTER_OUTPUTS(ff_video_default_filterpad),
    FILTER_QUERY_FUNC(query_formats),
    .priv_class    = &PU21_class,
};
