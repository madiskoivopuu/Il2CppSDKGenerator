#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpectatorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpectatorComponent"));
	}

	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& Width() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Height() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppString*> R& BossTag() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SpectatorComponent*, Il2CppObject*))(Il2CppBase() + 0x1486830))(this, targetObject);
	}

};

