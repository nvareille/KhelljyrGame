#ifndef TRANSFORM_H_
# define TRANSFORM_H_

typedef struct			Transform
{
  Vector2			position;
  struct GameObject		*parent;
}				Transform;

#endif
