/*    alg.hpp
 *
 *    Detect changes in a video stream.
 *    Copyright 2001 by Jeroen Vreeken (pe1rxq@amsat.org)
 *    This software is distributed under the GNU public license version 2
 *    See also the file 'COPYING'.
 *
 */

#ifndef _INCLUDE_ALG_H
#define _INCLUDE_ALG_H

    struct ctx_coord;

    void alg_locate_center_size(struct ctx_images *, int width, int height, struct ctx_coord *);
    int alg_diff(struct ctx_cam *cam, unsigned char *);
    int alg_diff_standard(struct ctx_cam *cam, unsigned char *);
    int alg_lightswitch(struct ctx_cam *cam, int diffs);
    int alg_switchfilter(struct ctx_cam *cam, int, unsigned char *);
    void alg_noise_tune(struct ctx_cam *cam, unsigned char *);
    void alg_threshold_tune(struct ctx_cam *cam, int, int);
    int alg_despeckle(struct ctx_cam *cam, int);
    void alg_tune_smartmask(struct ctx_cam *cam);
    void alg_update_reference_frame(struct ctx_cam *cam, int);

#endif /* _INCLUDE_ALG_H */