enum
{
    Vertex_Shader_NORMAL,
    Vertex_Shader_BLEND,
    Vertex_Shader_FINAL,
    Vertex_Shader_TEXTURE_NORMAL,
    Vertex_Shader_GAUSSIANBLUR,
    Total_Vertex_Shader_Number,
};
enum
{
    Fragment_Shader_NORMAL,
    Fragment_Shader_BLEND,
    Fragment_Shader_FINAL,
    Fragment_Shader_TEXTURE_NORMAL,
    Fragment_Shader_GAUSSIANBLUR,
    Total_Fragment_Shader_Number,
};
enum
{
    Shader_Program_NORMAL,
    Shader_Program_BLEND,
    Shader_Program_FINAL,
    Shader_Program_TEXTURE_NORMAL,
    Shader_Program_GAUSSIANBLUR,
    Total_Shader_Program_Number,
};
enum
{
    ATTRIBUTES_POSITION,
    ATTRIBUTES_POSITION2,
    ATTRIBUTES_POSITION3,
    ATTRIBUTES_UV,
    ATTRIBUTES_UV2,
    ATTRIBUTES_COLOR,
    Total_Attributes_Number,
};
enum
{
    UNIFORMS_PROJECTION,
    UNIFORMS_TRANSLATE,
    UNIFORMS_TIME,
    UNIFORMS_COORD,
    UNIFORMS_FADE,
    Total_Uniforms_Number,
};

// Texture
enum
{
    TEXTURES_FIRST,
    TEXTURES_SECOND,
    TEXTURES_THIRD,
    TEXTURES_PAPER,
    Total_Texture_Number,
};

// Sound
enum  {
    SOUNDS_BACK,
Total_Sound_Number,
};