#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnAndDestroyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnAndDestroyComponent"));
	}

	template <typename T = Il2CppString*> T& CreaturesRG() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& OverMaxCreaturesRG() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SpawnAndDestroyComponent*, uintptr_t))(Il2CppBase() + 0x14858C8))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(SpawnAndDestroyComponent*, uintptr_t))(Il2CppBase() + 0x1485978))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SpawnAndDestroyComponent*, uintptr_t))(Il2CppBase() + 0x1485A48))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SpawnAndDestroyComponent*, uintptr_t))(Il2CppBase() + 0x1485AF8))(this, writer);
	}

};

}
