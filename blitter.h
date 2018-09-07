/* File generated with Shader Minifier 1.1.4
 * http://www.ctrl-alt-test.fr
 */
#ifndef BLITTER_H_
# define BLITTER_H_

const char *blitter_glsl =
 "uniform sampler2D T;"
 "vec2 r=vec2(640.,720.),o=vec2(1280.,720.);"
 "void main()"
 "{"
   "vec2 m=(gl_FragCoord.xy+.5)/o;"
   "gl_FragColor=sqrt(texture2D(T,m-vec2(0.,.5)/r)*(.5+.5*mod(gl_FragCoord.x,2.)));"
 "}";

#endif // BLITTER_H_
