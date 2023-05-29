#version 330 core

layout(location = 0) in vec3 i_position;

uniform mat4 u_mvpMatrix;

void main() 
{
    vec4 pos = u_mvpMatrix * vec4(i_position, 1);
    gl_Position = pos;
}
