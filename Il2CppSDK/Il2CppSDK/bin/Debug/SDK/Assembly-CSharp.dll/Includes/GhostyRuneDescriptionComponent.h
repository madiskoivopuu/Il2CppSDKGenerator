#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GhostyRuneDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GhostyRuneDescriptionComponent"));
	}

	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& DisabledText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1Icon*>*& Icon() {
		return *(Nullable1Icon*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& LifeTime() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GhostyRuneDescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0x17723D4))(this, target);
	}

};

