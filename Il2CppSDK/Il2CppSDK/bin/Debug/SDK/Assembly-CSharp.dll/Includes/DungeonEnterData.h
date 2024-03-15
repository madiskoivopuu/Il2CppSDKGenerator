#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonEnterData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Grade() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DungeonEnterData*, uintptr_t))(Il2CppBase() + 0x13075F8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DungeonEnterData*, uintptr_t))(Il2CppBase() + 0x130764C))(this, reader);
	}

};

