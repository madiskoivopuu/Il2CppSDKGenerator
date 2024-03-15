#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldIsNotEmptyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldIsNotEmptyData"));
	}

	template <typename R = Il2CppString*> R& Blueprints() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(WorldIsNotEmptyData*, uintptr_t))(Il2CppBase() + 0x1131104))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(WorldIsNotEmptyData*, uintptr_t))(Il2CppBase() + 0x1131148))(this, reader);
	}

};

