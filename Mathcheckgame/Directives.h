#ifndef DirectivesH
#define DirectivesH

#include <cassert>
#define REALLY
#ifdef  REALLY
#define BESTAETIGEN Mathcheck::prova 
#define ASSERT assert
#else
#define BESTAETIGEN Mathcheck::macht_nichts
#define ASSERT Mathcheck::macht_nichts
#endif

#endif
