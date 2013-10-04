#ifndef RENDERCONTEXT_HPP
#define RENDERCONTEXT_HPP

namespace rgl {
class Scene;
class Viewpoint;
class GLFont;
} // namespace rgl

#include "rglmath.h"
#include "opengl.hpp"

namespace rgl {

class RenderContext
{
public:
  RenderContext()
  : scene(0)
  , rect(0,0,0,0)
  , viewpoint(0)
  , font(0)
  , time(0.0)
  , lastTime(0.0)
  , deltaTime(0.0)
  , Zrow()
  , Wrow()
  , gl2psActive(0)
  , NULLActive(0)
  { }
  Scene* scene;
  Rect2   rect;
  // RectSize size;
  Viewpoint* viewpoint;
  GLFont* font;
  double time;
  double lastTime;
  double deltaTime;
  float getDistance(const Vertex& v) const;
  GLdouble modelview[16];
  GLdouble projection[16];
  GLint viewport[4];
  Vec4 Zrow;
  Vec4 Wrow;
  int gl2psActive;
  bool NULLActive;
};

} // namespace rgl

#endif // RENDERCONTEXT_HPP
