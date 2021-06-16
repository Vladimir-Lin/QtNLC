#include <qtnlc.h>

N::JitInterpreter:: JitInterpreter(void)
{
}

N::JitInterpreter:: JitInterpreter(const JitInterpreter & jit)
{
  ME = jit ;
}

N::JitInterpreter::~JitInterpreter(void)
{
}

N::JitInterpreter & N::JitInterpreter::operator = (const JitInterpreter & jit)
{
  nMemberCopy ( jit , host   ) ;
  nMemberCopy ( jit , target ) ;
  return ME                    ;
}
