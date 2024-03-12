#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpectatorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpectatorComponent"));
	}

	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Width() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Height() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& BossTag() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SpectatorComponent*, uintptr_t))(Il2CppBase() + 0x1486830))(this, targetObject);
	}

};

}
