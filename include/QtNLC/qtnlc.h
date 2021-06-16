/****************************************************************************
 *                                                                          *
 * Copyright (C) 2015 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_NLC_H
#define QT_NLC_H

#include <QtCore>
#include <QtNetwork>
#include <QtSql>
#include <QtScript>
#include <Essentials>
#include <Mathematics>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTNLC_LIB)
#      define Q_NLC_EXPORT Q_DECL_EXPORT
#    else
#      define Q_NLC_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_NLC_EXPORT
#endif


namespace N {

class Q_NLC_EXPORT InstructionPool ;
class Q_NLC_EXPORT JitInterpreter  ;

union NLanguageInstruction {
  SUID           code      ;
  TUID           signCode  ;
  unsigned int   ucode[2]  ;
  unsigned short scode[4]  ;
  unsigned char  bytes[8]  ;
}                          ;

typedef union NLanguageInstruction Instruction  ;
typedef QList<Instruction>         Instructions ;

class Q_NLC_EXPORT InstructionPool
{
  public:

    Instructions instructions ;

    explicit InstructionPool     (void) ;
             InstructionPool     (const InstructionPool & pool) ;
    virtual ~InstructionPool     (void) ;

    InstructionPool & operator = (const InstructionPool & pool) ;
    UUIDs           & toUuids    (void) ;

  protected:

  private:


};

class Q_NLC_EXPORT JitInterpreter
{
  public:

    SUID host   ;
    SUID target ;

    explicit JitInterpreter     (void) ;
             JitInterpreter     (const JitInterpreter & jit) ;
    virtual ~JitInterpreter     (void) ;

    JitInterpreter & operator = (const JitInterpreter & jit) ;

  protected:

  private:


};

}

Q_DECLARE_METATYPE(N::Instruction)
Q_DECLARE_METATYPE(N::Instructions)
Q_DECLARE_METATYPE(N::InstructionPool)
Q_DECLARE_METATYPE(N::JitInterpreter)

QT_END_NAMESPACE

#endif
