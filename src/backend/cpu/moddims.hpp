#include <af/array.h>

namespace cpu
{
    template<typename T>
    af_array moddims(const af_array &arr, const af::dim4 &newDims);
}
