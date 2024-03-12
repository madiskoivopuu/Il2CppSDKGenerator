#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewConditionComponent"));
	}

	template <typename T = Il2CppString*> T& Contains() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ViewConditionComponent*, uintptr_t))(Il2CppBase() + 0x15C8264))(this, target);
	}

};

}
