#include <qtnlc.h>

N::InstructionPool:: InstructionPool(void)
{
}

N::InstructionPool:: InstructionPool(const InstructionPool & pool)
{
  ME = pool ;
}

N::InstructionPool::~InstructionPool(void)
{
}

N::InstructionPool & N::InstructionPool::operator = (const InstructionPool & pool)
{
  nMemberCopy ( pool , instructions ) ;
  return ME                           ;
}

UUIDs & N::InstructionPool::toUuids(void)
{
  return *((UUIDs *)&instructions) ;
}
