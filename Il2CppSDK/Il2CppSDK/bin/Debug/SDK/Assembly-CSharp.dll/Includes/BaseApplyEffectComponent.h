#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseApplyEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseApplyEffectComponent"));
	}

	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Notification() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RandomTexts() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RandomNames() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& Personal() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(BaseApplyEffectComponent*, Il2CppObject*))(Il2CppBase() + 0xFBBF4C))(this, targetObject);
	}

};

