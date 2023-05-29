#version 330 core

flat in int v_keep;
in vec2 v_texcoord;

uniform sampler2D u_image;
uniform vec2 u_imageSize;

layout (location = 0) out vec4 o_fragColor;

void main()
{
    if(v_keep != 0)
    {
        vec2 coord = vec2(v_texcoord.x/u_imageSize.x, v_texcoord.y/u_imageSize.y);
        
        o_fragColor = texture(u_image, coord);
    }
    else
    {
        discard;
    }
}
