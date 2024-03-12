#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientIdManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientIdManager"));
	}

	template <typename T = int32_t> T& _lastId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T CreateNewId() {
		return ((T (*)(ClientIdManager*))(Il2CppBase() + 0xE18B14))(this);
	}
	template <typename T = void> T Reset(int32_t startId) {
		return ((T (*)(ClientIdManager*, int32_t))(Il2CppBase() + 0xE18B28))(this, startId);
	}

};

}
