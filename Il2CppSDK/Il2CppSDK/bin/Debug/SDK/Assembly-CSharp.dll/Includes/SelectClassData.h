#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectClassData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectClassData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Fast() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SelectClassData*, uintptr_t))(Il2CppBase() + 0x13620AC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SelectClassData*, uintptr_t))(Il2CppBase() + 0x1362100))(this, reader);
	}

};

