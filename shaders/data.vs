#version 330 core

layout(location = 0) in vec3 i_position;

uniform mat4 u_mvpMatrix;

uniform vec3 u_selectLeftTop;
uniform vec3 u_selectRightBottom;

flat out int v_keep;
out vec2 v_texcoord;

void main() 
{
    v_texcoord = i_position.xy;

    vec4 pos = u_mvpMatrix * vec4(i_position.xzy, 1);
    gl_Position = pos;

    if(u_selectLeftTop.x <= i_position.x && i_position.x <= u_selectRightBottom.x &&
        u_selectLeftTop.z <= i_position.y && i_position.y <= u_selectRightBottom.z)
    {
        v_keep = 1;
    }
    else
    {
        v_keep = 0;
    }
}
