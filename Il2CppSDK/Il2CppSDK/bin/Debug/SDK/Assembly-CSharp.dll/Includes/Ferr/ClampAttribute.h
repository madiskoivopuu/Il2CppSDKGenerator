#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class ClampAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "ClampAttribute"));
	}

	template <typename T = float> T& mMin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mMax() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
