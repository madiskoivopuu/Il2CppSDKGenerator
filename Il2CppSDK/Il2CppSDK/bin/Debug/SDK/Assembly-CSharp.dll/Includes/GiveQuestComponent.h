#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GiveQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GiveQuestComponent"));
	}

	template <typename R = bool> R& DontStart() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GiveQuestComponent*, Il2CppObject*))(Il2CppBase() + 0x17724FC))(this, target);
	}

};

