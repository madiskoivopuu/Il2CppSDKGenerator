#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyMagicComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1float>*& Duration() {
		return *(Nullable1float>**)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& SourceDuration() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x189463C))(this, target);
	}

};

