#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class LambdaComparer1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "LambdaComparer`1"));
	}

	template <typename T = void*> T& func() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(LambdaComparer1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, x, y);
	}

};

}
