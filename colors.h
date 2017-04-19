enum {
    SchemeNorm, SchemeSel, SchemeUrg, 
    black03_blue01, black03_blue02, black03_blue03, black03_purple02, black03_purple03, black03_purple01, black03_white03, black03_red01, black03_brown01, black03_white02, black03_brown02, black03_red03, black03_brown03, black03_red02, blue01_black03, blue02_black03, blue03_black03, purple02_black03, purple03_black03, purple01_black03, white03_black03, red01_black03, brown01_black03, white02_black03, brown02_black03, red03_black03, brown03_black03, red02_black03, 
};
static  const  char  black00[]   =  "#19171c";
static  const  char  black01[]   =  "#27262c";
static  const  char  black02[]   =  "#312f37";
static  const  char  black03[]   =  "#3d3b45";
static  const  char  blue01[]    =  "#5590c5";
static  const  char  blue02[]    =  "#7CAEDB";
static  const  char  blue03[]    =  "#AFD0EE";
static  const  char  purple02[]  =  "#B58EE4";
static  const  char  purple03[]  =  "#D8C1F4";
static  const  char  purple01[]  =  "#9665D0";
static  const  char  white03[]   =  "#cac9cc";
static  const  char  red01[]     =  "#EC4773";
static  const  char  brown01[]   =  "#d3a668";
static  const  char  white02[]   =  "#838288";
static  const  char  brown02[]   =  "#FBD6A3";
static  const  char  red03[]     =  "#F798B2";
static  const  char  brown03[]   =  "#FFE9CB";
static  const  char  red02[]     =  "#F26B8F";
static  const  char  *colors[][3]    =  {
    /*               fg        bg        border                 */
    [SchemeNorm] = { white02,  black03,  black03  },  /*  \x01  */
    [SchemeSel]  = { white03,  blue01,   black03  },  /*  \x02  */
    [SchemeUrg]  = { white03,  black03,  black03  },  /*  \x03  */
    /* Color Combos */
    [black03_blue01]    =  {  black03,   blue01,    blue01    },  /*  \x04  */
    [black03_blue02]    =  {  black03,   blue02,    blue02    },  /*  \x05  */
    [black03_blue03]    =  {  black03,   blue03,    blue03    },  /*  \x06  */
    [black03_purple02]  =  {  black03,   purple02,  purple02  },  /*  \x07  */
    [black03_purple03]  =  {  black03,   purple03,  purple03  },  /*  \x08  */
    [black03_purple01]  =  {  black03,   purple01,  purple01  },  /*  \x09  */
    [black03_white03]   =  {  black03,   white03,   white03   },  /*  \x0A  */
    [black03_red01]     =  {  black03,   red01,     red01     },  /*  \x0B  */
    [black03_brown01]   =  {  black03,   brown01,   brown01   },  /*  \x0C  */
    [black03_white02]   =  {  black03,   white02,   white02   },  /*  \x0D  */
    [black03_brown02]   =  {  black03,   brown02,   brown02   },  /*  \x0E  */
    [black03_red03]     =  {  black03,   red03,     red03     },  /*  \x0F  */
    [black03_brown03]   =  {  black03,   brown03,   brown03   },  /*  \x10  */
    [black03_red02]     =  {  black03,   red02,     red02     },  /*  \x11  */
    [blue01_black03]    =  {  blue01,    black03,   black03   },  /*  \x12  */
    [blue02_black03]    =  {  blue02,    black03,   black03   },  /*  \x13  */
    [blue03_black03]    =  {  blue03,    black03,   black03   },  /*  \x14  */
    [purple02_black03]  =  {  purple02,  black03,   black03   },  /*  \x15  */
    [purple03_black03]  =  {  purple03,  black03,   black03   },  /*  \x16  */
    [purple01_black03]  =  {  purple01,  black03,   black03   },  /*  \x17  */
    [white03_black03]   =  {  white03,   black03,   black03   },  /*  \x18  */
    [red01_black03]     =  {  red01,     black03,   black03   },  /*  \x19  */
    [brown01_black03]   =  {  brown01,   black03,   black03   },  /*  \x1A  */
    [white02_black03]   =  {  white02,   black03,   black03   },  /*  \x1B  */
    [brown02_black03]   =  {  brown02,   black03,   black03   },  /*  \x1C  */
    [red03_black03]     =  {  red03,     black03,   black03   },  /*  \x1D  */
    [brown03_black03]   =  {  brown03,   black03,   black03   },  /*  \x1E  */
    [red02_black03]     =  {  red02,     black03,   black03   },  /*  \x1F  */
};
