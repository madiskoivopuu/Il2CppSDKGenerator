#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class ClampAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "ClampAttribute"));
	}

	template <typename R = float> R& mMin() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& mMax() {
		return *(R*)((uintptr_t)this + 0x14);
	}


};

}
