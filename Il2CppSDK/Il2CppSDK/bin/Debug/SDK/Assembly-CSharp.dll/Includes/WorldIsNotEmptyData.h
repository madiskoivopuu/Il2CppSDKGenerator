#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldIsNotEmptyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldIsNotEmptyData"));
	}

	template <typename T = Il2CppString*> T& Blueprints() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(WorldIsNotEmptyData*, uintptr_t))(Il2CppBase() + 0x1131104))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(WorldIsNotEmptyData*, uintptr_t))(Il2CppBase() + 0x1131148))(this, reader);
	}

};

