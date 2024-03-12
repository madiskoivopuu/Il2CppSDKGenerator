#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapNotifyComponent"));
	}

	template <typename T = int32_t> T& MinTimeToEnd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& CheckLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MapNotifyComponent*, uintptr_t))(Il2CppBase() + 0x12BEAF0))(this, target);
	}

};

}
