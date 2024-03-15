#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnAndDestroyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnAndDestroyComponent"));
	}

	template <typename R = Il2CppString*> R& CreaturesRG() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& OverMaxCreaturesRG() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SpawnAndDestroyComponent*, Il2CppObject*))(Il2CppBase() + 0x14858C8))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(SpawnAndDestroyComponent*, Il2CppObject*))(Il2CppBase() + 0x1485978))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SpawnAndDestroyComponent*, uintptr_t))(Il2CppBase() + 0x1485A48))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SpawnAndDestroyComponent*, uintptr_t))(Il2CppBase() + 0x1485AF8))(this, writer);
	}

};

