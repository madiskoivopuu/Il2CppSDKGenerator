#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GhostyRuneDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GhostyRuneDescriptionComponent"));
	}

	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& DisabledText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1Icon*>*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(GhostyRuneDescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0x17723D4))(this, target);
	}

};

