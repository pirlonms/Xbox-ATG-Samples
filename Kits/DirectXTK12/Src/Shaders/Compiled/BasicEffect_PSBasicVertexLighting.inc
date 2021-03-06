#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// COLOR                    1   xyzw        1     NONE   float   xyzw
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[14], immediateIndexed
dcl_input_ps linear v0.xyzw
dcl_input_ps linear v1.xyzw
dcl_output o0.xyzw
dcl_temps 2
mad r0.xyz, v1.xyzx, v0.wwww, v0.xyzx
mad r1.xyz, cb0[13].xyzx, v0.wwww, -r0.xyzx
mad o0.xyz, v1.wwww, r1.xyzx, r0.xyzx
mov o0.w, v0.w
ret 
// Approximately 0 instruction slots used
#endif

const BYTE BasicEffect_PSBasicVertexLighting[] =
{
     68,  88,  66,  67,  31,  92, 
     30,   4, 201, 166,  30,   4, 
     49, 191, 200, 228,   6, 176, 
    146, 104,   1,   0,   0,   0, 
     24,   2,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    120,   0,   0,   0, 172,   0, 
      0,   0, 136,   1,   0,   0, 
     73,  83,  71,  78,  64,   0, 
      0,   0,   2,   0,   0,   0, 
      8,   0,   0,   0,  56,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,  15,   0,   0,  56,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
     15,  15,   0,   0,  67,  79, 
     76,  79,  82,   0, 171, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     69,  88, 212,   0,   0,   0, 
     80,   0,   0,   0,  53,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     14,   0,   0,   0,  98,  16, 
      0,   3, 242,  16,  16,   0, 
      0,   0,   0,   0,  98,  16, 
      0,   3, 242,  16,  16,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   2,   0,   0,   0, 
     50,   0,   0,   9, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  18,  16,   0,   1,   0, 
      0,   0, 246,  31,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  11, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  13,   0,   0,   0, 
    246,  31,  16,   0,   0,   0, 
      0,   0,  70,   2,  16, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,  50,   0,   0,   9, 
    114,  32,  16,   0,   0,   0, 
      0,   0, 246,  31,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    130,  32,  16,   0,   0,   0, 
      0,   0,  58,  16,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1,  82,  84,  83,  48, 
    136,   0,   0,   0,   1,   0, 
      0,   0,   2,   0,   0,   0, 
     24,   0,   0,   0,   1,   0, 
      0,   0,  84,   0,   0,   0, 
     29,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     48,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
     76,   0,   0,   0,   1,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      0,   0,   0,   0,  85,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     16,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    127, 127,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0
};
