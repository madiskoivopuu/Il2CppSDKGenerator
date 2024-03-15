#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinkingPlayerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkingPlayerData"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& BattleTag() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Region() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& IsLinked() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LinkingPlayerData*, uintptr_t))(Il2CppBase() + 0x142F1C0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LinkingPlayerData*, uintptr_t))(Il2CppBase() + 0x142EEB0))(this, writer);
	}

};

