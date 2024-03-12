#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangePvpClanRelationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangePvpClanRelationData"));
	}

	template <typename T = bool> T& SetWar() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& TargetClanId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChangePvpClanRelationData*, uintptr_t))(Il2CppBase() + 0x13EAAF4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChangePvpClanRelationData*, uintptr_t))(Il2CppBase() + 0x13EAB48))(this, reader);
	}

};

}
