#ifndef APPS_CONSTANT_H
#define APPS_CONSTANT_H

class Constant {
public:
  constexpr static int FloatBufferSizeInScientificMode = 14;
  constexpr static int NumberOfDigitsInMantissaInScientificMode = 7;
  constexpr static int FloatBufferSizeInDecimalMode = 11;
  constexpr static int NumberOfDigitsInMantissaInDecimalMode = 4;
};

#endif
