#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonEnterData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Grade() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DungeonEnterData*, uintptr_t))(Il2CppBase() + 0x13075F8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DungeonEnterData*, uintptr_t))(Il2CppBase() + 0x130764C))(this, reader);
	}

};

