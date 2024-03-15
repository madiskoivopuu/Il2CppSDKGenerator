#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangePvpClanRelationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangePvpClanRelationData"));
	}

	template <typename R = bool> R& SetWar() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& TargetClanId() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChangePvpClanRelationData*, uintptr_t))(Il2CppBase() + 0x13EAAF4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChangePvpClanRelationData*, uintptr_t))(Il2CppBase() + 0x13EAB48))(this, reader);
	}

};

