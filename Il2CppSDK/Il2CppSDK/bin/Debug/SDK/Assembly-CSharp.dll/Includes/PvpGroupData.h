#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvpGroupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvpGroupData"));
	}

	template <typename T = PvpGroupInfo*> T& Info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& OwnAccountId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T GetClanName(int64_t id) {
		return ((T (*)(PvpGroupData*, int64_t))(Il2CppBase() + 0x11C0808))(this, id);
	}

};

