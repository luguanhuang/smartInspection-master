#version 330 core

layout(location = 0) in vec3 i_position;
layout(location = 1) in vec2 i_texcoord;

uniform mat4 u_mvpMatrix;

out vec2 vary_texcoord;

void main() 
{
    vec4 pos = u_mvpMatrix * vec4(i_position, 1);
    gl_Position = pos;

    vary_texcoord = i_texcoord;
}
