#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsInfoData"));
	}

	template <typename R = int32_t> R& PortalsRank() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<int64_t>*> R& Players() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = LobbyType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

