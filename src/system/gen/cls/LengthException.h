/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_LengthException_h78d45e3c__
#define __GENERATED_cls_LengthException_h78d45e3c__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>
#include <cls/LogicException.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 246 */
FORWARD_DECLARE_CLASS(LengthException);
extern const ObjectStaticCallbacks cw_LengthException;
class c_LengthException : public c_LogicException {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_COMMON_NO_SWEEP(LengthException, LengthException)
  c_LengthException(const ObjectStaticCallbacks *cb = &cw_LengthException) : c_LogicException(cb) {
    if (!hhvm) setAttribute(NoDestructor);
  }
};
ObjectData *coo_LengthException() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_LengthException_h78d45e3c__
