#ifndef VECTOR2_H_
# define VECTOR2_H_

typedef struct			Vector2
{
  int				x;
  int				y;
}				Vector2;

static const Vector2			Vector2_Zero = {0, 0};
static const Vector2			Vector2_Up = {0, 1};
static const Vector2			Vector2_Down = {0, -1};
static const Vector2			Vector2_Left = {-1, 0};
static const Vector2			Vector2_Right = {1, 0};

#endif
