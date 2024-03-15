#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvpGroupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvpGroupData"));
	}

	template <typename R = ProtoModels::PvpGroupInfo*> R& Info() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& OwnAccountId() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R GetClanName(int64_t id) {
		return ((R (*)(PvpGroupData*, int64_t))(Il2CppBase() + 0x11C0808))(this, id);
	}

};

