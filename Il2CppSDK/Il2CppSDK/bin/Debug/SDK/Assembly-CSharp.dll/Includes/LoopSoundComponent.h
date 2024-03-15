#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoopSoundComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopSoundComponent"));
	}

	template <typename R = Il2CppString*> R& Work() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Loop() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LoopSoundComponent*, Il2CppObject*))(Il2CppBase() + 0x1733234))(this, targetObject);
	}

};

