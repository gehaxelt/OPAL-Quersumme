

#ifndef AQuersumme_included
#define AQuersumme_included

#define __AQuersumme_Aquersumme __AQuersumme_1
#define _AQuersumme_Aquersumme _AQuersumme_1
extern OBJ __AQuersumme_Aquersumme;
extern OBJ _AQuersumme_Aquersumme(OBJ);

#define __AQuersumme_ARekQuersumme __AQuersumme_2
#define _AQuersumme_ARekQuersumme _AQuersumme_2
extern OBJ __AQuersumme_ARekQuersumme;
extern OBJ _AQuersumme_ARekQuersumme(OBJ,OBJ);

#ifndef AQuersumme_Aquersumme
#define AQuersumme_Aquersumme(x1,x2) {x2=_AQuersumme_Aquersumme(x1);}
#endif

#ifndef AQuersumme_ARekQuersumme
#define AQuersumme_ARekQuersumme(x1,x2,x3) {x3=_AQuersumme_ARekQuersumme(x1,x2);}
#endif

#ifndef AQuersumme_Aquersumme_L3
#define AQuersumme_Aquersumme_L3(x1,x3) {x3=_AQuersumme_Aquersumme_L3(x1);}
#endif

#ifndef AQuersumme_ARekQuersumme_L4
#define AQuersumme_ARekQuersumme_L4(x1,x2,x9) {x9=_AQuersumme_ARekQuersumme_L4(x1,x2);}
#endif

#endif
