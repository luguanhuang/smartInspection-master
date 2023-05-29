#version 330 core

uniform vec3 u_color;

layout (location = 0) out vec4 o_fragColor;

void main()
{
    o_fragColor = vec4(u_color, 1);
}
