#version 330 core

in vec2 vary_texcoord;

uniform sampler2D u_image;

layout (location = 0) out vec4 o_fragColor;

void main()
{
    vec4 color = texture(u_image, vary_texcoord);

    o_fragColor = vec4(color.rgb, 1);
}
