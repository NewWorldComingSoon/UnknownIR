#pragma once
#include <TranslatorImpl.h>

namespace ufrontend {

class UnknownFrontendTranslatorImplX86 : public UnknownFrontendTranslatorImpl
{
public:
    UnknownFrontendTranslatorImplX86(uir::Context &C);
    virtual ~UnknownFrontendTranslatorImplX86();
};

} // namespace ufrontend
