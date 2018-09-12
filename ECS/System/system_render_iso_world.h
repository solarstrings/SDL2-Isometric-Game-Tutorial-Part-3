#ifndef __RENDER_ISOMETRIC_SYSTEM_H__
#define __RENDER_ISOMETRIC_SYSTEM_H__

int systemRenderIsoMetricWorldInit(void *scene);
void systemRenderIsometricWorld();
void systemFreeRenderIsoWorldSystem();
void systemRenderIsometricWorldSortEntity(Uint32 entity);

#endif // __RENDER_ISOMETRIC_SYSTEM_H__

