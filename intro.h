/* File generated with Shader Minifier 1.1.4
 * http://www.ctrl-alt-test.fr
 */
#ifndef INTRO_H_
# define INTRO_H_

const char *intro_glsl =
 "uniform sampler2D T;"
 "uniform int s;"
 "float v=float(s)/88200.;"
 "vec2 z=vec2(640.,720.);"
 "const vec3 m=vec3(0.,.001,1.);"
 "const float i=3.14159;"
 "float x(float v)"
 "{"
   "return min(1.,max(0.,v));"
 "}"
 "float f(float v)"
 "{"
   "return fract(sin(v)*43758.5);"
 "}"
 "float n(vec2 k)"
 "{"
   "return f(dot(k,vec2(129.47,37.56)));"
 "}"
 "float t(vec2 v)"
 "{"
   "vec2 k=floor(v);"
   "v=fract(v);"
   "v*=v*(3.-2.*v);"
   "return mix(mix(n(k),n(k+m.zx),v.x),mix(n(k+m.xz),n(k+m.zz),v.x),v.y);"
 "}"
 "float d(vec2 v)"
 "{"
   "return.5*t(v)+.25*t(v*2.3)+.125*t(v*4.1);"
 "}"
 "float d(vec3 k,vec3 v)"
 "{"
   "return k=abs(k)-v,max(k.z,max(k.x,k.y));"
 "}"
 "float d(float k,float v,float m)"
 "{"
   "return max(max(k,v),(k+m+v)*sqrt(.5));"
 "}"
 "float f(vec3 k,vec3 v)"
 "{"
   "return k=abs(k)-v,d(d(k.x,k.z,1.),k.y,1.);"
 "}"
 "vec3 n(vec3 k,vec3 v)"
 "{"
   "return mod(k,v)-v*.5;"
 "}"
 "vec2 t(vec2 k,vec2 v)"
 "{"
   "return mod(k,v)-v*.5;"
 "}"
 "mat3 p(float v)"
 "{"
   "float k=sin(v),z=cos(v);"
   "return mat3(1.,0.,0.,0.,z,-k,0.,k,z);"
 "}"
 "mat3 r(float v)"
 "{"
   "float k=sin(v),z=cos(v);"
   "return mat3(z,0.,k,0.,1.,0,-k,0.,z);"
 "}"
 "mat3 c(float v)"
 "{"
   "float k=sin(v),z=cos(v);"
   "return mat3(z,k,0.,-k,z,0.,0.,0.,1.);"
 "}"
 "float y=v/128.,a=fract(y);"
 "int e;"
 "float l,k;"
 "mat3 g=c(.2),o=c(.3),u=c(.5);"
 "float w(vec3 m)"
 "{"
   "if(e<2)"
     "{"
       "l=m.y;"
       "k=-d(m,vec3(4.,3.,10.));"
       "float z=max(-k,d(vec3(m.xy-vec2(0.,3.),fract(m.z)-.5),vec3(10.,.3,.1)));"
       "k=max(k,d(m,vec3(5.1,3.1,10.1)));"
       "k=max(k,-d(m+vec3(1.5,1.,10.),vec3(2.,3.,1.)));"
       "k=min(k,z);"
     "}"
   "else"
     " if(e==2)"
       "{"
         "l=m.y;"
         "m.y-=4.;"
         "vec3 z=vec3(mod(m.x,9.)-4.5,m.yz);"
         "k=d(m,vec3(50.,8.,16.));"
         "k=max(k,-f(z,vec3(4.,3.,15.)));"
         "k=max(k,-f(z,vec3(4.,10.,7.)));"
         "k=max(k,-f(z-vec3(0.,0.,14.),vec3(10.,4.,5.)));"
         "k=min(k,d(z-vec3(0.,6.,-7.),vec3(1.2)));"
         "k=max(k,-d(z-vec3(0.,0.,-12.),vec3(3.,10.,3.)));"
         "k=max(k,-d(z-vec3(0.,0.,-12.),vec3(6.,4.,3.)));"
       "}"
     "else"
       " if(e==3)"
         "{"
           "l=m.y;"
           "k=min(m.x+4.,6.-m.y);"
           "vec3 z=m;"
           "z.z=mod(m.z,10.)-5.;"
           "float i=d(z,vec3(1.,10.,1.));"
           "z.x-=4.;"
           "z.y+=-1.5;"
           "float x=d(z,vec3(.5,10.,.5));"
           "k=min(k,x);"
           "k=min(k,d(m-vec3(5.,0.,0.),vec3(1.,1.,100.)));"
           "k=max(k,-min(i,6.4-m.y));"
           "k=max(k,m.x-6.);"
           "k=min(k,m.z+30.);"
           "l=max(l,m.x-6.);"
         "}"
       "else"
         " if(e==4)"
           "{"
             "l=m.y;"
             "k=m.z+30.;"
             "m.x=abs(m.x);"
             "k=min(k,10.-m.x);"
             "k=min(k,-m.y+24.8);"
             "k=max(k,-d(vec3(t(m.xz,vec2(2.,4.)),m.y-25.).xzy,vec3(.8,1.,1.6)));"
             "k=max(k,m.y-25.);"
             "float z=d(vec3(m.xy,mod(m.z,10.)-5.),vec3(100.,4.5,1.8));"
             "m.z+=20.;"
             "m.x-=30.;"
             "m*=g;"
             "k=min(k,d(m,vec3(20.)));"
             "m*=o;"
             "m.z+=7.;"
             "m.y-=10.;"
             "m.x-=5.;"
             "k=min(k,d(m,vec3(20.)));"
             "m*=u;"
             "m.z+=10.;"
             "m.y-=3.;"
             "m.x-=7.;"
             "k=min(k,d(m,vec3(20.)));"
             "k=max(k,-z);"
           "}"
         "else"
           "{"
             "l=m.y;"
             "l=min(l,d(m,vec3(.3,.1,30.)));"
             "k=-d(m,vec3(3.,4.,30.));"
             "k=max(k,d(m,vec3(4.,4.2,31.)));"
             "vec3 z=m;"
             "z.z=mod(m.z,10.)-5.;"
             "z.x-=3.;"
             "z.y+=-1.5;"
             "k=max(k,-d(z,vec3(2.,1.2,1.)));"
             "k=max(k,-d(vec3(m.x,m.y+2.-(v-512.-64.)/16.,mod(m.z,1.)-.5),vec3(20.,2.,.4)));"
           "}"
   "return min(l,k);"
 "}"
 "vec3 h(vec3 v)"
 "{"
   "return normalize(vec3(w(v+m.yxx)-w(v-m.yxx),w(v+m.xyx)-w(v-m.xyx),w(v+m.xxy)-w(v-m.xxy)));"
 "}"
 "float c(vec3 k,vec3 m,float v,float z,int y)"
 "{"
   "for(int i=0;i<y;++i)"
     "{"
       "float f=w(k+m*v);"
       "v+=f;"
       "if(f<.002*v||v>z)"
         "break;"
     "}"
   "return v;"
 "}"
 "vec3 b(vec2 v)"
 "{"
   "v*=4.;"
   "vec3 k=(.6+(.2+.2*smoothstep(.9,.99,sin(i*d(v))))*d(v*4.))*vec3(.753,.749,.733);"
   "return k;"
 "}"
 "vec3 C(vec2 v)"
 "{"
   "return mix(vec3(.467,.22,.1),vec3(.627,.35,.216),smoothstep(.2,.8,d(v*3.)));"
 "}"
 "vec2 C(vec3 k,vec3 v)"
 "{"
   "vec3 z=cross(v,m.zxx),f=cross(v,m.xxz),x,y;"
   "if(dot(z,z)>dot(f,f))"
     "x=z;"
   "else"
     " x=f;"
   "y=cross(v,x);"
   "return vec2(dot(k,y),dot(k,x)).xy;"
 "}"
 "void main()"
 "{"
   "vec2 m=gl_FragCoord.xy/z*2.-1.;"
   "m.x*=2.*z.x/z.y;"
   "e=1+int(floor(y));"
   "vec3 i,u,o;"
   "i=vec3(-.5+a,1.8,5.);"
   "mat3 g=p(0.);"
   "vec3 w=vec3(-2.,1.,-1.);"
   "float t=.15;"
   "if(e<2)"
     "i.y=1.,i.z=-3.+3.*fract(y);"
   "else"
     " if(e==2)"
       "i.z=16.,i.x=3.-6.*a,g=p(-.2);"
     "else"
       " if(e==3)"
         "w.z=-w.z;"
       "else"
         " if(e==4)"
           "w=vec3(1.,2.,1.),i=vec3(5.-6.*a,1.8,9.),g=r(-.3+.2*a)*p(-.3);"
         "else"
           " i.z-=a*10.,i.x=2.,i.y+=.1*abs(sin(a*60.)),g=r(-.3),t=mix(t,.6,step(576.,v));"
   "u=g*normalize(vec3(m,-2.));"
   "vec3 D=g*normalize(vec3(m+vec2(2.,1.)/z,-2.));"
   "w=normalize(w);"
   "float q=v;"
   "vec3 Z=vec3(0.);"
   "const int Y=16;"
   "for(int X=0;X<Y;++X)"
     "{"
       "vec3 W=i,V=mix(u,D,vec3(f(q),f(q+1.),f(q+2.))),U=vec3(0.),S=vec3(1.);"
       "for(int R=0;R<4;++R)"
         "{"
           "float Q=60.;"
           "int P=0;"
           "float O=min(Q,50.),M=c(W,V,0.,O,40);"
           "if(M<O)"
             "Q=M,P=2;"
           "vec3 L=vec3(0.),K=vec3(.75,.75,.73),J=vec3(0.,1.,0.);"
           "float I=.04;"
           "I=.9;"
           "if(P==0)"
             "L=vec3(2.)+vec3(30.,20.,10.)*pow(max(0.,dot(V,w)),10.),K=vec3(0.);"
           "else"
             "{"
               "W=W+V*Q;"
               "J=h(W);"
               "vec2 H=C(W,J);"
               "W+=J*.01;"
               "if(l<k)"
                 "{"
                   "float G=smoothstep(.45,.6,d(H/4.)+.5*x(-10.-W.z));"
                   "K=mix(K,vec3(.3,.44,.15)*(.3+.7*d(H*16.)),G);"
                   "float E=smoothstep(.4,.45,d(H/2.)*.85+.15*d(H*8.));"
                   "I=9.*E+.01;"
                 "}"
               "else"
                 "{"
                   "K=b(H);"
                   "vec2 G=floor(H/2.),E=H/2.-G;"
                   "float B=n(G);"
                   "K*=1.-.3*B-.4*step(.99,max(E.x,E.y));"
                   "float A=d(H/4.),j=smoothstep(.5,.7,A);"
                   "K=mix(K,vec3(.3,.44,.15)*(.3+.7*d(H*16.)),j);"
                 "}"
             "}"
           "U+=S*L;"
           "S*=K.xyz;"
           "if(all(lessThan(S,vec3(.003))))"
             "break;"
           "if(f(q+=V.x)<.03)"
             "V=w,I=.02;"
           "else"
             " V=reflect(V,J);"
           "V=normalize(mix(V,(vec3(f(q+=V.x),f(q+=V.y),f(q+=V.z))-.5)*2.,I));"
           "V*=sign(dot(J,V));"
         "}"
       "Z+=U;"
     "}"
   "gl_FragColor=vec4(Z/float(Y),t);"
 "}";

#endif // INTRO_H_
