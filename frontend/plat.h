#ifndef __PLAT_H__
#define __PLAT_H__

void plat_init(void);
void plat_finish(void);
#if defined(MIYOO)
void plat_pre_finish(void);
#endif
void plat_minimize(void);
void *plat_prepare_screenshot(int *w, int *h, int *bpp);

// indirectly called from GPU plugin
void  plat_gvideo_open(int is_pal);
void *plat_gvideo_set_mode(int *w, int *h, int *bpp);
void *plat_gvideo_flip(void);
void  plat_gvideo_close(void);

#endif /* __PLAT_H__ */
