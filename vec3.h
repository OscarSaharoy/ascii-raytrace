typedef struct vec3 {
	float x;
	float y;
	float z;
} vec3;

float dot(vec3, vec3 );
vec3 cross(vec3, vec3);
vec3 add(vec3, vec3);
vec3 add3(vec3, vec3, vec3);
vec3 addf(vec3, float);
vec3 sub(vec3, vec3);
vec3 subf(vec3, float);
vec3 scale(vec3, vec3);
vec3 scalef(vec3, float);
float length(vec3);
float length2(vec3);
float distance(vec3, vec3);
vec3 flat(vec3);
vec3 norm(vec3);
vec3 rotate_y(vec3, float);

typedef struct ray {
	vec3 o;
	vec3 d;
} ray;