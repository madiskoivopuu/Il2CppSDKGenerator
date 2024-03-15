#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

template <typename T>
class LambdaComparer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "LambdaComparer`1"));
	}

	 Func3<T, T, int32_t>*& func() {
		return *(Func3<T, T, int32_t>**)((uintptr_t)this + 0x0);
	}

	template <typename R = int32_t> R Compare(T x, T y) {
		return ((R (*)(LambdaComparer1*, T, T))(Il2CppBase() + 0x0))(this, x, y);
	}

};

}
