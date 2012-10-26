

#line 1 "Quersumme.impl"
#include "BUILTIN.h"
extern OBJ __ANat_5;
extern OBJ __ANat_60;
extern OBJ __ANat_61;
extern OBJ __ANat_81;
extern OBJ __ANatConv_1;
extern OBJ __ADenotation_11;
extern OBJ __ADenotation_12;
extern OBJ __ADenotation_15;
extern OBJ _AQuersumme_1(OBJ);OBJ __AQuersumme_1; /* quersumme */
extern OBJ _AQuersumme_2(OBJ,OBJ);OBJ __AQuersumme_2; /* RekQuersumme */
extern OBJ _AQuersumme_3(OBJ);OBJ __AQuersumme_3; /* quersumme'3 */
extern OBJ _AQuersumme_4(OBJ,OBJ);OBJ __AQuersumme_4; /* RekQuersumme'4 */

extern OBJ _AQuersumme_1(OBJ x1) /* quersumme */
{OBJ r;
 CPCLS(__AQuersumme_3,1);
#line 3
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__AQuersumme_3,1))(__AQuersumme_3,x1);
#line 3
 return r;}

extern OBJ _AQuersumme_2(OBJ x1,OBJ x2) /* RekQuersumme */
{OBJ r;
 CPCLS(__AQuersumme_4,1);
#line 9
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AQuersumme_4,2))(__AQuersumme_4,x1,x2);
#line 9
 return r;}

extern OBJ _AQuersumme_3(OBJ x1) /* quersumme'3 */
{OBJ r;
 CPCLS(__AQuersumme_2,1);
 COPY(__ANat_5,1);
 CPCLS(__ANatConv_1,1);
#line 3
 {OBJ x2;
#line 4
  x2=(*(OBJ(*)(OBJ,OBJ))METHOD(__ANatConv_1,1))(__ANatConv_1,x1);
#line 4
  r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AQuersumme_2,2))(__AQuersumme_2,x2,__ANat_5);}
#line 4
 return r;}

extern OBJ _AQuersumme_4(OBJ x1,OBJ x2) /* RekQuersumme'4 */
{OBJ r;
 COPY(__ANat_5,1);
 CPCLS(__ANat_81,1);
 CPCLS(__ADenotation_15,1);
 CPPRD(x1,1);
#line 9
 {OBJ x3;OBJ x4;
#line 10
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__ADenotation_15,1))(__ADenotation_15,x1);
#line 10
  x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_81,2))(__ANat_81,x3,__ANat_5);
#line 10
  if(ISTGPRM(x4,1)){
#line 10
   CPPRD(x1,1);
#line 10
   CPCLS(__AQuersumme_2,1);
#line 10
   COPY(__ANat_5,4);
#line 10
   CPCLS(__ANat_60,1);
#line 10
   CPCLS(__ANat_61,1);
#line 10
   CPCLS(__ADenotation_11,1);
#line 10
   CPCLS(__ADenotation_12,1);
#line 10
   {OBJ x5;OBJ x6;OBJ x7;OBJ x8;
#line 11
    x5=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_11,3))(__ADenotation_11,x1,__ANat_5,__ANat_5);
#line 11
    x6=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ADenotation_12,3))(__ADenotation_12,x1,__ANat_5,__ANat_5);
#line 11
    x7=(*(OBJ(*)(OBJ,OBJ))METHOD(__ANat_60,1))(__ANat_60,x5);
#line 11
    x8=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AQuersumme_2,2))(__AQuersumme_2,x6,x2);
#line 11
    r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_61,2))(__ANat_61,x7,x8);}
#line 11
  }else{
#line 11
   FRPRD(x1,1);
#line 11
   r=x2;}}
#line 11
 return r;}

static OBJ _mt_1_0_1(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 return r;}
static OBJ _mt_1_0_1_l(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 COPY(r,1);LZYCLS(t,r);
 return r;}

static OBJ _mt_2_0_2(OBJ t,OBJ t1,OBJ t2) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ))ENTRY(t))(t1,t2);
 return r;}

init_AQuersumme()
{
 static int visited=0; if(visited) return; visited=1;
 init_ANat();
 init_ANatConv();
 init_ADenotation();
 init_AChar();
 init_AInt();
 init_AReal();
 CLS(2,_AQuersumme_4,__AQuersumme_4);
 CLS(1,_AQuersumme_3,__AQuersumme_3);
 CLS(2,_AQuersumme_2,__AQuersumme_2);
 CLS(1,_AQuersumme_1,__AQuersumme_1);
 MTH(1,0,1,_mt_1_0_1);LZYMTH(1,0,1,_mt_1_0_1_l);
 MTH(2,0,2,_mt_2_0_2);LZYMTH(2,0,2,_mt_2_0_2);}

