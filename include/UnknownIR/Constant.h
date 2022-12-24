#pragma once
#include <UnknownIR/User.h>

namespace uir {
class Context;

class Constant : public User
{
public:
    explicit Constant(Type *Ty, unknown::StringRef ConstantName);
    virtual ~Constant();

public:
    // Static
    static Constant *get(Type *Ty, unknown::StringRef ConstantName);
};

class ConstantInt : public Constant
{
private:
    uint64_t mVal;

public:
    explicit ConstantInt(Type *Ty, uint64_t Val);
    virtual ~ConstantInt();

public:
    // Get/Set the value of ConstantInt
    uint64_t getValue() const;
    uint64_t getZExtValue() const;
    int64_t getSExtValue() const;

    void setValue(uint64_t Val);
    uint64_t setValue(uint64_t Val, uint32_t BitWidth, bool RetNewVal);

    // Return the bitwidth of this constant.
    uint32_t getBitWidth() const;

public:
    // Virtual functions
    // Get the readable name of this object
    virtual std::string getReadableName() const override;

public:
    // Static
    // Using BitWidth to convert a value to a new value
    static uint64_t convertValue(uint64_t Val, uint32_t BitWidth);

    // Get a ConstantInt from a value
    static ConstantInt *get(Context &Context, uint64_t Val, uint32_t BitWidth);

    // Get a ConstantInt from a value
    static ConstantInt *get(IntegerType *Ty, uint64_t Val, uint32_t BitWidth);
};

} // namespace uir
