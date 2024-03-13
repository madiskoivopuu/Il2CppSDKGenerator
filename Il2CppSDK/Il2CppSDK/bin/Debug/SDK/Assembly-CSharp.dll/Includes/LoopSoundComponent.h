#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoopSoundComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopSoundComponent"));
	}

	template <typename T = Il2CppString*> T& Work() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Loop() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(LoopSoundComponent*, Il2CppObject*))(Il2CppBase() + 0x1733234))(this, targetObject);
	}

};

